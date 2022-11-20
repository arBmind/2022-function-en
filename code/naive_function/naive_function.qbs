Application {
    consoleApplication: true

    Depends { name: "cpp" }
    cpp.cxxLanguageVersion: "c++20"

    files: [
        "Function.hpp",
        "main.cpp",
    ]
}
