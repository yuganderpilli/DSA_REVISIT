#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr [ ]={7,5,23,2,4,5,6,87,8,3,234,432,6,7,8,4,3,23};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+sizes);
    cout<<arr[sizes-1]; // brute force approach 
     int brr [ ]={7,5,23,2,4,5,6,87,8,3,234,432,6,7,8,4,3,23};
    int sizesb = sizeof(brr)/sizeof(brr[0]);
    int maxEle= INT_MIN;
    for(int i=0;i<sizesb;i++){
        maxEle=max(maxEle,arr[i]);
    }
    cout<<endl<<maxEle;
}