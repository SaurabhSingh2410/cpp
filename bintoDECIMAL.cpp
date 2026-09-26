#include<iostream>
#include<cmath>
using namespace std;
int fun(int n){
    int a=0;
    int deci=0;
    while(n>0){
        int bit=n%10;
        deci=deci+bit*pow(2 , a++);
        n=n/10;
    }
    return deci;
}
int main(){
    int n;
    cout<<"enter binary n0. ";
    cin>>n;
    int x=fun(n);
    cout<<"your decimal is : "<<x<<endl;
    return 0;
}