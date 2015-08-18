#include <iostream>
#include <list>

using namespace std;

void display(list<string> temp) {
  list<string>::iterator iter = temp.begin();
  while(iter != temp.end()) {
     cout << *iter << endl;
     ++iter;
  }
}


int main() 
{
  list<string> names;
  names.push_back("Usha");
  names.push_back("Sanju");
  names.push_back("Vardhan");
   
  display(names);
  cout << "First: " << names.front()<< endl;
  cout << "Last: " << names.back() << endl;
  
  names.reverse();
  display(names);
  names.sort();
  display(names);
  names.push_front("Swami");
  display(names);
  cout << "Now the size of the list is " << names.size() << endl;
  names.remove("Vardhan");
  display(names);
  return 0;
}
  
