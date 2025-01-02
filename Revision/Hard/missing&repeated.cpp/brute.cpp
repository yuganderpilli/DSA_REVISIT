#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,3,4,6};
    int size_a = sizeof(arr)/sizeof(arr[0]);
    int sum =0;
    int arr_sum=0;
    map<int,int> temp;
    for(int i=0;i<size_a;i++){
        sum+=i+1;
        temp[arr[i]]++;
        arr_sum+=arr[i];
    }
    int missing = -1;
    int repeated=0;
    for(auto it:temp){
        if(it.second==2){
            repeated=it.first;
        }
    }
    missing = sum-(arr_sum-repeated);
    cout<<repeated<<missing;
}