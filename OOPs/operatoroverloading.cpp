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
    
    point& operator++(){
        this->x++;
        this->y++;

        return *this;

    }

    point operator++(int){
        
        point temp(this->x,this->y);

        this->x++;
        this->y++;

        return temp;
    }
    point& operator--(){
        this->x--;
        this->y--;

        return *this;

    }

    point operator--(int){
        
        point temp(this->x,this->y);

        this->x--;
        this->y--;

        return temp;
    }


};

int main(){
    point p1(10,15);
    point p2(20,25);


    // p1.print();
    // p2.print();

    //point p3 = p1+p2;

    // point p3 = p1.operator+(p2);
    // point p4 = p1.operator-(p2);

    point p5 = p1++;
    p5.print();
    point p6 = ++p1;
    p6.print();


    point p8 = p2--;
    p8.print();

    point p9 = --p2;
    p9.print();

   

    // p3.print();
    // p4.print();
    return 0;
}