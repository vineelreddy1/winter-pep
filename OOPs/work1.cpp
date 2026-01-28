#include<iostream>
using namespace std;



class Student{
    int studId;
    string name;
    float* grades;
    int totalStudents = 0;
    int it;
    public:

    Student(string name , int count){
        this -> name = name;
        totalStudents++;
        this -> studId = totalStudents;
        grades = new float[count];
        it = count;


    }
    Student(Student &s){
        this->name = s.name;
        this->totalStudents = s.totalStudents;
        this ->studId = s.studId;

        for(int i=0;i<totalStudents;i++){
            grades[i] = s.grades[i];
        }
    }

    void print(){

        cout << "Sudent id: " << studId << endl;
        cout << "name: " << name << endl;
        cout << "total students : " << totalStudents << endl;

        cout << "Grades: ";

        for(int i=0;i<it;i++){
            cout << grades[i];
        }
        cout << endl;

    }
    void add(){
        cout << "Enter grades: " ;
        for(int i=0;i<it;i++){
            cin >> grades[i];
        }
        cout << endl;
    }


};

int main(){

    Student s1("Vineel",5);
    Student s2("Akash",4);

    s1.add();
    s2.add();


    s1.print();
    s2.print();

    Student s4 = s1;
}