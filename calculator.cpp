#include<iostream>
using namespace std;
int main(){
    double a;
    cout<<"enter first no."<<endl;
    cin>>a;
    char x;
    cout<<"enter operation "<<endl;
    cin>>x;
    double b;
    cout<<"enter second no."<<endl;
    cin>>b;
    switch(x){
        case '+':cout<<"your number is "<<a+b<<endl;
        break;
        case '-':cout<<"your number is "<<a-b<<endl;
        break;
        case '/':
        if(b==0){
            cout<<"neeche zero nahi"<<endl;
        }
        else{
        cout<<"your number is "<<a/b<<endl;
        }
        break;
        case '*':cout<<"your number is "<<a*b<<endl;
        break;
    }
    return 0;
}