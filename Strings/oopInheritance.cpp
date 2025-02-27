#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"I am a parent classs"<<endl;
    }

};

class ChildOne: public Parent{
    public:
    ChildOne(){
        cout<<"I am child one class";
    }

};


class childTwo: public Parent{
    public:
    childTwo(){
            cout<<"I am child two class";
    }
};

int main(){


  ChildOne* co = new ChildOne;


}