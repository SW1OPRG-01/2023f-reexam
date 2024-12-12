#include "Wire.h"

Wire::Wire(double specificResistance, double crossSectionalArea, double length) : specificResistance(specificResistance), crossSectionalArea(crossSectionalArea), length(length) { }

double Wire::getModstand() {
  if (specificResistance == 0 || crossSectionalArea == 0 || length == 0) {
    return 0;
  }
  return (specificResistance * length) / crossSectionalArea;
}