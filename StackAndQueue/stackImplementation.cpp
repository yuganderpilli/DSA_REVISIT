#include<bits/stdc++.h>
using namespace std;
void push(int stack[],int element,int &top,int stack_size){
    if(top <stack_size-1){
        top++;
        stack[top]=element;
    }else{
        cout<<"stack over flow";
    }
}
void pop(int stack[],int &top){
   if(top>=0){
    top--;
   }else{
    cout<<"Stack is emepty";
   }
}

void seek(int stack[],int top){
    if(top>=0){
        cout<<stack[top];
    }else{
    cout<<"Stack is emepty";
   }
}

int main(){
     int stack_size=5;
     int stack[stack_size];
     int top=-1;
    push(stack,1,top,stack_size);
    for(auto it:stack){
        cout<<it<<" ";
    }
    cout<<endl;
    pop(stack,top);
     
     for(auto it:stack){
        cout<<it<<" ";
    }
}