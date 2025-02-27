#include<bits/stdc++.h>
using namespace std;
long long sample(int num,int ans,int root){
    int val=1;
    while(root>0){
        val=val*num;
        if(val>ans){
            return 0;
        }
        root--;
        if(val==ans){
            return num;
        }
    
    }
return 1;
}
int main(){
     int m = 125;
     int root=3;
    int low =1;
    int high = m;
    int ans=1;
    while(low<=high){
        int mid = low + ((high-low)/2);
        int mids= sample(mid,m,root);
        if(mids==mid){
            cout<<mids;
            break;
        }
        else if(mids==0){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }




}