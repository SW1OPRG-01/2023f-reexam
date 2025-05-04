#include <iostream>

using namespace std;

int main()
{
  char sex;
  double weight;
  double height;
  double age;
  double BMR;

  cout << "Indtast f for kvinde eller m for mand: ";
  cin >> sex;
  
  if (sex != 'f' && sex != 'm')
  {
    sex = 'f';
    cout << "Forkert input, det antages at det drejer sig om en kvinde " << endl;
  }
  
  cout << "Indtast vaegt, hoejde og alder som kommatal, adskilt med mellemrum : ";
  cin >> weight >> height >> age;
  
  if (sex == 'm')
  {
    BMR = 88.362 + 13.397 * weight + 4.799 * height - 5.667 * age;
  }
  else
  {
    BMR = 447.593 + 9.247 * weight + 3.098 * height - 4.330 * age;
  }
  
  cout << "Din BMR er " << BMR << " kcal/doegn" << endl;
  
  return 0;
}