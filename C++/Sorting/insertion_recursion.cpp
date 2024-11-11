#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int start,int end){
    if(start>=end) return;
int key = arr[start];
int idx = start-1;
while(idx>=0 && key < arr[idx]){
    arr[idx+1]=arr[idx];
    idx--;
}
arr[idx+1]=key;
insertion(arr,start+1,end);
}
int main(){
int arr[]={9,7,5,3,12,4,5,76,8};
int sizes = sizeof(arr)/sizeof(arr[0]);
insertion(arr,1,sizes);
for(auto it:arr) cout<<it<<" ";

}