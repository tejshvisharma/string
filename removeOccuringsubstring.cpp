#include <iostream>
#include <string>

using namespace std;

string removeSubstring(string mainStr, const string &toRemove) {
    size_t pos;
    
    // Find the substring and remove it in a loop
    while ((pos = mainStr.find(toRemove)) != string::npos) {
        mainStr.erase(pos, toRemove.length());
    }
    
    return mainStr;
}

int main() {
    string mainStr = "Hello world, world is beautiful world";
    string toRemove = "world";
    
    string result = removeSubstring(mainStr, toRemove);
    
    cout << "Original string: " << mainStr << endl;
    cout << "String after removing '" << toRemove << "': " << result << endl;

    return 0;
}
