#include "gtest/gtest.h"
#include "src/lib/trojanmap.h"

// Test cycle detection function 5pts
TEST(TrojanMapTest, TopologicalSort1) {
  TrojanMap m;
  
  std::vector<std::string> location_names = {"Cardinal Gardens", "Coffee Bean1","CVS"};
  std::vector<std::vector<std::string>> dependencies = {{"Cardinal Gardens","Coffee Bean1"}, {"Cardinal Gardens","CVS"}, {"Coffee Bean1","CVS"}};
  auto result = m.DeliveringTrojan(location_names, dependencies);
  std::vector<std::string> gt ={"Cardinal Gardens", "Coffee Bean1","CVS"};
  EXPECT_EQ(result, gt);
}

// Test cycle detection function 5pts
TEST(TrojanMapTest, TopologicalSort2) {
  TrojanMap m;
  
  std::vector<std::string> location_names = {"Cardinal Gardens", "Coffee Bean1","CVS", "Target", "Ralphs"};
  std::vector<std::vector<std::string>> dependencies = {{"Cardinal Gardens","Coffee Bean1"}, {"Cardinal Gardens","CVS"}, {"Coffee Bean1","CVS"}, {"Target","Ralphs"}, {"Target","CVS"}, {"CVS","Ralphs"}};
  auto result = m.DeliveringTrojan(location_names, dependencies);
  for (auto& x: result)
    std::cout << x << std::endl;
  for (auto& d: dependencies) {
    auto it1 = find (result.begin(), result.end(), d[0]);
    auto it2 = find (result.begin(), result.end(), d[1]);
    EXPECT_EQ(it1 < it2, true);
  }
}