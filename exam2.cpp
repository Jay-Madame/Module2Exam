#include <iostream>
#include "date.cpp"
#include "car.cpp"

int main()
{
    // date

    int day, month, year, option;
    std::cout << "Please enter a day, month, and year: " << std::endl;
    std::cin >> day >> month >> year;
    Date defaultDate;
    defaultDate.printOutDate1();
    defaultDate.printOutDate2();
    defaultDate.printOutDate3();
    std::cout << std::endl;
    Date anotherDate(day, month, year);
    anotherDate.printOutDate1();
    anotherDate.printOutDate2();
    anotherDate.printOutDate3();

    // car tiem :3
    std::string make, model;
    std::cout << "What kind of car do you drive? " << std::endl
              << "(Please enter in make, model, year format): " << std::endl;
    std::cin >> make >> model >> year;
    std::cout << "Are you 1. British or 2. U.S? " << std::endl;
    std::cin >> option;
    Car newCar(make, model, year);
    newCar.carDetails(option);
    newCar.accelerate();
    newCar.accelerate();
    newCar.showCurrentSpeed(option);
    newCar.brake();
    newCar.brake();
    newCar.showCurrentSpeed(option);
    return 0;
}