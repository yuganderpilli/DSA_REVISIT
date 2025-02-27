#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "0000000000";
    int i=0;
    int j=0;
    int max_len=0;
    int zeroCount=0;
    int k=2;
    while(j<str.length()){
        if(str[j]=='0'){
            zeroCount++;
            
        }
        while(zeroCount>k){
            if(str[i]=='0') zeroCount--;
            i++;
        }
        
        max_len=max(max_len,j-i+1);
        j++;
    }

cout<<max_len;
}