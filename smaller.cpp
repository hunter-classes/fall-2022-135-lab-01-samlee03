/*
Author: Sam Lee
Course: CSCI-135
Instructor: Zamansky, Mike
Assignment: Lab1A

This program asks the user to input two numbers and prints the smaller of the two.
*/

#include <iostream>

int main()
{
  int int1, int2;
  std::cout << "Enter the first number: ";
  std::cin >> int1;
  std::cout << "Enter the second number: ";
  std::cin >> int2;
  std::cout << "The smaller of the two is ";
  if (int1 < int2){
    std::cout << int1 << std::endl;
  } else {
    std::cout << int2 << std::endl;
  }
  
  return 0;
}
