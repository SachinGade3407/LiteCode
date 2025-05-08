// vector::operator[]
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector (10); 
  std::vector<int>::size_type sz = myvector.size();

   for (unsigned i=0; i<sz; i++) myvector[i]=i;

   for (unsigned i=0; i<sz/2; i++)
  {
    int temp;
    temp = myvector[sz-1-i];
    myvector[sz-1-i]=myvector[i];
    myvector[i]=temp;
  }

  std::cout << "myvector contains:";
  for (unsigned i=0; i<sz; i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';

  return 0;
}
