#include<iostream>
#include<cmath>
using namespace std;
int fun(int n){
    int bin=0;
    int i=0;
    while(n>0){
        int bit=(n & 1);
        bin=bit*pow(10, i++)+bin;
        n=n>>1;
    }
    return bin;
}
int main(){
    int n;
    cout << "Enter num: "; // Sirf message print kiya
    cin >> n;              // User se input liya
    
    int b = fun(n);
    cout << "Binary is: " << b << endl;
    return 0;
}
