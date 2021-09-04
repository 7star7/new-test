#include <iostream>

int takeNum()
{
  int x{};
  std::cout << "Please enter a number: ";
  std::cin << x;
  return x;
}

int main()
{
  std::cout << "Welcome ♥ Hell\n";
  int x{takeNum()};
  int y{takeNum()};
  std::cout << "Your answer is: " << x + y << '\n';
  return 0;
}
