#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

bool apakahPolindrom(string str) {
    string cleanedStr = "";
    for (char c : str) {
        if (isalnum(c)) {
            cleanedStr += tolower(c);
        }
    }

    stack<char> charStack;

    for (char c : cleanedStr) {
        charStack.push(c);
    }

    for (char c : cleanedStr) {
        if (c != charStack.top()) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    string input;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, input);

    if (apakahPolindrom(input)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
