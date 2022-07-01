#include "gtest/gtest.h"
#include "src/lib/trojanmap.h"

// Test Autocomplete function: 5 points
TEST(TrojanMapTest, Autocomplete1) {
  TrojanMap m;
  
  // Test the simple case 0.5pt
  auto names = m.Autocomplete("Ch");
  std::unordered_set<std::string> gt1 = {"Chinese Street Food", "Chase", "Chevron 2", "Chucks Chicken & Waffles", "Cheebos Burger", "Chick-fil-A",
  "Chevron 1", "Church of Christ", "Chipotle", "Chase Plaza Heliport", "Chevron"}; // groundtruth for "Ch"
  int success = 0;
  for (auto& n: names) {
    EXPECT_EQ(gt1.count(n) > 0, true);
    if (gt1.count(n) > 0){
      success++;
    }
  }
  EXPECT_EQ(success, gt1.size());
  // Test the lower case 0.5pt
  names = m.Autocomplete("ch");
  std::unordered_set<std::string> gt2 = {"Chinese Street Food", "Chase", "Chevron 2", "Chucks Chicken & Waffles", "Cheebos Burger", "Chick-fil-A",
  "Chevron 1", "Church of Christ", "Chipotle", "Chase Plaza Heliport", "Chevron"}; // groundtruth for "ch"
  success = 0;
  for (auto& n: names) {
    EXPECT_EQ(gt2.count(n) > 0, true);
    if (gt2.count(n) > 0){
      success++;
    }
  }
  EXPECT_EQ(success, gt2.size());
  // Test the lower and upper case 1pt
  names = m.Autocomplete("cH"); 
  std::unordered_set<std::string> gt3 = {"Chinese Street Food", "Chase", "Chevron 2", "Chucks Chicken & Waffles", "Cheebos Burger", "Chick-fil-A",
  "Chevron 1", "Church of Christ", "Chipotle", "Chase Plaza Heliport", "Chevron"}; // groundtruth for "cH"
  success = 0;
  for (auto& n: names) {
    EXPECT_EQ(gt3.count(n) > 0, true);
    if (gt3.count(n) > 0){
      success++;
    }
  }
  EXPECT_EQ(success, gt3.size());
  // Test the upper case 1pt
  names = m.Autocomplete("CH"); 
  std::unordered_set<std::string> gt4 = {"Chinese Street Food", "Chase", "Chevron 2", "Chucks Chicken & Waffles", "Cheebos Burger", "Chick-fil-A",
  "Chevron 1", "Church of Christ", "Chipotle", "Chase Plaza Heliport", "Chevron"}; // groundtruth for "cH"
  success = 0;
  for (auto& n: names) {
    EXPECT_EQ(gt4.count(n) > 0, true);
    if (gt4.count(n) > 0){
      success++;
    }
  }
  EXPECT_EQ(success, gt4.size());
}

TEST(TrojanMapTest, Autocomplete2) {
  TrojanMap m;
  
  // Test the simple case 1pt
  auto names = m.Autocomplete("Ra");
  std::unordered_set<std::string> gt1 = {"Ralphs", "Ramen KenJo"};
  int success = 0;
  for (auto& n: names) {
    EXPECT_EQ(gt1.count(n) > 0, true);
    if (gt1.count(n) > 0){
      success++;
    }
  }
  EXPECT_EQ(success, gt1.size());
  // Test the lower case 1pt
  names = m.Autocomplete("rA");
  std::unordered_set<std::string> gt2 = {"Ralphs", "Ramen KenJo"}; // groundtruth for "ch"
  success = 0;
  for (auto& n: names) {
    EXPECT_EQ(gt2.count(n) > 0, true);
    if (gt2.count(n) > 0){
      success++;
    }
  }
  EXPECT_EQ(success, gt2.size());

}