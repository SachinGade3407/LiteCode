// splicing lists
#include <iostream>
#include <list>

int main ()
{
  std::list<int> mylist1, mylist2;
  std::list<int>::iterator it;

  for (int i=1; i<=4; ++i)
     mylist1.push_back(i);      

  for (int i=1; i<=3; ++i)
     mylist2.push_back(i*10);   

  it = mylist1.begin();
  ++it;                         

  mylist1.splice (it, mylist2); 
                                
                                                                          
  mylist2.splice (mylist2.begin(),mylist1, it);
                                
                                                            
  it = mylist1.begin();
  std::advance(it,3);           

  mylist1.splice ( mylist1.begin(), mylist1, it, mylist1.end());
                                

  std::cout << "mylist1 contains:";
  for (it=mylist1.begin(); it!=mylist1.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  std::cout << "mylist2 contains:";
  for (it=mylist2.begin(); it!=mylist2.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
