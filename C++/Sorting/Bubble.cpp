#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={9,8,7,6,5,5,4,3,2,1,0};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizes;i++){
        for(int j=0;j<sizes-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

for(auto it:arr) cout<<it<<" ";
}