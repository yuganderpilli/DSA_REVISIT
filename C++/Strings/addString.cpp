#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="123";
    string s2="18";
    int size=0;
    string ans="";
    size=(s1.size()<=s2.size())?s1.size()-1:s2.size()-1;
    int one=s1.size()-1;
    int two=s2.size()-1;
    int rem=0;
    while(size>=0){
        
        int digit=int(s1[one])+int(s2[two])+rem;
        if(digit>9){
                rem=1;
                ans+=to_string(digit)[1];
        }else if(digit<10){
            ans+=to_string(digit);
        }
        else{
            rem=0;
        }
        one--;
        two--;
    size--;
    }
    
reverse(ans.begin(),ans.end());
cout<<ans;
}