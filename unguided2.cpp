#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseWords(string sentence) {
    stack<char> charStack;
    string reversedSentence = "", word = "";

    for (char c : sentence) {
        if (c != ' ') {
            charStack.push(c);
        } else {
            while (!charStack.empty()) {
                word += charStack.top();
                charStack.pop();
            }
            reversedSentence += word + " ";
            word = ""; 
        }
    }

    while (!charStack.empty()) {
        word += charStack.top();
        charStack.pop();
    }
    reversedSentence += word; 

    return reversedSentence;
}

int main() {
    string sentence;
    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, sentence);

    string reversedWords = reverseWords(sentence);

    cout << "Kalimat setelah dibalik kata-katanya: " << reversedWords << endl;

    return 0;
}