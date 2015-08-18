#include <iostream>
#include <string>
#include <fstream>

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
     Queue men;
     Queue women;
     string name ="./dance.dat";
     string line, sex;
 
     ifstream inFile(name.c_str());

     while(!inFile.eof()) {
        getline(inFile,line);
        sex=line.substr(0,1);
        if(sex == "M") {
            string name2 = line.substr(2);
            men.in(name2);
        }
        else {
             string name2 = line.substr(2);
             women.in(name2);
        }
     }
  
     while(!men.isEmpty() && !women.isEmpty()) {
         cout << "The dancing partners will be : " ;
         cout << men.qfront() << "and ";
         cout << women.qfront() << endl;
         men.out();
         women.out();
     }

     if (women.isEmpty()) {
         cout << "There are " << men.count() << " men waiting for the next round." << endl ;
         cout << men.qfront() << " will be first to be a partner" << endl;
     }
     if (men.isEmpty()) {
         cout << "There are " << women.count() << " women waiting for the next round." << endl ;
         cout << women.qfront() << " will be first to be a partner" << endl;
     }
     inFile.close();
     return 0;
}
