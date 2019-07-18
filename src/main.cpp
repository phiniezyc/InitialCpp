#include <iostream>

int main() {
  int favoriteNumber;
  std::cout << "Enter Number between 1 and 100: " <<std::endl;
  std::cin >> favoriteNumber;
  std::cout << "That's my favorite number!" <<std::endl;
  std::cout << "No really " <<favoriteNumber << " is my favorite number!" ;
  return 0;
}