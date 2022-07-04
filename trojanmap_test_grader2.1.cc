#include "gtest/gtest.h"
#include "src/lib/trojanmap.h"


// Test FindPosition function: 1 point
TEST(TrojanMapTest, FindPosition) {
  TrojanMap m;
  
  // Test Chick-fil-A 0.5pt
  auto position = m.GetPosition("Chick-fil-A");
  std::pair<double, double> gt1(34.0167334, -118.2825307); // groundtruth for "Chick-fil-A"
  EXPECT_EQ(position, gt1);
  // Test Ralphs 0.5pt
  position = m.GetPosition("Ralphs");
  std::pair<double, double> gt2(34.0317653, -118.2908339); // groundtruth for "Ralphs"
  EXPECT_EQ(position, gt2);
  // Test Target 0.5pt
  position = m.GetPosition("Target");
  std::pair<double, double> gt3(34.0257016, -118.2843512); // groundtruth for "Target"
  EXPECT_EQ(position, gt3);
  // Test Unknown 0.5pt
  position = m.GetPosition("XXX");
  std::pair<double, double> gt4(-1, -1);
  EXPECT_EQ(position, gt4);
  // Test KFC 1pt
  position = m.GetPosition("Porterhouse Fried Chicken");
  std::pair<double, double> gt5(34.0038438, -118.3178156); // groundtruth for "KFC"
  EXPECT_EQ(position, gt5);
  // Test USC Village Dining Hall 1pt
  position = m.GetPosition("USC Parking");
  std::pair<double, double> gt6(34.0238824,-118.2801114); // groundtruth for "USC Village Dining Hall"
  EXPECT_EQ(position, gt6);
  // Test USC Village Gym 1pt
  position = m.GetPosition("USC Village Gym");
  std::pair<double, double> gt7(34.0252392, -118.2858186); // groundtruth for "USC Village Gym"
  EXPECT_EQ(position, gt7);

}