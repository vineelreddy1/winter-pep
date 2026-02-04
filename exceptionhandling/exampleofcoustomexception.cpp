#include <iostream>
using namespace std;

int main() {

  try {
        int a = 10,b = 0,c;
        c = a/b;

        if(b == 0){
        throw(runtime_error("the divident cannot be zero"));
        } else{
            c = a/b;
            cout << c;
        }

  }

  catch(invalid_argument &e)
  {
    cout<<"second catch"<<endl;
    cout<<e.what()<<endl;
  }
  catch(runtime_error &e){ 
    cout<<"first catch"<<endl;
    cout<<e.what()<<endl;
  }

    return 0;
} 