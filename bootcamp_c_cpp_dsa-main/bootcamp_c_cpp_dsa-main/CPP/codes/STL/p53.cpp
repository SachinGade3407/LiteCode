// list::unique
#include <iostream>
#include <cmath>
#include <list>

bool same_integral_part (double first, double second)
{ return ( int(first)==int(second) ); }

struct is_near {
  bool operator() (double first, double second)
  { return (fabs(first-second)<5.0); }
};

int main ()
{
  double mydoubles[]={ 12.15,  2.72, 73.0,  12.77,  3.14,
                       12.77, 73.35, 72.25, 15.3,  72.25 };
  std::list<double> mylist (mydoubles,mydoubles+10);
  
  mylist.sort();             
                             

  mylist.unique();           
                             

  mylist.unique (same_integral_part); 
                                      

  mylist.unique (is_near());          

  std::cout << "mylist contains:";
  for (std::list<double>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
