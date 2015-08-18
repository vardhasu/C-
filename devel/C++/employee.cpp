#include <iostream>
#include <sstream>
#include <string>
#include <vector>
 
using namespace std;

class Employee {
   protected:
     string name;
     double pay;
   public:
     Employee() {
          name = "";
          pay = 0;
     }
     Employee(string empName, double payRate) {
         name=empName;
         pay=payRate;
     }
     string getName() {
        return name;
     }
     double getPay() {
        return pay;
     }
     void setPay(double payRate) {
         pay=payRate;
     }
     string toString() {
         stringstream stm;
         stm << name << ": " << pay;
         return stm.str();
     }
     virtual double grossPay(int rate){
         return pay*rate;
     }
};

// derived class

class Manager: public Employee {
    private:
       bool salaried;
    
    public:
       Manager(string name, double payRate,bool isSalaried):Employee(name, payRate)
       {
          salaried=isSalaried;
       }
       bool getSalaried() {
          return salaried;
       }
       virtual double grossPay(int hours) {
         if(salaried) {
             return pay;
         } else {
             return pay * hours;
         }
       }
     string toString() {
         stringstream stm;
         string salary;

         if(salaried) {
            salary = "Salaried";
         } else {
                  salary = "Hourly";
         }
         stm << name << ": " << pay << ": "<< salary << endl;
         return stm.str();
     }
};

int main()
{
   
    Employee e1("Srv",15000);
    Manager e2("Usha",50000, true);
    Employee *empPtr;
    vector<Employee*> employees;
    
    empPtr=&e1;
    cout << "name: " <<empPtr->getName() << endl;
    cout << "pay: " <<empPtr->grossPay(40) << endl;
    empPtr=&e2;
    cout << "name: " <<empPtr->getName() << endl;
    cout << "pay: " <<empPtr->grossPay(40) << endl;
    employees.push_back(&e1);
    employees.push_back(&e2);
    for(int i = 0; i < employees.size();i++) {
       cout << "Name: " << employees[i]->getName() << endl;
       cout << "Pay: " << employees[i]->grossPay(40) << endl;
    }

    
  return 0;
}
