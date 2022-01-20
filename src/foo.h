
#pragma once
#include <string>

struct foo
{
    std::string value() const;
  private:
    std::string value_{"foo"};
};
