#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={2, 3, 5, 1, 9};

int size_a = sizeof(arr)/sizeof(arr[0]);
for( int i=0;i<size_a;i++){
    int sum=0;
    for(int j=0;j<=i;j++){
            sum+=arr[j];
        cout<<arr[j]<<" ";
    }
    cout<<"sum "<<sum<<endl;
}

}
