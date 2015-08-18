#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class List{
     private:
      vector<T> datastore;

     public:
        List() {}
        void add(T itemp){
            datastore.push_back(itemp);
        }

        void display() {
             for (int i=0; i < datastore.size() ;++i) {
                 cout << datastore[i] << endl;
             }
         }
};

int main()
{
    List<string> grocery;

    grocery.add("milk");
    grocery.add("honey");
    grocery.add("Bell Peppers");
    grocery.add("eggplant");
    grocery.add("Cauliflower");
    grocery.display();
    cout << endl;
    List<int> grades;
    grades.add(88);
    grades.add(91);
    grades.add(87);
    grades.display();
    return(0);
}
