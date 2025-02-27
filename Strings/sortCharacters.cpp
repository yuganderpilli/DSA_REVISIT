#include<bits/stdc++.h>
using namespace std;
int main(){
    string strs="coding wallah";
    vector<int> sample(26,0);
    int str_size= strs.size();
    for(int i=0;i<str_size;i++){
        sample[strs[i]-'a']+=1;
    }

    for(int i=0;i<26;i++){
        int value=sample[i];
        while(value>0){
            cout<<char(i+'a')<<" ";
            value--;
        }
    }
    
}