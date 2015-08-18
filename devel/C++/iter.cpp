#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

template<typename T>
void display(vector<T> v) {
   for (int i=0; i < v.size(); i++) {
     cout << v[i] << " ";
  }
  cout << endl;
}

int main() 
{
  int a[]={2,3,4,6};
  vector<int> v1(a,a+4);
  int b[]={1,5,7,8,9};
  vector<int> v2(b,b+4);
  copy(v2.begin(),v2.end(),back_inserter(v1));
  display(v2);
  return 0;
}
