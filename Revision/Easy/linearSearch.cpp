#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,89};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int found =-1;
    int find =70;
    for(int i=0;i<sizes;i++){
        if(arr[i]==find){
            found=i;
        }
    }
if(found!=-1){
    cout<<"element found at "<<found;
}else{
    cout<<"element not found ";
}

}