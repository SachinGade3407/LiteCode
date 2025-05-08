// assignment operator with lists
#include <iostream>
#include <list>

int main ()
{
  std::list<int> first (3);     
  std::list<int> second (5);    

  second = first;
  first = std::list<int>();

  std::cout << "Size of first: " << int (first.size()) << '\n';
  std::cout << "Size of second: " << int (second.size()) << '\n';
  return 0;
}
