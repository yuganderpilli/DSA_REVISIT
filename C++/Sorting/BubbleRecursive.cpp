#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[], int start, int end){
    if(start>end) return;
for(int i=0;i<=end-start;i++){
    if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
}

bubble(arr,start+1,end);
}
int main(){
    int arr[]={8,67,5,2,21,1,34,53,1,86,53,2,43,64};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,0,sizes-1);
    for(auto it:arr) cout<<it<<" ";
}