#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,3,3,4,5,6,7,8,9};
    int find = 3;
    int first =-1;
    int last=-1;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizes;i++){
        if(arr[i]==find){
            if(first==-1)first = i;
            last=i;
        }
    }

cout<<first<<last;
}