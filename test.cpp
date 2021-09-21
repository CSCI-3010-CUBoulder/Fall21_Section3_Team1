#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Sign is computing correctly", "[Sign]")
{
  REQUIRE(Sign(-5) == 5);
  REQUIRE(Sign(66) == -66);
  REQUIRE(Sign(-10) == 10);
}

TEST_CASE("Sum all of the numbers in the vector", "[Sum]")
{
  std::vector<int> v2{1, 5, 1};
  REQUIRE(Sum(v2) == 7);
}
