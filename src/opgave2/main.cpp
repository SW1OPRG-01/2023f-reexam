#include <iostream>

void addSecondToFirst(int* first, int* second) {
  *first += *second;
}

int main(int argc, char** argv) {
  int first = 2;
  int second = 4;
  addSecondToFirst(&first, &second);
  std::cout << first << std::endl;
  return 0;
}