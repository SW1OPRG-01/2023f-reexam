#ifndef MINERAL_SAMPLE_H
#define MINERAL_SAMPLE_H

class MineralSample
{
private:
  double weight; // [g]
  double volume; // [cm^3]

public:
  MineralSample(double weight, double volume);

  bool is_gold() const;
  bool is_silver() const;
};

#endif // MINERAL_SAMPLE_H
