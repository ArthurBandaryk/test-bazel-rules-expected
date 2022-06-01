#include "tl/expected.hpp"

int main(int argc, char **argv) {
  tl::expected<int, int> e1 = 42;
  return 0;
}