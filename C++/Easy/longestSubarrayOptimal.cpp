#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1,1,1,1,1,4,2,7};
    int sizes=sizeof(arr)/sizeof(arr[0]);
    int find=6;
    int temp=0;
    int sum=0;
    map<int,int> store;
    for(int i=0;i<sizes;i++){
        sum+=arr[i];
        if(sum==find){
            temp=max(temp,i+1);
        }
        int rem = sum-i;
        if(store.find(rem)!=store.end()){
            int len = i-store[rem];
            temp=max(temp,len);
        }
        if(store.find(sum)==store.end()){
                store[sum]=i;
        }
    }
    cout<<temp;
}

 