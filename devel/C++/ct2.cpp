#include <iostream>

using namespace std;

template <typename T> 
class Stack {
     private:
        T datastore[100];
        int top;

     public:
       Stack() {
          top= -1;
       }
       
       void push(int num) {
          ++top;
          datastore[top]=num;
       }

       T pop() {
        T val = datastore[top];
        datastore[top]=0;
            --top;
        return val;
       }

       T peek(){
           return datastore[top];
       }
};

template <> 
class Stack<string> {
     private:
        string datastore[100];
        int top;

     public:
       Stack() {
          top= -1;
       }
       
       void push(string val) {
          ++top;
          datastore[top]=val;
       }

       string pop() {
        string val = datastore[top];
        datastore[top]=" ";
            --top;
        return val;
       }

       string peek(){
           return datastore[top];
       }
};

int main()
{
    Stack <double> numbers;

    numbers.push(12);
    numbers.push(24);
    numbers.push(36);

    cout << numbers.peek() << endl;
    cout << numbers.pop() << endl;
   
    Stack<string> names;
 
    names.push("Swami");
    names.push("Usha");
    names.push("Sanju");

   cout << names.peek() << endl;
   cout << names.pop() << endl;

}

