#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void display(vector<T> v) {
   for (int i =0; i < v.size(); i++) {
     cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> numbers;
  
  for(int i = 1; i <= 10; ++i) {
      numbers.push_back(i);
  }
  display(numbers);
  fill(numbers.begin(), numbers.end(),0);
  display(numbers);
  replace(numbers.begin(), numbers.end(), 5,8);
  display(numbers);
  vector<string> names;
  names.push_back("Usha");
  names.push_back("Sanju");
  names.push_back("Vardhan");

  display(names);
  fill(names.begin(),names.end(), "-");
  display(names);
  replace(names.begin(), names.end(),string("Vardhan"),string("Swami"));
  display(names);
  return 0;
}
