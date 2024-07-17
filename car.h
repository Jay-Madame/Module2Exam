#pragma once
#include <iostream>

class Car{
    private:
    std::string make, model;
    int year, speed, speedUK;

    public:
    Car();
    Car(std::string mk, std::string md, int y);
    int getSpeedUS();
    int getSpeedUK();
    int accelerate();
    int brake();
    void carDetails(int num);
    void showCurrentSpeed(int num);
};
