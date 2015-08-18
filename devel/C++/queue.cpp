#include <iostream>
#include <string>

using namespace std;

class Queue {
     private: 
         string datastore[100];
         int back;
         const static int front =0;
         void shift() {
               for(int i=front; i <= back; ++i)
               {
                   datastore[i]=datastore[i+i];
               }
               --back;
         }
                 
     public :
        Queue() {
             back = -1; 
        }
       
        void in(string value) {
              ++back;
              datastore[back]=value;
       }

       string out() {
           string retval=datastore[front];
           shift();
           return retval;
       }
 
       void show() {
         for(int i = front; i <= back; ++ i) {
             cout << datastore[i] << " " ;
         }
         cout << endl;
      }
      int count() {
          int cnt=0;
          for(int i=0; i <= back; ++i) {
             ++cnt;
          }
          return cnt;
      }
 
      string qfront() {
         return datastore[front];
      }

      string qback() {
          return datastore[back];
      }
 
      bool isEmpty() {
         if (back == -1) 
             return true;
         else
             return false;
      }

      void clear() {
           for(int i = front; i <= back; ++i) {
                 datastore[i]="";
           }
      }
};


int main()
{

     Queue l;
     l.in("a");
     l.in("b");
     l.in("c");
     l.in("d");
    cout << "front: " << l.qfront() << endl;
    cout << "back: " << l.qback() << endl;
     l.in("D");
    cout << "front: " << l.qfront() << endl;
    cout << "back: " << l.qback() << endl;
     l.out();
    cout << "front: " << l.qfront() << endl;
    cout << "back: " << l.qback() << endl;
     
     return 0;
}
