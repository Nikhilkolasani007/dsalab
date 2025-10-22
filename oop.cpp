#include <iostream>
using namespace std;

class Results {
private:
    int hallticket;
    bool pass_or_fail;

public:
    // Default Constructor
    Results() {
        hallticket = 0;
        pass_or_fail = false;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Results(int ht, bool status) {
        hallticket = ht;
        pass_or_fail = status;
        cout << "Parameterized Constructor Called" << endl;
    }

    void status() {
        cout << "HallTicket No: " << hallticket << " | Status: ";
        if (pass_or_fail)
            cout << "Pass";
        else
            cout << "Fail";
        cout << endl;
    }
};

int main() {
    Results r1;                  // Calls default constructor
    Results r2(123456, true);    // Calls parameterized constructor

    r1.status();
    r2.status();

    return 0;
}

