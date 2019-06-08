#include <iostream>
#include <string>
#include <tuple>
#include <type_traits>

template <typename T, typename enable = void> struct is : std::false_type {};
template <typename T>
struct is<T, decltype(std::declval<T &>().brave_enough())> : std::true_type {};

template <typename Me, typename You, typename Things>
typename std::enable_if_t<is<Me>{}> say(Me &me, You &you, Things &toSay) {
  return me >> toSay >> you;
}

struct You {};

struct Me {
  // bool brave_enough() {}
};

int main() {
  Me me;
  You you;

  std::string thoughts;

  std::cin >> thoughts;

  say<Me, You, std::string>(me, you, thoughts);
}
