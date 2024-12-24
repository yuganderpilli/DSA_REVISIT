#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,1,1,1,1,1,6,1,2,3};
    int sizes=sizeof(arr)/sizeof(arr[0]);
    map<int,int> sample;
    int find = 5;
    int maxs= 0;
    int sum=0;
    for(int i=0;i<sizes;i++){
        sum+=arr[i];
        
        if(sum==find){
            maxs=max(maxs,i);

        }
        int rem = sum-find;
        if(sample.find(rem)!=sample.end()){
            
            int len = i- (sample[rem]);
           

            maxs = max(maxs,len);
        }
        sample[sum]=i;
    }

cout<<maxs;
}