
#pragma once
#include <string>

struct bar
{
    std::string value() const;
  private:
    std::string value_{"bar"};
};
