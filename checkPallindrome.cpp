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

void toLowercase(string& ch,int len){
    for (int i = 0; i < len ; i++)
    {
        if ((ch[i]>='a' && ch[i]<='z') || (ch[i]>='0' && ch[i]<='9')){

        }
        else
        {
            ch[i]=ch[i]-'A'+'a';
        }
    }
    
}

bool checkPallindrome(string ch,int len){
    int s=0;
    int e=len-1;
    while (s<e)
    {
        if (ch[s]==ch[e])
        {
            s++;
            e--;
        }
        else
            return false;
        
    }
    return true;
}

int main(){
    string ch;
    cin>>ch;
    int len = findLen(ch);
    toLowercase(ch,len);
    int pall =checkPallindrome(ch,len);
    cout<<"IS STRING PALLINDROME OR NOT : "<<(pall?"YES":"NO");

    
}