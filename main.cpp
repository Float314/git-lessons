#include <algorithm>
#include <iostream>
#include <print>

int main() {
  std::string inp;
  for (;;) {
    std::cout << ">";
    std::cin >> inp;

    if (inp == "mommy")
      std::print("goob boy~~~~");
    else if (inp == "exit" || inp == "quit")
      break;
    else
      std::print("Unknown command {}, check docs", inp);
  }
  return 0;
}
