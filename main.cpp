#include <iostream>

int main() {
  
  int year;

  std::cout << "Please enter a year (xxxx): ";
  std::cin >> year;

  if (year < 1000 || year > 9999) {
    std::cout << "Invalid entry.\n";
  }
  /*if the year is divisible by 4 but not 100 it is a leap year.
    if it is divisible by 400 it is a leap year
    if it is divisible by 100 but not 400 it is not a leap year */

  else if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
    std::cout << year << " falls on a leap year.\n";
  }
  
  else  {
    std::cout << year << " does not fall on a leap year.\n";
  }

}
