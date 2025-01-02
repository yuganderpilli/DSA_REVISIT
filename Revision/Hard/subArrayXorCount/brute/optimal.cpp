#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4, 2, 2, 6, 4};
    int k = 6;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    map<int,int>test;
    int ans=0;
    for(int i=0;i<sizes;i++){
        int temp = k^arr[i];
        if(temp==k){
            ans++;
        }else{
            if(test.find(temp)!=test.end()){
                ans+=test[temp];
            }

        }
        test[arr[i]]++;
    }
    cout<<ans;
}