#include<iostream>
using namespace std;
int main(){
    int a=50;
    int *ptr=&a;
    //++ ke liye = (*ptr)++;
    *ptr=75;
    cout<<a<<endl;
    return 0;
}