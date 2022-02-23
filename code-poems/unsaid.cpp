#include <iostream>
#include <string>
#include <type_traits>

template <typename T, typename enable = void>
struct is_brave : std::false_type {};

template <typename T>
struct is_brave<T, std::void_t<decltype(std::declval<T &>().enough())>>
    : std::true_type {};

template <typename T, typename U, typename V>
typename std::enable_if_t<is_brave<T>{}> tell(T &, U &, V &) {
}

struct You {};

struct Me {
   //bool enough() { return true; }
};

int main() {
  Me me;
  You you;

  std::string thoughts;

  std::cin >> thoughts;

  tell<Me, You, std::string>(me, you, thoughts);
}
