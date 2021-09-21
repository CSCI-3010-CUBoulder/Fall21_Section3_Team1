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

TEST_CASE("Sum all of the numbers in the vector","[Sum]")
{
  std::vector<int> v{1,2,3,4,5};
  std::vector<int> v1{1,-2,3};
  std::vector<int> v2{1,2,3,4,0};
  
  REQUIRE(Sum(v)==15);

  SECTION( "Testing with negative number in vector" )
  {
    REQUIRE(Sum(v1)==2);
  }
  SECTION("Adding with zero")
  {
    REQUIRE(Sum(v2)==10);
  }
}
