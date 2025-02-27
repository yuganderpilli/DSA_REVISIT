#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> sample={"flex","flame","flicker", "flexile", "flapjack", "fleeting", "flexible"};
    int sample_size =sample.size();
    string str = sample[0];
    int ans_length=str.size();
    for(int i=1;i<sample_size;i++){
        int j=0;
        while(j<sample[i].size() && j<str.size() && sample[i][j]==str[j]){
            j++;
            
        }
        ans_length=min(j,ans_length);
    }
cout<<ans_length;
}