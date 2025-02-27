#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> sample={"flex","flame","flicker", "flexile", "flapjack", "fleeting", "flexible"};
    int sample_size =sample.size();
    sort(sample.begin(),sample.end());
    string s1=sample[0];
    string s2=sample[sample_size-1];
    int i=0;
    int j=0;

    string ans="";
    while(i<s1.size() && j < s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++;
            j++;
        }else{
            break;
        }
    }
cout<<ans;
}