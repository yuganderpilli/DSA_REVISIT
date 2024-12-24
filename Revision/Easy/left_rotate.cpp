#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int rotate = 3;
    for(int i=0;i<rotate;i++){
        int element = arr[0];
        for(int i=0;i<sizes-1;i++){
            arr[i]=arr[i+1];
        }
        arr[sizes-1]=element;
    }    
    for(auto it:arr){
        cout<<it<<" ";
    }
}