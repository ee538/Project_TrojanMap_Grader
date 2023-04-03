#include "gtest/gtest.h"
#include "src/lib/trojanmap.h"

TEST(TrojanMapTest, CheckPath) {
  TrojanMap m;
  std::vector<std::pair<double, std::vector<std::string>>> input {{0.05, {"Target", "Ralphs"}},
                                                                  {0.01, {"Ralphs", "Target"}},
                                                                  {0.02, {"KFC", "Target"}},
                                                                  {999, {"dummy", "dummy"}}};
  auto actual = m.CheckPath(input);
  std::vector<bool> expected {true, false, false, false};
  EXPECT_EQ(expected, actual);
}
