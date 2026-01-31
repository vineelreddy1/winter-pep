#include<iostream>
using namespace std;

class Server{

    public:
    Server(){
        cout << " Servers Hardware created\n";
    }

    virtual ~Server(){
        cout << "Servers Hardware off. \n";
    }

};

class WebStack : public Server
{
    public:


    WebStack(){
        cout << "Allocating 10Gb of Ram\n";
    }

    ~WebStack(){
        cout << "10gb ram released!!!\n";
    }


};

int main(){

    Server* s = new WebStack();
    delete s; 

}