#include "gtest/gtest.h"
#include "src/lib/trojanmap.h"

// Test Q7 cycle detection function
TEST(TrojanMapTest, CycleDetection) {
  TrojanMap m;
  
  // Test case 1 2.5pts
  std::vector<double> square1 = {-118.299, -118.264, 34.032, 34.011};
  auto sub1 = m.GetSubgraph(square1);
  bool result1 = m.CycleDetection(sub1, square1);
  EXPECT_EQ(result1, true);

  // Test case 2 2.5pts
  std::vector<double> square2 = {-118.290, -118.289, 34.030, 34.020};
  auto sub2 = m.GetSubgraph(square2);
  bool result2 = m.CycleDetection(sub2, square2);
  EXPECT_EQ(result2, false);
}


TEST(TrojanMapTest, CycleDetection2) {
  TrojanMap m;
  
  // Test case 1 2.5pts
  std::vector<double> square1 = {-118.2991, -118.2641, 34.0321, 34.0111};
  auto sub1 = m.GetSubgraph(square1);
  bool result1 = m.CycleDetection(sub1, square1);
  EXPECT_EQ(result1, true);

  // Test case 2 2.5pts
  std::vector<double> square2 = {-118.2901, -118.2891, 34.0301, 34.0201};
  auto sub2 = m.GetSubgraph(square2);
  bool result2 = m.CycleDetection(sub2, square2);
  EXPECT_EQ(result2, false);
}