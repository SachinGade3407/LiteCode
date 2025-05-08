// vector assign
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> first;
  std::vector<int> second;
  std::vector<int> third;

  first.assign (7,100);            
  std::vector<int>::iterator it;
  it=first.begin()+1;

  second.assign (it,first.end()-1);

  int myints[] = {1776,7,4};
  third.assign (myints,myints+3);  

  std::cout << "Size of first: " << int (first.size()) << '\n';
  std::cout << "Size of second: " << int (second.size()) << '\n';
  std::cout << "Size of third: " << int (third.size()) << '\n';
  return 0;
}
