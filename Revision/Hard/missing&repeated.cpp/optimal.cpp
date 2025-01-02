#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[]={1,1,2,3,4,6};
     int n=6;
     long long sum= (n*(n+1))/2;
     long long sumS=(n*(n+1)*((2*n)+1))/6;
     int s=0;
     int ss=0;
     for(int i=0;i<n;i++){
        s+=arr[i];
        ss+=(arr[i]*arr[i]);
     }
     int x= sum-s;
     int y = sumS-ss;
    int val1=y/x;
    int val2= (val1+x)/2;
    cout<<val1-val2<<val2;

}