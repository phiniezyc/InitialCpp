#include <iostream>


using namespace std; // used so don't have to type std::cout etc...
int main() {
  int favoriteNumber;
  cout << "Enter Number between 1 and 100: " <<endl;
  cin >> favoriteNumber;
  cout << "That's my favorite number!" <<endl;
  cout << "No really " <<favoriteNumber << " is my favorite number!" <<endl;
  cout <<endl;

  int pizzas {0};
  const double price {12.5};

  cout << "Bonjour !  T'en veux combien ?" <<endl;
  cin >> pizzas;
  cout <<"C'est " <<price*pizzas <<" Euros.";

  return 0;
}