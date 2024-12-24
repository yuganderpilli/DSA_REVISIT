#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,0,0,1,0,1,0,1,1,0,0};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int first=-1;
    
    for(int i=0;i<sizes;i++){
        if(arr[i]==0){
            first=i;
            break;
        }
    }
    if(first!=-1 && first!=sizes-1){
       int  second=first+1;
    while(second<sizes){
        if(arr[second]==0){
            second++;
        }else{
            swap(arr[first],arr[second]);
            first++;
        }
    }
    }
    for(auto it:arr)cout<<it<<" ";
}