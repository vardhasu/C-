#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

int main() 
{
  vector<int> numbers;
  int sum=0;
  
  for(int i =0; i <= 50; i++) {
      numbers.push_back(i);
  }
  sum=accumulate(numbers.begin(), numbers.end(),0);
  cout << "The accumulated value is : " << sum << endl; 

  vector<string> words;
  words.push_back("a");
  words.push_back("man");
  words.push_back("a");
  words.push_back("plan");
  words.push_back("a");
  words.push_back("canal");
  words.push_back("panama");
 
  string palindrome = accumulate(words.begin(), words.end(), string(""));
  cout << "Accumulated string is : " << palindrome << endl;
  
  return 0;
}
