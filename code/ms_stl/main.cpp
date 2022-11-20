#include <functional>
#include <iostream>

struct Example {
    int memberData = 2;
    int memberFunction() { return 3; }
};
using F = std::function<int(Example*)>;

struct Restricted {
    Restricted(int v) : m{v} {}
    Restricted(const Restricted&) = delete;
    Restricted(Restricted&&) = delete;
    Restricted& operator=(const Restricted&) = delete;
    Restricted& operator=(Restricted&&) = delete;

    void operator() (int v) const {
        std::cout << "restriced: " << v + m << '\n';
    }

    int m;
};
using MOF = std::move_only_function<void(int) const>;

int main() {
    auto example = Example{};
    auto dataFunc = F{&Example::memberData};
    std::cout << dataFunc(&example) << '\n';

    auto memberFunc = F{&Example::memberFunction};
    std::cout << memberFunc(&example) << '\n';

    // auto empty = F{};
    // std::cout << empty(&example) << '\n';

    std::cout << sizeof(F{}) << '\n';

    auto mof = MOF{std::in_place_type_t<Restricted>{}, 6};
    mof(7);
    // auto x = std::move(mof);
    // x(8);

    std::cout << sizeof(MOF{}) << '\n';
}
