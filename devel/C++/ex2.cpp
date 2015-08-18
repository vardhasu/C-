#include <iostream>
#include <map>
#include <fstream>

using namespace std;

int showMenu() {
   int choice;
   cout << "1. Get number" << endl;
   cout << "2. Quit" << endl;
   cout << endl;
   cout << "Enter choice: " ;
   cin >> choice;
   return choice; 
}

void showNumber(map<string, string> phonelist) {
   string name;
   cout << "Enter a name: ";
   cin >> name;
   cout << endl << "The number is " << phonelist[name] << endl;
}

string getName(string line) {
  int pos = line.find(",");
  return line.substr(0,pos);
}

string getNumber(string line) {
  int pos = line.find(",");
  return line.substr(pos+1);
}


int main() 
{
   map<string,string> phonelist;
   ifstream inF("./data/phonelist.data");
   string line, name, number;
   while(!inF.eof()) {
      getline(inF,line);
      number = getNumber(line);
      name = getName(line);
      phonelist[name]=number;
  }
  inF.close();
  int choice =1;
  while(choice !=2 ) {
     choice=showMenu();
     if(choice ==1 ) {
        showNumber(phonelist);
     }
  }
  return 0;
}
