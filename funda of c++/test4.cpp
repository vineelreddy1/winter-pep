#include <iostream>
#include <string>
using namespace std;

enum commands {
    ADD,
    PRINT,
    COUNT,
    EXIT,
    INVALID
};

commands getCommands(const string& firstword) {
    if (firstword == "ADD") return ADD;
    if (firstword == "PRINT") return PRINT;
    if (firstword == "COUNT") return COUNT;
    if (firstword == "EXIT") return EXIT;
    return INVALID;
}

void print(const string data[], int count) {
    for (int i = 0; i < count; i++) {
        cout << i << " : " << data[i] << endl;
    }
}

int main() {
    string data[100];
    int count = 0;
    string input;

    while (true) {
        getline(cin, input);

        int firstSpace = input.find(' ');
        string firstword = (firstSpace != string::npos) ? input.substr(0, firstSpace) : input;

        commands cmd = getCommands(firstword);

        switch (cmd) {
            case ADD:
                if (firstSpace != string::npos) {
                    data[count++] = input.substr(firstSpace + 1);
                } else {
                    cout << "No text provided to ADD\n";
                }
                break;

            case PRINT:
                print(data, count);
                break;

            case COUNT:
                cout << "Count is: " << count << endl;
                break;

            case EXIT:
                return 0;

            default:
                cout << "Enter correct input.\n";
        }
    }
}