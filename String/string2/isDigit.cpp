#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch = 'a';

    if (isdigit(ch)) {
        cout << "Digit hai";
    } else {
        cout << "Digit nahi hai";
    }
}