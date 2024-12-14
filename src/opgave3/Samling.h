#ifndef SAMLING_H
#define SAMLING_H

#include <vector>
#include "Wire.h"

class Samling {
  public:
    void addWire(double specModstand, double laengde, double tvaersnit);
    double gennemsnit();
  private:
    std::vector<Wire> wires;
};

#endif