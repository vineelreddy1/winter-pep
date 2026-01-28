#include<iostream>
using namespace std;

int id = 0;
int studentCount = 0;
class Record{

    int studId;
    string stud_name;
    float* grades;
    


    Record(string name, int subjectCount){
        studentCount++;
        
        this->studId = ++id;
        this->stud_name = name;


        grades = new float[subjectCount];


        for(int i=0;i<subjectCount;i++){
            grades[i] = 0;
        }
    }


    void addGrades(){
        for(int i=0;i<subjectCount;i++){

        }
    }
    
    ~Record()
    {
        studentCount--;
        delete[] grades;
    }

};


int main(){

}