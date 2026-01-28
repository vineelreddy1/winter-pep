#include<iostream>
using namespace std;

class point {
    int x;
    int y;

    public:
    point ( int point1, int point2) : x(point1) , y(point2) {cout << "Constructor called \n";} ;

    void print(){
        cout << "\n x : " << x << " y : " << y << endl; 
    }

    point operator+(point &otherPoint)
    {
        return point(this->x + otherPoint.x , this->y+otherPoint.y);
    }


    point operator-(point &otherPoint)
    {
        return point(this->x - otherPoint.x , this->y - otherPoint.y);
    }
    
    point operator++(){
        return point(this->x+1, this->y+1);

    }

    point operator--(){
        return point(this->x-1, this->y-1);
    }
};

int main(){
    point p1(10,15);
    point p2(20,25);


    p1.print();
    p2.print();

    //point p3 = p1+p2;

    point p3 = p1.operator+(p2);
    point p4 = p1.operator-(p2);
    point p5 = ++p1;
    point p6 = --p2;

    p3.print();
    p4.print();
    p5.print();
    p6.print();
    return 0;
}