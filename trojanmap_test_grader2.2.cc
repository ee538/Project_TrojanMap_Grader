#include "gtest/gtest.h"
#include "src/lib/trojanmap.h"

// Test CalculateEditDistance function 5 pts
TEST(TrojanMapTest, CalculateEditDistance) {
  TrojanMap m;
  EXPECT_EQ(m.CalculateEditDistance("horse", "ros"), 3);
  EXPECT_EQ(m.CalculateEditDistance("intention", "execution"), 5);
  EXPECT_EQ(m.CalculateEditDistance("dough", "cough"), 1);
  EXPECT_EQ(m.CalculateEditDistance("bail", "bale"), 2);
  EXPECT_EQ(m.CalculateEditDistance("welcome", "composition"), 10);
}


// Test FindClosestName function 5 pts
TEST(TrojanMapTest, FindClosestName) {
  TrojanMap m;
  EXPECT_EQ(m.FindClosestName("Rolphs"), "Ralphs");
  EXPECT_EQ(m.FindClosestName("Targeety"), "Target");
  EXPECT_EQ(m.FindClosestName("Chiotttle"), "Chipotle");
  EXPECT_EQ(m.FindClosestName("Chaserr"), "Chase");
  EXPECT_EQ(m.FindClosestName("Chevrxn"), "Chevron");
}