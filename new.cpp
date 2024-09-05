#include <iostream>
#include <vector>
#include<string>

using namespace std;

vector<char> compress(vector<char>& chars){
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    while (i<n)
    {
        int j=i+1;
        while (j<n && chars[i] == chars[j])
        {
            j++;
        }
        chars[ansIndex++] = chars[i];
        
        int count = j-i;
        

        if (count>1)
        {
            // converting counting into single digit and saving in answer
            string cnt = to_string(count);
            for (char ch:cnt)
            {
                chars[ansIndex++] = ch;
            }
            
        }
        i=j; 
        
        
    }
     chars.resize(++ansIndex);
    return chars;
    
}


int main() {
    vector<char> chars = {'a','a','b','b','b','c','c','d','d','d','d','d','d','d'};
    
    vector<char> result =compress(chars);
    for (int i=0;i<result.size()-1;i++)
    {
       cout<< result[i]<<',';
    }
    cout<<endl;
    
    // cout<<"The answer size of the inputted string after desired compression : "<<result;  
    

    return 0;
}
