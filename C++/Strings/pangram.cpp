#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="the quick brown fox jumps over the lazy dog";
    map<char,int>temp;
    for(int i=0;i<s.size();i++){
        if(temp.find(s[i])==temp.end() && s[i]!=' '){
            temp[s[i]]=1;
        }
    }
int sum=0;
for(auto it:temp){
    sum+=it.second;
}
if(sum==26){
    cout<<"pangram";
}else{
    cout<<"not a pangram";
}

}