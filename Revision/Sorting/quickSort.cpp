#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end){
int pivot= arr[start];
int i=start;
int j=end;
    while(i<=j){
        while((arr[i]<=pivot)&& (i<=end)){
            i++;
        }
        while((arr[j]>pivot)&& (j>=start)){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[start],arr[j]);
    return j;

}
void quickSort(int arr[],int start,int end){
    if(start<end){
        int p=partition(arr,start,end);
        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
    }
}
int main(){
    int arr[]={7,8,9,1,2,3,6,4,5};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    quickSort(arr,0,sizes-1);
    for(auto it:arr) cout<<it<<" ";
}