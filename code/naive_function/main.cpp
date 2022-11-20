#include <iostream>
#include "Function.hpp"

using Clicked = Function<void()>;

struct Button {
  Clicked clicked;
};

struct Dialog {
  Button okButton;
  Button cancelButton;

  Dialog() {
      okButton.clicked = Clicked{[this]() {
        this->onOkClicked();
      }};
  }

  void onOkClicked() {
      std::cout << "Ok clicked!";
  }
  void onCancelClicked() {
      std::cout << "Cancel clicked!";
  }
};

int main() {
  auto dialog = Dialog{};
  dialog.okButton.clicked();
}
