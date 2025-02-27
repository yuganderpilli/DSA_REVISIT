#include<bits/stdc++.h>
using namespace std;
class Vehical{
    private:
    string name="";
    public:
    void setName(string names){
        name=names;
    }
    void getName(){
        cout<<name<<endl;
    }
};

class Car: public Vehical{
public:
    Car(string names){
        setName(names);
    }



};




class Fruit{
 public:
        string name;
        string color;
    Fruit(){
        cout<<"The constructor is called";
    }
    Fruit(string names, string colors){
        name=names;
        color=colors;
    }

    // Fruit( Fruit& f){
    //     name=f.name;
    //     color=f.color;
    // }

~Fruit(){
    cout<<"Destructor is called";
}

};


int main(){

Fruit apple;
apple.name="Apple";
apple.color="pink";
 cout<<apple.name<<endl;
 cout<<apple.color;
Fruit *mango=new Fruit;
mango->name="Hello";
mango->color="Yellow";

cout<<mango->name<<endl;
cout<<mango->color<<endl;

Fruit grape("grape","Green");
cout<<endl<<grape.name<<endl;
cout<<grape.color<<endl;


Car zen("Zen");

zen.getName();


}