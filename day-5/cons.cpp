#include<bits/stdc++.h>
using namespace std;

class student{

    string passcode;

    public:
    string name;
    int id;

    
    student(string pss,string n,int i){
        this->name = name;
        // age = a;
        i = id;
        this->id =id;
        this->passcode = passcode;
    }

    // student(string passcode,string name,int id): name(name),passcode(passcode),id(id)
    // {
    // }  

    void into(){
        cout<<"My name is "<<name<<"  , my id is "<<id<<" passcode is"<<passcode<<endl;
    }

    void setPass(string s){
        passcode = s;
    }
};

int main(){

    student s2("10","Mohit",1);
    // student s3;

    // s3 = s2;

    // int a = 10;
    // int*ptri = &a;
    // student*ptrs = &s2;

    // if(sizeof(ptri) == sizeof()){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;
    // }

    return 0;
}