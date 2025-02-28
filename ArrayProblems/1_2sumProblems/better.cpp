#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,2,3,6,8,5,2};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int target=7;
    map<int,int> temp;


    for(int i=0;i<sizes;i++){
            int difference = target-arr[i];
            if(temp.find(difference)!=temp.end()){
                cout<<arr[i]<<" "<<difference;
                break;
            }
            temp[arr[i]]=i;
        }
    }    

