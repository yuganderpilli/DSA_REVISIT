#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int sizes=sizeof(arr)/sizeof(arr[0]);
    int find=15;
    int temp=0;
    int len=-1;
    while(temp<sizes){
        for(int i=temp;i<sizes;i++){
            int sum =0;
        for(int j=temp;j<=i;j++){
            sum+=arr[j];
        
        }
        if(sum==find){
            cout<<" found " ;
            len=max(len,(i-temp+1));
        }
        
        }       
        
            temp++;
    }
cout<<len<<" ";

}

