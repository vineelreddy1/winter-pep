// UNit 3 Question 1 
// Create a class Car with attributes brand and year. Add a method that prints "Old Car" if year < 2015, else "New Car".


#include<iostream>
using  namespace std;


class Car{
    public:
    string brand;
    int year;


    Car(string brand , int year){
        this->brand = brand;
        this->year = year;
    }


    void print(){
        if(year < 2015){
            cout << brand << " is a Old car" << endl;
        }else{

        cout << brand << " is a New car";
        }
    }



};


//// UNit 3 Question 2
//Create a Calculator class with an add() function. Overload add() to work with both integers and floating-point values. 



class Calculator{


    public:

    void add(int a , int b){
        cout << "addition with integers: "<< a+b << endl;
    }
    void add(double a , double b){
        cout << "addition with floating values: " << a+b;
    }
};


// UNit 3 Question 3
// Create a class with private data members. Use setter functions that validate input before assigning values. 


class Bro{
    int x,y;


    public:


    int setX(int x, int y){
        cout << x << y;
        return 0;
    }



};




int main(){

    // UNit 3 Question 1 
// Create a class Car with attributes brand and year. Add a method that prints "Old Car" if year < 2015, else "New Car".

    // Car c1("Mazda" , 2007);

    // Car c2("Ferrari", 2024);

    // c1.print();
    // c2.print();


    //// UNit 3 Question 2
//Create a Calculator class with an add() function. Overload add() to work with both integers and floating-point values. 
    // Calculator c;
    // c.add(1,2);
    // c.add(1.2,3.2);


    // UNit 3 Question 3
// Create a class with private data members. Use setter functions that validate input before assigning values. 

Bro bro;

bro.setX(1,2);










    














}