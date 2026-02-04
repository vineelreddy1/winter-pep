#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void swap(int &a,int &b){

    int temp = a;
    a = b;
    b = temp;

    cout << a  << " " << b;


}
void swap1(int &a,int &b){

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout <<"x: " << a << " " << "y: " << b;


}

//UNiT2 question 4;
// Create a struct called Student with name and roll number. Pass the structure to a function and display its data.

struct Student{

    string name;
    int rollno;

    Student(string name , int rollno){
        this->name = name;
        this->rollno = rollno;
    }

    void print(){
        cout << "STudent Name: " << name << endl;
        cout << "ROll no: " << rollno;
    }

};

//Unit 2 question 9
//Create a struct Rectangle with length and width. Write a function that takes the structure and returns the area.

struct Rectangle{
    double length;
    double width;

    Rectangle(double length, double width){
        this->length = length;
        this->width = width;
    }

    void area(){
        double area = length*width;
        cout << "Area of Rectangle is : " << area ;
    }

};

int main(){
    //1st question
    //cout << "Hello C++ \nV.vIneeL Reddy";


    // 2nd question
    // int a,b;
    // cin >> a >> b;

    // if(a>0 &&  b>0){
    //     cout << a+b;
    // }else{
    //     cout << "Enter positive value!!";
    // }


    //3rd question
    // int a ;
    // float b;
    // bool c;
    // char d;

    // cout << sizeof(a);
    // cout << sizeof(b);
    // cout << sizeof(c);
    // cout << sizeof(d);


// 4th question    
    // int a = 10 ,b = 20;
    // cout << "Before Swapping: "<<endl;
    // cout << a << " " << b << endl;
    // cout << "After Swapping: " << endl;
    // swap(a,b);


    //5thQuestion
    // const double pi = 3.14;
    // int rad = 4;
    // double aoc = pi* rad * rad;
    // if(rad > 0){
    // cout << aoc;
    // }
    // else{
    //     cout << "Radius is Not Positive!!!";
    // }


    //6th Question
    // int age;
    // cout << "Enter Age: " ;
    // cin >> age;
    // if(age >= 100){
    //     cout << "Already Age 100 or Above";
    // }
    // else{
    //     age=100 - age;
    //     cout << "Age remained to reach 100 is: " << age;
    // }


    // 7th Question
    // int a , b;
    // cout << "ENter NUms: ";
    // cin >> a >> b;
    // cout << "Enter choice : ";
    // int choice;
    // cin >> choice;
    // switch (choice)
    // {
    // case 1:
    //     cout << "Addition: " << a+b << endl;
    //     break;
    // case 2:
    //     cout << "Substraction: " << a-b << endl;
    //     break;
    // case 3:
    //     cout << "Multiplication: " << a*b << endl;
    //     break;
    // case 4:
    //     cout << "Division: " << a/b << endl;
    //     break;
    // default:
    //     cout << "Enter Valid Choice.!!!";
    //     break;
    // }


    //8th Question 
    //Write a for loop that prints all even numbers from 1 to 20,but SKIP numbers that are divisible by 4.
        // for(int i = 1; i <= 20; i++) {
        //     if(i % 2 == 0 && i % 4 != 0) {
        //         cout << i << " ";
        //     }
        // }

    
    //9th Question

    //9. Use a while loop to calculate the factorial of a number entered by the user.If the user enters a negative number, keep asking until a valid number is entered.

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // while(n<0){
    //     cout << "Enter the non - NeG number: ";
    //     cin >> n;
    // }
    // int fact = 1;
    // int i = 1;
    // while(i<=n){
    //     fact *= i;
    //     i++;
    // }
    // cout << "FActorial is : " << fact;



    //Question 10
    // int n;
    // cout << "ENter the Number: ";
    // cin >> n;
    // if(n>0){
    //     cout << "Positive!! \n";
    //     if(n%2 == 0){
    //         cout << "NUmber is even";
    //     }
    //     else{
    //         cout << "Number is ODD";
    //     }
    // }
    // else if(n == 0){
    //     cout << "Zero";
    // }
    // else{
    //     cout << "Negative!!";
    // }




// UNIT2 question 1;

    // int arr[5] = {10,11,12,13,14};

    // int sum = 0;

    // for(int i=0;i<5;i++){
    //     sum+=arr[i];
    // }
    // // for(int arr:arr)
    // // {
    // //     sum+=arr;
    // // }
    // cout<< "sum is : "<< sum << endl;

    // int average = sum / 5;
    // cout << "Average : "<<average;

// UNIT2 question 2;

    // int arr[10] = {10,11,12,13,14,15,16,17,19,20};

    // int temp = arr[0];
    // for(int i=0;i<10;i++){

    //     if(temp < arr[i]){
    //         temp = arr[i];

    //     }

    // }

    // cout << temp <<endl;

    // int secondlargest = arr[0];
    // for(int i=0;i<10;i++){
    //     if(arr[i] < temp && arr[i] > secondlargest){
    //         secondlargest = arr[i];
    //     }

    // }
    // cout << secondlargest;



    // UNIT2 question 3;

    // Declare an integer and a pointer to that integer. Modify the value of the integer ONLY using the pointer. 
    // int var = 10;
    // int *p = &var;
    // cout << "Before changing the value of var using pointer : " ;
    // cout << *p << endl; 
    // *p = 20;
    // cout << "after changing the value of var using pointer : " ;

    // cout << *p << endl;

    //UNiT2 question 4;
    // Student s1("vineel",7);
    // s1.print();

    //UNiT2 question 5;
    // int* a = new int;
    // if(a == nullptr){
    //     cout << "Memory allocation Failed!!";
    // }
    // else{
    //     *a = 10;

    //     cout << "Value: " << *a << endl;

    //     delete a;  // free the memory
    //     a = nullptr;

    //     return 0;
    //}


    //UNiT2 question 6;

    // string a = "VINEEL REDDY VATHALURU";
    // reverse(a.begin(),a.end());
    // cout << a;

    //Without USing Inbuilt Functions;


    //Unit2 question 6;
    // Write a program to reverse a string entered by the user WITHOUT using built-in reverse functions.
    // string s;
    // cout << "ENter the String: " << endl;
    // getline(cin,s);

    // int start = 0;
    // int end = s.length() - 1;

    // while (start < end){
    //     char temp = s[start];
    //     s[start] = s[end];
    //     s[end] = temp;

    //     start++;
    //     end--;
    // }


    // cout << "reversed string: " << s << endl;

    
    //Unit 2 question7
    //Create an array and access all its elements using pointer arithmetic (do not use array indexing). 
    
    // int arr[5] = {1,12,34,5,9};

    // int *ptr = arr;

    // for(int i=0;i<5;i++){
    //     cout << "Index: " << i <<" : " << *(ptr++) << " ";
    // }

    //Unit 2 question 8
    //. Dynamically allocate an array of size n entered by the user, store values in it, display them, and free the memory using delete[].

    // int n;
    // cout << "Enter the size of array: ";
    // cin >> n;
    // int* arr = new int[n];
    // cout << "Enter the elements of arr: ";
    // for(int i=0;i<n;i++){
    //     cin >> arr[i];
    // }
    // cout <<"ENtered Elements: " << endl;
    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }
    // delete[] arr;

    //Unit 2 question 9
    //Create a struct Rectangle with length and width. Write a function that takes the structure and returns the area. 
    // Rectangle rr(3,4);
    // rr.area();


    //Unit 2 question 10;
    //Write a program that uses reference variables to swap two integers WITHOUT using a third variable.

    // int a = 3;
    // int b = 5;

    // swap1(a,b);    
}