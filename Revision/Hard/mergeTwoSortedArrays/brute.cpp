#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,8,10};
    int brr[]={2,3,9};
    int size_a=sizeof(arr)/sizeof(arr[0]);
    int size_b=sizeof(brr)/sizeof(brr[0]);
    set<int>sample;
    for(int i=0;i<size_a;i++){
        sample.insert(arr[i]);
    }
    for(int j=0;j<size_b;j++){
        sample.insert(brr[j]);
    }
    int i=0;
    int j=0;
    for(auto it:sample){
        if(i<size_a){
            arr[i]=it;
            i++;
        }else{
            brr[j]=it;
            j++;
        }
    }
for(int i=0;i<size_a;i++){
    cout<<arr[i];
}
cout<<endl;
for(int j=0;j<size_b;j++){
    cout<<brr[j];
}


}