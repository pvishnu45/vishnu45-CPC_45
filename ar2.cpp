#include <iostream>
#include <string>
using namespace std;

string s = "10100110"; // example string
string result = ""; // initialize empty string to hold the result

for (char c : s) {
    if (c == '0') {
        result += '1';
    } else if (c == '1') {
        result += '0';
    } else {
        cout << "Invalid input. String must consist only of characters '0' and '1'." << endl;
        return 1; // exit program with error code if input is invalid
    }
}

cout << "Result: " << result << endl; // print the result
