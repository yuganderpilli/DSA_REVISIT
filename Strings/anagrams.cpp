#include<bits/stdc++.h>
using namespace std;
int main(){
    string str_1="anagram";
    string str_2="nagaram";
    vector<int> sample(26,0);
    if(str_1.size()==str_2.size()){
        for(int i=0;i<str_1.size();i++){
                int j= (str_1[i]-'a');
                int k =(str_2[i]-'a');
                sample[j]++;
                sample[k]--;
        }
    }
    for(int i=0;i<26;i++){
        if(sample[i]!=0){
            cout<<"false";
            break;
        }
    }

}