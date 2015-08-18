#include <iostream>
#include <vector>

using namespace std;

class Quadrilateral {
     protected:
        double side1, side2, side3, side4;
     public:
        Quadrilateral(double s1, double s2, double s3, double s4)
        {
           side1=s1;side2=s2;side3=s3;side4=s4;
        }

        virtual void display() {
            cout << "Quad with sides: "<< side1 << " " << side2 << " " << side3 << " " << side4 << endl;
        }
};

class Trapezoid: public Quadrilateral {
      public:
        Trapezoid(double s1, double s2, double s3, double s4): Quadrilateral(s1,s2,s3,s4) {}
        virtual void display() {
            cout << "Trapezoid with sides: "<< side1 << " " << side2 << " " << side3 << " " << side4 << endl;
        }
};

class Square: public Quadrilateral {
      public:
        Square(double s): Quadrilateral(s,s,s,s) {}
        virtual void display() {
            cout << "Square with sides: "<< side1 << " " << side2 << " " << side3 << " " << side4 << endl;
        }
};

int main()
{
 Trapezoid t(3,5,5,2);
 Square s(4);
 vector<Quadrilateral *> quads;
 quads.push_back(&t);
 quads.push_back(&s);
 for(int i = 0; i < quads.size();i++) {
     quads[i]->display();
 }
 return 0;
}
