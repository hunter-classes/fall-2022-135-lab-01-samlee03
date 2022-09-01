/*
Author: Sam Lee
Course: CSCI-135
Instructor: Zamansky, Mike
Assignment: Lab1D


*/

#include <iostream>

int main(){
  int year, month;
  bool leap_year;
  std::cout << "Enter year: ";
  std::cin >> year;
  std::cout << "Enter month: ";
  std::cin >> month;
  std::cout << std::endl;
  //leap year or common year
  if (year % 4 != 0){
    leap_year = false;
  } else if (year % 100 != 0){
    leap_year = true;
  } else if (year % 400 != 0){
    leap_year = false;
  } else {
    leap_year = true;
  }

  //num of days
  if (month < 8){
    if (month == 2){
      if (leap_year){
	std::cout << "29 days";
      } else {
	std::cout << "28 days";
      }
    } else if (month % 2 == 1){
      std::cout << "31 days";
    } else {
      std::cout << "30 days";
    }
  } else {
      if (month % 2 == 0){
        std::cout << "31 days";
      } else {
        std::cout << "30 days";
      }
  }
  std::cout << std::endl;
      
  
  return 0;
}
