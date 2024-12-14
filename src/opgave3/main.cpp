#include <iostream>
#include <vector>
#include "Wire.h"
#include "Samling.h"

double gennemsnitligModstand(std::vector<Wire> wires) {
  
  if(wires.size() == 0) {
    return 0;
  }
  
  double sum = 0;
  for(Wire wire: wires) {
    sum +=wire.getModstand();
  }
  return sum / wires.size();
}

int main(int argc, char** argv) {
  Wire gold = Wire(0.0244e-6, 12.0e-6, 1);
  std::cout << gold.getModstand() << std::endl;
  Wire steel = Wire(0.72e-6, 12e-6, 1);
  std::cout << steel.getModstand() << std::endl;

  Samling samling = Samling();
  samling.addWire(0.0244e-6, 1, 12.0e-6);
  samling.addWire(0.72e-6, 1, 12e-6);
  std::cout << samling.gennemsnit() << std::endl;


  return 0;
}