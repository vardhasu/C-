#include <iostream>
#include <deque>
#include <fstream>
#include <string>

using namespace std;

int find(deque<string> d, string value) {
    for(int i=0; i < d.size(); ++i) {
        if(d.at(i) == value) {
           return i;
        }
    }
    return -1;
}


int main() 
{
   deque<string> names;
   ifstream nameList;
   nameList.open("./names.txt");
   string line;
   while(!nameList.eof()) {
        getline(nameList,line);
        string::iterator it=line.end();
        --it;
        size_t pos=line.find(" ");
        string name = line.substr(0,pos);
        if(*it == 'P')
           names.push_front(name);
        else
           names.push_back(name);
   }
   deque<string>::iterator it = names.begin();
   while(it != names.end()) {
       cout << *it << endl;
       ++it;
   }
   nameList.close();


   return 0;
}
