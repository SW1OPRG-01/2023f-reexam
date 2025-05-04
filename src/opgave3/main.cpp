#include <iostream>
#include "MineralSample.h"
#include "Samples.h"

int main() {
    // Fejl-test
    MineralSample m1(-10, 5);     // Ugyldig vægt
    MineralSample m2(10, -5);     // Ugyldig volumen
    MineralSample m3(10, 0);      // Volumen = 0

    // Test af isGold og isSilver
    MineralSample s1(19.3, 1.0);      // Guld
    MineralSample s2(105.0, 10.0);    // Sølv
    MineralSample s3(100.0, 10.0);    // Ingen

    std::cout << "Sample 1 is gold: " << s1.isGold() << ", is silver: " << s1.isSilver() << std::endl;
    std::cout << "Sample 2 is gold: " << s2.isGold() << ", is silver: " << s2.isSilver() << std::endl;
    std::cout << "Sample 3 is gold: " << s3.isGold() << ", is silver: " << s3.isSilver() << std::endl;

    // Test af Samples
    Samples collection;
    collection.addSample(19.3, 1.0);    // Guld
    collection.addSample(105.0, 10.0);  // Sølv
    collection.addSample(100.0, 10.0);  // Ingen

    double goldRatio = collection.relativeNumberOfGoldSamples();
    std::cout << "Relative number of gold samples: " << goldRatio << std::endl;

    return 0;
}
