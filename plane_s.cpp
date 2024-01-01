#include <iostream>

int main() {
    int planeHeight;
    std::cout << "Enter the current plane height in feet: ";
    std::cin >> planeHeight;

    if (planeHeight <= 10000) 
    {
        std::cout << "Pilot: Go around" << std::endl;
    } 
    else if (planeHeight >= 5000 && planeHeight <= 20000) 
    {
        std::cout << "Pilot: Open gears of tires" << std::endl;
    }
    if (planeHeight > 2000 || planeHeight < 1000) 
    {
        std::cout << "Pilot: Open flaps" << std::endl;
    }
    if (planeHeight < 1000) {
        std::cout << "Pilot: Land the plane and apply reverse thrust" << std::endl;
    }

    return 0;
}
