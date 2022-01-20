#include <algorithm>
#include <iostream>
#include <functional>
#include <vector>
#include "foo.h"

int main()
{
  [out = std::ref(std::cout << "Hello ")]() {
    out.get() << "World\n";
  }();
  foo obj;
  std::cout << obj.value() << "\n";
  return 0;
}
