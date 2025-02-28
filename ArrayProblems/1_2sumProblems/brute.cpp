#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,2,3,6,8,5,2};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int target=7;
    for(int i=0;i<sizes;i++){
        for(int j=i+1;j<sizes;j++){
            if(arr[i]+arr[j]==7){
                cout<<arr[i]<<" "<<arr[j];
                cout<<endl;
            }
        }
    }    
}
