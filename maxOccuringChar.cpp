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

char maxOccured(string ch,int len){
    toLowercase(ch,len);
    char a[26] = {0};
     int n=0;
    for (int i = 0; i < len; i++)
    {
        if ((ch[i]>='a' && ch[i]<='z')){
           n= ch[i] - 'a';
        }
        else
        {
           n = ch[i] - 'A';
        }
        a[n] = a[n]+1;
    }
    int maxi = -1;
    int ans=0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > maxi)
        {
            ans = i;
            maxi = a[i];
        }
        
    }
    char finalAns = ans+'A';
    return finalAns;
    
     
}
int main(){
    string ch;
    cin>>ch;
    int len = findLen(ch);
    cout<<"MAXIMUM OCCURING CHARACTER IS : "<< maxOccured(ch,len);

    
}