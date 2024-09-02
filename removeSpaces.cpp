#include <iostream>
#include <string>

using namespace std;

string removeSpaces(const string &str) {
    string newStr = "";
    string word = "";

    // Traverse the string from the end to the beginning
    for (int i =0; i <= str.length() - 1; ++i) {
        if (str[i] == ' ') {
            if (!word.empty()) {
                newStr = newStr + word + "@40";
                word = "";
            }
        } else {
            word = word + str[i];
        }
    }

    // Append the last word to the reversed string
    if (!word.empty()) {
        newStr += word;
    }

    // Trim any trailing spaces (optional)
    if (!newStr.empty() && newStr.back() == ' ') {
        newStr.pop_back();
    }

    return newStr;
}

int main() {
    string str = "The Sky       is Blue";
    string newStr = removeSpaces(str);

    cout << "Original string: " << str << endl;
    cout << "Reversed words: " << newStr << endl;

    return 0;
}
