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
    int x;


    public:
    void setX(int a){
        x = a;
    }
    int getx(){
        return x;
    }

};

class Book{

    string title;
    string author;

    static int totalobjectCount;
    public:
    Book(string title, string author){
        this -> title = title;
        this->author = author;
        totalobjectCount++;
    }

    void print(){
        cout<<"TOtal object count is : " << totalobjectCount;
    }

    ~Book(){
        cout << "Object is Deleted";
        totalobjectCount--;
    }


};

int Book::totalobjectCount = 0;


//UNit 3 Question 5;

//Create a Bottle class with a destructor that prints "Bottle destroyed". Demonstrate destructor calls using function scope.


class Bottle{
    public:
    Bottle(){
        cout << "COnstructor Called " << endl;
    }
    ~Bottle(){
        cout << "Destructor called" << endl;
    }
};
void somedunction(){
    Bottle bottle;
}

//UNit 3 Question 6;
 //Use the this pointer in a class constructor to resolve naming conflicts between member variables and parameters.


 class Student{
    string name;
    int rollno;

    public:
    Student(string name , int rollno){
        this->name = name;
        this -> rollno = rollno;
    }

    void print(){
        cout << "Name is : " << name << endl;
        cout << "Rollno  is : " << rollno << endl;

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

// Bro bro;
// bro.setX(1);
// cout << bro.getx();


// UNit 3 Question 4 & //UNit 3 Question 7;
// Create a Book class with a constructor that initializes title and author. Use a static variable to count how many Book objects are created.
//7. Create a class with a static variable that tracks how many objects currently exist (increment in constructor, decrement in destructor). 

// Book B1("book1","VIneel");
// Book b2("book2","Sushanth");

// b2.print();



//UNit 3 Question 5;

//Create a Bottle class with a destructor that prints "Bottle destroyed". Demonstrate destructor calls using function scope.
// somedunction();
// cout << "Back to main";


//UNit 3 Question 6;
 //Use the this pointer in a class constructor to resolve naming conflicts between member variables and parameters. 

// Student s1("VIneel",7);
// s1.print();

//UNit 3 Question 8;


















    














}