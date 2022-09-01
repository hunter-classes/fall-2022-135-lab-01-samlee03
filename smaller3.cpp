/*
Author: Sam Lee
Course: CSCI-135
Instructor: Zamansky, Mike
Assignment: Lab1B

The program asks the user for three integers. The program prints the smaller of the three by finding the smaller number of the first two, then taking the smaller number in comparison with the third.
*/


#include <iostream>

int main()
{
  int num1, num2, num3;
  std::cout << "Enter the first number: ";
  std::cin >> num1;
  std::cout << "Enter the second number: ";
  std::cin >> num2;
  std::cout << "Enter the third number: ";
  std::cin >> num3;

  std::cout << "The smaller of the three is ";
  if (num1 < num2){
    if (num1 < num3){
      std::cout << num1;
    } else {
      std::cout << num3;
    }
  } else {
    if (num2 < num3){
      std::cout << num2;
    } else {
      std::cout << num3;
    }
  }
  std::cout << std::endl;
  return 0;
}
