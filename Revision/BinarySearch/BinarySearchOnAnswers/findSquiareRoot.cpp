#include<bits/stdc++.h>
using namespace std;
int main(){
    int m = 101;
    int low =1;
    int high = m;
    int ans=1;
    while(low<=high){
        int mid = low + ((high-low)/2);
        int mids= (mid*mid);
        if(mids<=m){
            ans=mid;
            low=mid+1;
        }else{
            high = mid-1;
        }
    }

    cout<<ans;
}