#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "1.1.1.1";
    int index=0;
    string ans;
    string temp;
    while(index<s.size()){
        if(s[index]=='.'){
            ans+="[.]";
        }else{
            ans+=s[index];
        }
        index++;
    }
cout<<ans;
}