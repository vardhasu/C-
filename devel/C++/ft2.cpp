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

template <typename T1,typename T2>
T1 max(T1 &a1, T2 &a2) {
    return(a1>a2 ? a1:a2);
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

   double num1=35.6;
   int num2=130;
   cout << "Max value= " << max(num1,num2) << endl;
   return 0;
}

