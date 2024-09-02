#include <iostream>
#include <string>

using namespace std;

string reverseWordsInString(const string &str) {
    string reversedStr = "";
    string word = "";

    // Traverse the string from the end to the beginning
    for (int i = str.length() - 1; i >= 0; --i) {
        if (str[i] == ' ') {
            if (!word.empty()) {
                reversedStr = reversedStr + word + " ";
                word = "";
            }
        } else {
            // if(str[i]!=' ')
            word = str[i] + word;
        }
    }

    // Append the last word to the reversed string
    if (!word.empty()) {
        reversedStr += word;
    }


    return reversedStr;
}

int main() {
    string str = "University               Institute Of Technology";
    string reversedStr = reverseWordsInString(str);

    cout << "Original string: " << str << endl;
    cout << "Reversed words: " << reversedStr << endl;

    return 0;
}
