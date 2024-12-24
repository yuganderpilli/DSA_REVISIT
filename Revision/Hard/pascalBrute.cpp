#include<bits/stdc++.h>
using namespace std;
int factrorial(int i,int j){
    int ans=1;
    for(int k=0;k<j;k++){
        ans=ans*(i-k);
        ans=ans/(k+1);
    }
    return ans;
}
int main(){
    int row = 5;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
             cout<<factrorial(i,j)<<"  ";
        }
        cout<<endl;
    }
        cout<<endl;
 for(int i=0;i<=5;i++){
    cout<<factrorial(5,i)<<" ";
}
        cout<<endl;
for(int i=0;i<=6;i++){
    cout<<factrorial(6,i)<<" ";
}


}