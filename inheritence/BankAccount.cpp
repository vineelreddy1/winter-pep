// // create a class Account , two classes saving Account , current Account

// // display balance // savings account balance

// // current account // current account balance 



// #include <iostream>
// using namespace std;


// class Account {

//     public:
//     virtual void display()
//     {
//         cout<<"Account balance :"<<endl;
//     }

// }; // => base 

// class saBalance : public Account{

//     public:
//     void display()
//     {
//         cout<<"Savings Account Bal : 5000"<<endl;
//     }

// }; // => derives calls 

// class Current : public Account{
//     public:
//     void display(){
//         cout << "Current Account Balance: " << endl;
//     }
// };



// int main() {
    
//     Account holder;
//     saBalance balance;

//     Account* holder_ptr = new saBalance();
//     // saBalance* player_ptr = new Current();


//     // entity.display();
//     // player.display();  

//     // entity_ptr->display(); // 
//     player_ptr->display();





//     return 0;
// }