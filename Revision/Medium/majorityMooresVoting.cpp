#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[]={2,1,1,1,1,3,3,4};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int count=0;
    int element = arr[0];
    for(int i=0;i<sizes;i++){
            if(count==0){
                count=0;
                element = arr[i];
            }
            if(element ==arr[i]){
                count++;
            }else count--;
            
    
    }

    cout<<element;
}