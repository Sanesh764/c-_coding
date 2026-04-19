#include<iostream>
#include<sstream>
using namespace std;

int main() {
    string str = "hello world cpp";
    stringstream ss(str);
    string word;

    while (ss >> word) {
        cout << word << endl;
    }
    return 0;
}

/*
Useful when input is in string format but you need integer, float, etc.
Alternative to to_string()
Automatically splits by spaces.
When should you use it?

Use stringstream when:

You need to parse input string
You need to split words
You need to convert data types
You are solving string-based problems (LeetCode, etc.)
*/