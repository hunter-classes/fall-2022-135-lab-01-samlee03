/*
Author: Sam Lee
Course: CSCI-135
Instructor: Zamansky, Mike
Assignment: Lab1C

The program determines whether a year is a leap year through a series of conditions: year is divisible by 4, year is divisible by 100, year is divisible by 400.
*/

#include <iostream>

int main()
{
  int year;
  std::cout << "Enter year: ";
  std::cin >> year;

  if (year % 4 != 0){
      std::cout << std::endl << "Common year" << std::endl;
  } else if (year % 100 != 0){
      std::cout << std::endl << "Leap year" << std::endl;
  } else if (year % 400 != 0){
      std::cout << std::endl << "Common year" << std::endl;
  } else {
      std::cout << std::endl <<  "Leap year" << std::endl;
  }
  return 0;
}
