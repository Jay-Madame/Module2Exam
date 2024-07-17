#pragma once
#include <iostream>

class Date
{
private:
    int day, month, year;
    std::string Month;

public:
    Date();
    Date(int d, int m, int y);
    ~Date();
    void printOutDate1();
    void printOutDate2();
    void printOutDate3();

private: 
    std::string monthToString(int m);
};