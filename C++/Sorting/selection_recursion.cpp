#include<bits/stdc++.h>
using namespace std;
void sel_rec(int arr[],int start,int end){
if(start>=end) return;
int min = start;
for(int i=start+1;i<end;i++){
    if(arr[min]>arr[i]) min = i;
}
if(arr[min]!=arr[start]) swap(arr[min],arr[start]);
sel_rec(arr,start+1,end);
}


int main(){
int arr[]={9,8,7,6,5,54,4,2,1,0};
int sizes= sizeof(arr)/sizeof(arr[0]);
sel_rec(arr,0,sizes);
for(int i=0;i<sizes;i++) cout<<arr[i]<<" ";
}