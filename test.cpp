#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Sign is computing correctly","[Sign]")
{
  REQUIRE(Sign(-1)==-1);
  REQUIRE(Sign(-44)==-1);
  REQUIRE(Sign(44)==1);
  REQUIRE(Sign(1123)==1);
  REQUIRE(Sign(-5)==-1);
  REQUIRE(Sign(-33)==-1);
}
