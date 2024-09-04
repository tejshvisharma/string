#include <iostream>
#include <string>

using namespace std;

bool checkAdjDup(string s) {
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1])
            return true;
    }
    return false;
}

pair<int, int> indexOfAdjDup(string s) {
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            return make_pair(i, i + 1);
        }
    }
    return make_pair(-1, -1);  // Return -1, -1 if no adjacent duplicates are found
}

string removeAdjacentDuplicate(string s) {
    while (checkAdjDup(s)) {
        pair<int, int> myPair = indexOfAdjDup(s);
        int i = myPair.first;
        int j = myPair.second;

        if (i != -1 && j != -1) {
            s.erase(i, 2); // Erase 2 characters from index i
        }
    }
    return s;
}

int main() {
    string Str = "";
    
    string result = removeAdjacentDuplicate(Str);
    
    cout << "Original string: " << Str << endl;
    cout << "String after removing Duplicates: " << result << endl;

    return 0;
}
