#include<bits/stdc++.h>
using namespace std;
int main(){
     string s="the quick bsown fox jumps ove the lazy dog";
     int arr[26]={0};
     for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            int pos=s[i]-'a';
            if(arr[pos]==0){
                arr[pos]=1;
            }
        }
        
    
     }

int sum=0;
for(auto it:arr){
    if(it==0){
        cout<<"not a pangram";
        break;

    }
    cout<<it<<" ";
}

if(sum==26)cout<<" pangram";
}