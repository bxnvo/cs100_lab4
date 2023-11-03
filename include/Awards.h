
#ifndef AWARDS_H
#define AWARDS_H

#include <string>
#include <vector>

namespace awards {


class RankList {
public:
  std::vector<std::string> names = {"Jason", "Roy", "Cass", "Steph", "Leo", "Mark"};
  int index;
  RankList() : index(0) {}
  virtual std::string getNext() {
    index++;
    return names.at(index - 1);
  }
};


class AwardCeremonyActions {
public:
  virtual void playAnthem() = 0;
  virtual void turnOffTheLightsAndGoHome() = 0;
  virtual void awardBronze(std::string recipient) = 0;
  virtual void awardSilver(std::string recipient) = 0;
  virtual void awardGold(std::string recipient) = 0;
};


void performAwardCeremony(RankList& recipients, AwardCeremonyActions& actions);


}


#endif

