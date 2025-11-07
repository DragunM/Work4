#include <iostream>
#include <string>
using namespace std;

string reverse_string(string s) {
    if (s.length() <= 1) {
        return s;
    }
    return reverse_string(s.substr(1)) + s[0];
}

int main() {
    string text = "Hello World";
    cout << reverse_string(text) << endl;  // dlroW olleH
    return 0;
}
