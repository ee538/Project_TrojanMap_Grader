#include "gtest/gtest.h"
#include "src/lib/trojanmap.h"


TEST(TrojanMapTest, GetAllLocationsFromCategory) {
  TrojanMap m;
  
  auto output = m.GetAllLocationsFromCategory("bank");
  std::set<std::string> expected = {"9591449441", "5237417651", "9591449465"};
  std::set<std::string> output_set(output.begin(), output.end());
  EXPECT_EQ(output_set, expected);
}

TEST(TrojanMapTest, GetAllLocationsFromCategory2) {
  TrojanMap m;
  
  auto output = m.GetAllLocationsFromCategory("supermarket");
  std::set<std::string> expected = {"5237417649", "2578244375", "7158034317", "6045067406"};
  std::set<std::string> output_set(output.begin(), output.end());
  EXPECT_EQ(output_set, expected);
}