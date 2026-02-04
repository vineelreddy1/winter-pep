#include<iostream>
using namespace std;


class Point{

    int x;
    int y;
    public:
    Point ( int point1, int point2) : x(point1) , y(point2) {cout << "Constructor called \n";} ;

    Point operator+(Point &otherpoint){
        return Point(this ->x+otherpoint.x , this->y+otherpoint.x);
    }

    Point& operator++(){
        
        this->x++;
        this->y++;

        return *this;
    }
    Point operator++(int){

        Point temp(this->x,this->y);
        
        this -> x++;
        this -> y++;

        return temp;
    }



    void print(){
        cout << x << y << endl;
    }

    

};

int main(){
    Point p1(10,20);
    Point p2(11,21);

    // Point p3 = p1.operator+(p2);
    // p3.print();

    Point p4 = ++p1;
    p4.print();

}