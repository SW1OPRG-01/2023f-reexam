#include "MineralSample.h"
#include <iostream>
#include <cmath>

const double DENSITY_GOLD = 19.30;
const double DENSITY_SILVER = 10.50;

MineralSample::MineralSample(double weight, double volume)
{
  if (weight < 0 || volume < 0 || volume == 0)
  {
    std::cerr << "Fejl: ugyldig vægt eller volumen. Vægten sættes til 0 og volumen til 1." << std::endl;
    this->weight = 0;
    this->volume = 1;
  }
  else
  {
    weight = weight;
    volume = volume;
  }
}

bool MineralSample::is_gold() const
{
  double density = weight / volume;
  return std::abs(density - DENSITY_GOLD) < 5.0e-2;
}

bool MineralSample::is_silver() const
{
  double density = weight / volume;
  return std::abs(density - DENSITY_SILVER) < 5.0e-2;
}
