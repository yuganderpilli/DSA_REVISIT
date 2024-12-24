#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={564,3,3,4,56,67,23,3,56,7,78};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    for(int i=1;i<sizes;i++){
        largest=(arr[i]<largest)?largest:arr[i];
    }
    cout<<largest;
}