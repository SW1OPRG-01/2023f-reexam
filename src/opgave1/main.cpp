#include <iostream>
#include <string>

double calc_bmi(double weight, double height);
std::string bmi_category(double bmi);

int main(int argc, char** argv) {
  
  double weight;
  double height;

  std::cout << "Gief weight (in kilos) and height (in meters): ";
  std::cin >> weight >> height;
  double bmi = calc_bmi(weight, height);
  std::cout << bmi << " " << bmi_category(bmi) << std::endl;
  
  return 0;
}

double calc_bmi(double weight, double height) {
  return weight / (height * height);
}

std::string bmi_category(double bmi) {  
  if(bmi <= 18.5) {
    return "Undervægtig";
  } else if(bmi > 18.5 && bmi <= 25) {
    return "Normalvægtig";
  } else if(bmi > 25 && bmi <= 30) {
    return "Overvægtig";
  } else {
    return "Svært overvægtig";
  }
}