#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age"<<endl;
    cin>>age;
    // if(age>18){
    //     cout<<"you can vote"<<endl;
    // }
    // else{
    //     cout<<"you cant vote"<<endl;
    // }
    (age>18)? cout<<"can vote" : cout<<"cannot vote";
    return 0; 
}

