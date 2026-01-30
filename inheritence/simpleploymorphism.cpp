#include <iostream>
using namespace std;


class NotificationsSMS {

    public:
    virtual void sent()
    {
        cout<<"Notification is Sent through SMS"<<endl;
    }

}; // => base 

class EmailNotify : public NotificationsSMS{

    public:
    void sent()
    {
        cout<<"Notificataion is sent through Email."<<endl;
    }

}; // => derives calls 

class WhatsappNotify : public NotificationsSMS{
    public:
    void sent(){
        cout << "Notificataion is sent through whatsapp." << endl;
    }
};



int main() {
    
    NotificationsSMS SMS;
    EmailNotify EMS;
    WhatsappNotify WMS;

    NotificationsSMS* new_ptr = new NotificationsSMS();
    EmailNotify* email_ptr = new EmailNotify();
    WhatsappNotify* whats_ptr = new WhatsappNotify();

    // Entity* entity_ptr = new Player();
    // Player* player_ptr = new newPlayer();


    // entity.display();
    // player.display();  

    // entity_ptr->display(); // 
    new_ptr->sent();
    email_ptr->sent();
    whats_ptr->sent();





    return 0;
}