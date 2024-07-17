#include <iostream>
#include "date.cpp"

int main()
{
    //date
    int day, month, year;
    std::cout << "Please enter a day, month, and year: " << std::endl;
    std::cin>> day >> month >> year;
    Date defaultDate;
    defaultDate.printOutDate1();
    defaultDate.printOutDate2();
    defaultDate.printOutDate3();
    std::cout<<std::endl;
    Date anotherDate(day, month, year);
    anotherDate.printOutDate1();
    anotherDate.printOutDate2();
    anotherDate.printOutDate3();
    return 0;
}