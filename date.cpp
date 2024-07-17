#include "date.h"

Date::Date() : day(1), month(1), year(2000)
{
    Month = monthToString(month);
}

Date::Date(int d, int m, int y) : day(d), month(m), year(y)
{
    Month = monthToString(month);
}

Date::~Date()
{
}

void Date::printOutDate1()
{
    std::cout << month << "/"
              << day << "/"
              << year << std::endl;
}

void Date::printOutDate2()
{
    std::cout << Month << " " << day
              << ", " << year << std::endl;
}
void Date::printOutDate3()
{
    std::cout << day << " " << Month
              << " " << year << std::endl;
}

std::string Date::monthToString(int m)
{
    switch (m)
    {
    case 1:
        Month = "January";
        break;
    case 2:
        Month = "February";
        break;
    case 3:
        Month = "March";
        break;
    case 4:
        Month = "April";
        break;
    case 5:
        Month = "May";
        break;
    case 6:
        Month = "June";
        break;
    case 7:
        Month = "July";
        break;
    case 8:
        Month = "August";
        break;
    case 9:
        Month = "September";
        break;
    case 10:
        Month = "October";
        break;
    case 11:
        Month = "November";
        break;
    case 12:
        Month = "December";
        break;
    }
    return Month;
}