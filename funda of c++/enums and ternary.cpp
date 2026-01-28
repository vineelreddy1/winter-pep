#include<iostream>
using namespace std;

enum commands{
    ADD,
    PRINT, 
    COUNT,
    WORDCOUNT,
    VOWELCOUNT,
    EXIT
};

commands getCommands(string firstword){
    if(firstword == "ADD"){
        return ADD;

    }
    else if(firstword == "PRINT" ){
        return PRINT;

    }
    else if(firstword == "COUNT"){
        return COUNT;
    }
    else if(firstword == "WORDCOUNT"){
        return WORDCOUNT;
    }
    else if(firstword == "VOWELCOUNT"){
        return VOWELCOUNT;
    }
    else{
        return EXIT;
    }
}
void print(const string data[] , int count){
    for(int i=0;i<count;i++){
        cout << i << " :" << data[i] << endl;
    }
}

/*void wordcount(const string data[],int count)
{
    int totalWords = 0;
    
    for(int i=0;i<count;i++){
        bool inword = false;
        for(int j = 0;j<data[j].length();j++){
            char ch = data[j];
            if(ch != ' ' && !flag){

            }


            bool inword = true;

        }
        
    }
    


}
    */

void vowelsCount(const string data[] , int size){
    
    string vowels = "aeiouAEIOU";
    int count = 0;
    for(int i=0;i<size;i++){
        for(int j=0;j<data[i].length();j++){
            char ch = data[i][j];
            if(vowels.find(ch) != string::npos){
                count++;
            }
        }

    }
    cout << "Count is: " <<  count;
}

int main(){
    commands cmd = ADD;
    string data[100];
    int count = 0;
    string input;
    

    while(true){
        getline(cin , input);
        int firstoccurance = input.find(' ');
        string firstword = firstoccurance != string::npos ? input.substr(0, firstoccurance) :input ;
        commands cmd = getCommands(firstword);

        if(input == "EXIT") break;

        switch(cmd){
            case ADD:
            data[count++] = input.substr(4);
            break;
            case PRINT:
            print(data , count);

            break;

            case COUNT:
            cout << "count is: "  << count << endl;

            break;

            case WORDCOUNT:

            cout << "word count is: "<<endl;
            //wordcount(data,count);
            break;

            case VOWELCOUNT:
            vowelsCount(data , count);


            break;

            default:
            cout << "Enter correct input." << endl;
            break;
        }
    }

}