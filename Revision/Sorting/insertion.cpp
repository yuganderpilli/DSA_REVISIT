#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={9,7,8,1,2,3,6,5,4};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<sizes;i++){
        int index = i-1;
        int key = arr[i];
        while(index>=0 && key < arr[index]){
            arr[index+1]=arr[index];
            index--;

        }
        arr[index+1]=key;
    }   
    for(auto it:arr){
        cout<<it<<" ";
    }


}