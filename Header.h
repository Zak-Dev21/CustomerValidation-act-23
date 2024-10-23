#ifndef Header_h
#define Header_h
#include <iostream>
using namespace std;

string input;

void ValidateCustomerNumber(const string& input) {
    if (input.length() == 6 && isalpha(input[0]) && isalpha(input[1]) &&
        isdigit(input[2]) && isdigit(input[3]) &&
        isdigit(input[4]) && isdigit(input[5])) {
        cout << "Valid customer ID " << endl;
    }
    else
        cout << "Invalid customer ID " << endl;

}

#endif
