#pragma once
#include <memory>
#include <functional>

template<class Signature> struct Function;

template<class Ret, class... Args>
struct Function<Ret(Args...)> {
  Function() = default;
  template<class Callable>
  requires(!std::is_same_v<Callable, Function>)
  Function(const Callable& callable) : m_ptr{new CallImpl<Callable>{callable}} {}

  Ret operator() (Args... args) const { return m_ptr->call((Args)args...); }

private:
  struct CallInterface {
    virtual Ret call(Args...) = 0;
  };
  template<class Callable>
  struct CallImpl final : CallInterface {
    Callable m_callable;
    CallImpl(const Callable& callable) : m_callable{callable} {}

    Ret call(Args... args) override { return std::invoke(m_callable, (Args)args...); }
  };
  std::shared_ptr<CallInterface> m_ptr;
};
