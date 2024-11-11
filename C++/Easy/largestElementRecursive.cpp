#include<bits/stdc++.h>
using namespace std;
int maxEle(int arr[],int end,int maxs){
    if(end<=0) return maxs;
    return max(maxEle(arr,end-1,max(arr[end],maxs)),maxs);
    
}

int main(){
    int arr[]={78,5,42,32,436,122,578,65,34,234,123,213,32};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    cout<< maxEle(arr,sizes-1,INT_MIN);
}