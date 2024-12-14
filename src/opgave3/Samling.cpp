#include "Samling.h"

double gennemsnitligModstand(std::vector<Wire> wires);

void Samling::addWire(double specModstand, double laengde, double tvaersnit) {
  wires.push_back(Wire(specModstand, tvaersnit, laengde));
}

double Samling::gennemsnit() {
  return gennemsnitligModstand(wires);
}