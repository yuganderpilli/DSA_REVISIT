#include<bits/stdc++.h>
using namespace std;
void Prints(int n){
    if(n<1){
        return ;
    }
    cout<<n<<" ";
    Prints(n-1);
}
int main(){
Prints(19);
}