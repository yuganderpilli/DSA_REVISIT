#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int size_of_arr=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<size_of_arr;i++){
        int idx = i-1;
        int key = arr[i];
        while(idx>=0 && key < arr[idx]){
            arr[idx+1]=arr[idx];
            idx-=1;
        }
    arr[idx+1]=key;
    }

for(auto it:arr) cout<<it<<" ";

}