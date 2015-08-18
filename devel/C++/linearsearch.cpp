#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for(int i=0;i<size;++i) {
      if(key==arr[i]) {
         return i;
      }
   }
   return -1;
}


int main()
{
   const int size= 20;
   int numbers[size];

   srand((unsigned) time(0));
   for(int i = 0; i < size; ++i) {
     numbers[i]=(rand() % 100)+1;
     cout << numbers[i] << " ";
   }
   cout << endl;
   int key;

   cout << " Enter the key to search for : ";
   cin >> key;
   int retvalue=linearSearch(numbers,size,key);
   cout << "Key Position: " << retvalue << endl;
   return 0;
}
