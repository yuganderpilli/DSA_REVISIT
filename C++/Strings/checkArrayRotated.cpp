#include<bits/stdc++.h>
using namespace std;

string rightRotate(int rotate,string s){
    rotate %= s.size();
    while(rotate>0){
        int n=s.size();
        char c=s[n-1];
        for(int i=n-1;i>0;i--){
            s[i]=s[i-1];
        }
        s[0]=c;
        rotate--;
    }
    return s;
}

string leftRotate(int rotate,string s){
    rotate %= s.size();
    while(rotate >0){
        int n=s.size();
        char c=s[0];
        for(int i=1;i<n;i++){
                s[i-1]=s[i];
        }
        s[n-1]=c;
        rotate--;
    }    
return s;

}


int main(){
    string s="mom";
    int sizes=s.size();
    int index=0;
    int rotate =2;
string leftRotated = leftRotate(rotate, s);
string rightRotated = rightRotate(rotate, s);


    if(s==leftRotated){
        cout<<true;
    }else if(s==rightRotated){
        cout<<true;
    }
    else cout<<false;
}