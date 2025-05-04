#ifndef SAMPLES_H
#define SAMPLES_H

#include <vector>
#include "MineralSample.h"

class Samples
{
private:
  std::vector<MineralSample> samples;

public:
  void add_sample(double weight, double volume);
  double relative_number_of_gold_samples() const;
};

#endif // SAMPLES_H
