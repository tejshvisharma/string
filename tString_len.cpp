#include<iostream>
using namespace std;
int findLen(string ch){
    int len=1;
    for (int i = 0; i < ch.size()-1; i++)
    {
        if (ch[i]!='\0')
        {
           len++;
        }
    }
    return len;
    
}
int main(){
    string ch;
    cin>>ch;
    cout<<"you have inputted :"<<endl;
    cout<<ch<<endl;

    cout<<"the length of string :"<<findLen(ch);
}

