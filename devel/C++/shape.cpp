#include <iostream>

using namespace std;

class Shape {
     virtual void setX(int xcoord)=0;
     virtual void setY(int ycoord) = 0;
     virtual int getX() const=0;
     virtual int getY() const=0;
     virtual void draw() const=0;
};

class Circle:public Shape {
      private:
         int x, y, radius;
      public:
         Circle(int xcoord, int ycoord, int r) {
           x=xcoord;
           y=ycoord;
           radius=r;
        }
         virtual void setX(int xcoord) {
             x=xcoord;
         }
         virtual void setY(int ycoord) {
             y=ycoord;
         }
         virtual int getX() const {
              return(x);
         }
         virtual int getY()  const{
              return(y);
         }
         virtual int getRadius() const {
             return radius;
         }

         virtual void draw() const {
             cout << "drawing circle at: " << getX() <<","<< getY() <<" with radius of: " << getRadius()<< endl;
         }
};

int main()
{

    Circle c1(2,3,5);
    c1.draw();
    return 0;
}
                
