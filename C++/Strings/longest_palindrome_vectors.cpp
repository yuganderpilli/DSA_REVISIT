#include<bits/stdc++.h>
using namespace std;
int main()
{
int lower[26]={0};
int upper[26]={0};

string s="AaBbCcDdEeFFaAaBBbCc";
for(int i=0;i<s.size();i++){
    if(s[i]>='a' && s[i]<='z'){
        lower[s[i]-'a']++;
    }else{
        upper[s[i]-'A']++;
    }
}
int count=0;
int odd=0;
for(int i=0;i<26;i++){
    if(lower[i]%2==0){
        count+=lower[i];
    }else{
        count+= lower[i]-1;
        odd=1;
    }

if(upper[i]%2==0){
        count+=upper[i];
    }else{
        count+=upper[i]-1;
        odd=1;
    }

}

cout<<count+odd;
} 
