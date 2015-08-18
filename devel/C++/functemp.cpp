#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <typename T>
void display(T arr[], int size) {
     for (int i = 0; i < size; ++i) {
          cout << arr[i] << " ";
     }
     cout << endl;
}

template <typename T>
T max(T &a1, T &a2) {
    if (a1 > a2) return a1;
    else return a2;
}

int main()
{
   const int size=10;
   int numbers[size];
   
   for (int i = 0; i < size; ++i) {
        numbers[i]=i+1;
   }
   display(numbers,size);
   
   string names[]={"Usha","Sanju","Vardhan","appa","amma","Swami","Sai","Lakshmi Maa","Durga Maa","Saraswathi Maa"};
   display(names, size);
   return 0;
}

