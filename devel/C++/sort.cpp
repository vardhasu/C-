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
  int numbers[]={10,1,9,2,8,3,7,4,6,5};
  vector<int> nums(numbers,numbers+10);
  display(nums);
  sort(nums.begin(), nums.end());
  display(nums);
  string words[] = {"Now","is","the","good","time","to","pray","to","Swami"};
  vector<string> sentence(words,words+9);
  display(sentence);
  sort(sentence.begin(),sentence.end());
  display(sentence);
  return 0;
}
