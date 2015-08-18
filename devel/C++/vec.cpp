#include <iostream>
#include <vector>

using namespace std;

int main() 
{
   vector<int> numbers(10);
   for(int i = 1; i < 12; ++i) {
        numbers.push_back(i);
   }
   int sum = 0;
   for(int i = 0; i < numbers.size(); ++i) {
      sum+=numbers[i];
   }
   cout << "Total sum =" << sum << endl;
   return 0;
}
