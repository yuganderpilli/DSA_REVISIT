#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="eabcabd";
    int ans[26]={0};
    for(int i=0;i<s.size();i++){
        int pos = s[i]-'a';
        ans[pos]+=1;
    }
    int index=0;
    string result="";
    for(int i=0;i<26;i++){
        int temp=ans[i];
        while(temp>0){
            result.push_back(char(i+'a'));
            temp--;
        }
    }
    cout<<result;
}