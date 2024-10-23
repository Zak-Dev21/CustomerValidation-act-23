#ifndef Header_h
#define Header_h
#include <iostream>
using namespace std;

string input;

void ValidateCustomerNumber(const string& input) {
    if (input.length() == 6 && isalpha(input[0]) && isalpha(input[1]) &&
        isdigit(input[2]) && isdigit(input[3]) &&
        isdigit(input[4]) && isdigit(input[5])) { // make condition statement to first check if input length is 6 , then if first indexes 0 and 1 are alphabetical, and finally taking substring for last 4 characterers to check if they are digits
        cout << "Valid customer ID " << endl; // indicate validity message
    }
    else
        cout << "Invalid customer ID " << endl; // otherwise not validate

}

#endif
