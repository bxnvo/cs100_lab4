#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../include/Awards.h"


using namespace awards;


class mockAwardCeremony : public AwardCeremonyActions {
  public:
     MOCK_METHOD(void, playAnthem, (), (override));
     MOCK_METHOD(void, turnOffTheLightsAndGoHome, (), (override));
     MOCK_METHOD(void, awardBronze, (std::string recipient), (override));
     MOCK_METHOD(void, awardSilver, (std::string recipient), (override));
     MOCK_METHOD(void, awardGold, (std::string recipient), (override));
};


TEST(AwardsTests, performCeremony) {
  RankList test;
  mockAwardCeremony testCeremony;
  EXPECT_CALL(testCeremony, playAnthem())              
      .Times(1);
  EXPECT_CALL(testCeremony, awardBronze("Jason"))              
      .Times(1);
  EXPECT_CALL(testCeremony, awardSilver("Roy"))              
      .Times(1);
  EXPECT_CALL(testCeremony, awardGold("Cass"))              
      .Times(1);
  EXPECT_CALL(testCeremony, turnOffTheLightsAndGoHome())              
      .Times(1);
  //test.index = 0;
  performAwardCeremony(test, testCeremony);
}


int main () {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
