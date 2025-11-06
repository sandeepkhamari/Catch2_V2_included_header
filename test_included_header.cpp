#include <iostream>
// inlcuded headers are supported only in Catch2 v2, not v3.
//#include <catch2/included/catch_all.hpp>
#include <vector>
#include <catch2/catch_all.hpp>

TEST_CASE("Vector operations")
{
  std::vector<int> v;
  v.push_back(1);

  REQUIRE(v.size() > 0);

  v.push_back(2);

  REQUIRE(v.size() == 2);

  v.clear();

  REQUIRE(v.size() == 0);
}
