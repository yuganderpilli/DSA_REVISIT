#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row_size=sizeof(arr)/sizeof(arr[0]);
    int col_size= sizeof(arr[0])/sizeof(arr[0][0]);
    int top=0;
    int left=0;
    int bottom=row_size-1;
    int right = col_size-1;
while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
        cout<<arr[top][i]<<" ";
    }
    top++;
    for(int i=top;i<=bottom;i++){
        cout<<arr[i][right]<<" ";
    }
    right--;
    if(top<=bottom){
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
    }

    if(left<=right){
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" ";
        }
        left++;
    }

}




}