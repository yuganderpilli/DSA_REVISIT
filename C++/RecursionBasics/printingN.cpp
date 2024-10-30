#include<bits/stdc++.h>
using namespace std;
void printN(int start,int end){
    if(start > end) return;
    cout<<start<<" ";
    printN(start+1,end);
}


int main(){
printN(0,112);

}