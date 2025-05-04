#include "Samples.h"

void Samples::add_sample(double weight, double volume)
{
  MineralSample sample(weight, volume);
  samples.push_back(sample);
}

double Samples::relative_number_of_gold_samples() const
{
  if (samples.empty())
    return 0.0;

  int goldCount = 0;
  for (MineralSample sample : samples)
  {
    if (sample.isGold())
    {
      ++goldCount;
    }
  }
  return static_cast<double>(goldCount) / samples.size();
}
