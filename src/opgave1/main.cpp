#include <iostream>

using namespace std;

void mid_value(const double *left, const double *right, double *middle);
void min_max_value(double left, double right, double *min, double *max);

int main()
{
  double left, right;
  double middle;
  double min, max;
  cout << "Indtast 2 kommatal: ";
  cin >> left >> right;
  mid_value(&left, &right, &middle);
  min_max_value(left, right, &min, &max);
  cout << endl
  << "Middle value er: " << middle << endl;
  cout << "Minimum value er: " << min << " og maximum value er " << max << endl;
  return 0;
}

void mid_value(const double *left, const double *right, double *middle){
  *middle = (*left + *right) / 2;
}

void min_max_value(double left, double right, double *min, double *max)
{
  if (left < right)
  {
    *min = left;
    *max = right;
  }
  else
  {
    *min = right;
    *max = left;
  }
}