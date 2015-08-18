#include <iostream>
#include <map>

using namespace std;

int main() 
{
   map<string, int> grades;
   grades["Usha"] = 95;
   grades["Sanju"] = 100;
   grades["Vardhan"] = 40;
   string name;
   cout << "Enter a name to find:";
   cin >> name;
   if(grades.find(name) != grades.end()) {
      cout << name << ":" << grades[name]<<endl;
   }
   else {
      cout << name << "Not found" << endl;
   }
   double avg=0.0;
   int sum = 0;
   map<string,int>::iterator it= grades.begin();
   while (it != grades.end()) {
       sum += it->second;
       ++it;
   }
   cout << "The average = " << sum/grades.size() << endl;
  
  return 0;
}
