#include<bits/stdc++.h>
using namespace std;
void reverses(int arr[],int start, int end){
if(start>=end) return;
int starts = arr[start];
swap(arr[start],arr[end]);
reverses(arr,start+1,end-1);

}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int sizes = sizeof(arr)/sizeof(arr[0]);
reverses(arr,0,sizes-1);
for(int i=0;i<sizes;i++) cout<<arr[i];

}