#pragma once
#include "car.h"

Car::Car()
{
    speed = 0;
}
Car::Car(std::string mk, std::string md, int y) : make(mk), model(md), year(y)
{
    speed = 0;
}
int Car::getSpeedUS()
{
    return speed;
}
int Car::getSpeedUK() {
    speedUK = speed* 1.60934;
    return speedUK;
}
int Car::accelerate() {
    speed += 5;
    speedUK += (5*1.60934);
}
int Car::brake() {
    speed -= 5;
    speedUK += (5*1.60934);
}

void Car::carDetails(int num){
    std::cout << "You are driving a " << make
    << " " << model << " from " << year << " at ";
    if (num == 1){
        std::cout<< getSpeedUK() << " kph" <<std::endl;
    }
    else{
        std::cout<< getSpeedUS() << " mph" <<std::endl;
    }
}

void Car::showCurrentSpeed(int num)
{
    std::cout<< "You are currently at ";
    if (num == 1){
        std::cout<< getSpeedUK() << " kph" <<std::endl;
    }
    else{
        std::cout<< getSpeedUS() << " mph" <<std::endl;
    }
}