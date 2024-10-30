#include<bits/stdc++.h>
using namespace std;

int palindromeCheck(int n,int num){
if(num==0) return n;
n= (n*10)+(num%10);
return palindromeCheck(n,num/10);
}
int main(){
int n = 121;
cout<<palindromeCheck(0,n);


}