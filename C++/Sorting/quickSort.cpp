#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end){
    int pivot = arr[start];
    int i=start;
    int j=end;
    while(i <j){
        while(arr[i]<=pivot && i<end) i++;
        while(arr[j]>pivot && j>start) j--;
        if(i<j){
            swap(arr[i],arr[j]);
        }
    
    }
swap(arr[start],arr[j]);
return j;

}
void quickSort(int arr[],int start,int end){
if(start>=end) return;
int p = partition(arr,start,end);
 quickSort(arr,start,p-1);
 quickSort(arr,p+1,end);

}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int sizeOfArr=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,sizeOfArr-1);
    for(auto it:arr){
        cout<<it<<" ";
    }
}