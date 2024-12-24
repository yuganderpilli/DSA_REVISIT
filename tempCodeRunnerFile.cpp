#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int hello=0;
    for(int i=0;i<sizes;i++){
            
        for(int j=hello;j<=sizes;j++){
            cout<<arr[j]<<" ";
        }
        hello++;
        
        cout<<endl;
    }
    }