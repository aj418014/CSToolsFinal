#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>

using namespace std;

int countChar(string pName)
{
  return pName.length();
}
TEST_CASE("check to see if countchar works")
{
  CHECK(countChar("Hello") == 5);
  CHECK(countChar("Hi") == 2);
}

