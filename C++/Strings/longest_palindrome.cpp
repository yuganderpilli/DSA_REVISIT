#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aabbcbadad";
    cout<<s<<endl;
    map<char,int> temp;
    for(int i=0;i<s.size();i++){
        temp[s[i]]++;
    }
    int count =0;
    int odd=0;
    for(auto it:temp){
        cout<<it.first<<it.second<<endl;
        if((it.second % 2)==0){
            count+=it.second;
        }else{
            count+=(it.second-1);
            odd=1;
        }
    }
cout<<count+odd;


}
