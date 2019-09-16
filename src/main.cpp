#include <iostream>
#include <vector>
// To compile run: g++ -Wall -std=c++14 main.cpp
// Terminal: ./a.out (or can just hit play on Run Code Extension)

using namespace std; // used so don't have to type std::cout etc...

class Name {
  public:
  string name;
  void greet() {
    cout << "Hello " <<name <<endl;
  };
};

int main() {
  int favoriteNumber;

  Name customer; // instantiates Name class w/ an instance named "customer"
  customer.name = "Chance";
  customer.greet();
  
  cout << "Enter Number between 1 and 100: " <<endl;
  cin >> favoriteNumber;
  cout << "That's my favorite number!" <<endl;
  cout << "No really " <<favoriteNumber << " is my favorite number!" <<endl;
  cout <<endl;

  int pizzas {0};
  const double price {12.5};

  cout << "Bonjour !  T'en veux combien ?" <<endl;
  cin >> pizzas;
  cout <<"C'est " <<price*pizzas <<" Euros." <<endl <<endl; //gives 2 spaces (but other ways to do)

  // Vectors
   vector <int> vec {10,20,30,40,50};
   vec.at(0) = 100;
   vec.back() = 1000;

   cout <<vec.at(3);

  return 0;
}