#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row_size=sizeof(arr)/sizeof(arr[0]);
    int col_size= sizeof(arr[0])/sizeof(arr[0][0]);
    
    for(int i=0;i<row_size;i++){
        for(int j=0;j<col_size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row_size;i++){
        for(int j=i+1;j<col_size;j++){
            swap(arr[i][j], arr[j][i]);  
        }
        cout<<endl;
    }


    
    for(int i=0;i<row_size;i++){
        for(int j=0;j<(col_size/2);j++){
             swap(arr[i][j],arr[i][col_size-1-j]);
            
        }
        cout<<endl;
    }




    for(int i=0;i<row_size;i++){
        for(int j=0;j<col_size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}