#include <iostream>
#include <string>
#include <type_traits>

template <typename T, typename enable = void>
struct is_brave : std::false_type {};

template <typename T>
struct is_brave<T, decltype(std::declval<T &>().enough(), void())>
    : std::true_type {};

template <typename Me, typename You, typename Things>
typename std::enable_if_t<is_brave<Me>{}> say(Me &me, You &you, Things &toSay) {
}

struct You {};

struct Me {
  // bool enough() {}
};

int main() {
  Me me;
  You you;

  std::string thoughts;

  std::cin >> thoughts;

  say<Me, You, std::string>(me, you, thoughts);
}
