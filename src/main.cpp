#include <algorithm>
#include <iostream>
#include <functional>
#include <vector>

int main()
{
  [out = std::ref(std::cout << "Hello ")]() {
    out.get() << "World\n";
  }();
  return 0;
}
