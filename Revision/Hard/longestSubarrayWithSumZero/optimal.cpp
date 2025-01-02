#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1, 2, -3, 3, -1, 6, -6};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    map<int,int> temp;
    int sum=0;
    int count=0;
    for(int i=0;i<sizes;i++){
             sum+=arr[i];
            if(sum==0){
                count=max(count,i+1);
            }else{
                
                if(temp.find((sum))!=temp.end()){
                    count=max(count,i-temp[sum]);
                }
            }
    
    }

cout<<count;
}