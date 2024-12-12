#include <iostream>
#include "Wire.h"

int main(int argc, char** argv) {
  Wire w1 = Wire(1.0, 12.0e-6, 0.0244e-6);
  std::cout << w1.getModstand() << std::endl;
  return 0;
}