#include <iostream>
#include <string>

using namespace std;

class Stack {
   private:
      string datastore[100];
      int top;
  public:
     Stack() { top = -1; }
     void push(string value) {
         ++top;
         datastore[top]=value;
    }

    string pop() {
         string retval=datastore[top];
         --top;
         return retval;
   }

   string peek() {
      return datastore[top];
  }
 
  int count() {
     return top + 1;
  }

  void clear() {
     for(int i=0;i <= top-1; ++i) 
        datastore[i]="";
     top = -1;
  }

  bool isEmpty() {
     if(top == -1) return true;
     else return false;
  }
};

int main()
{
   Stack s;
   s.push("Vardhan");
   s.push("Usha");
   s.push("Sanju");
   s.push("Swami");
   cout << "Number of items: " << s.count() << endl;
   if(!s.isEmpty()) {
       s.pop();
   }
   cout << "Number of items : " << s.count() << endl;
   s.clear();
   cout << "Number of items : " << s.count() << endl;
 return 0;
}
