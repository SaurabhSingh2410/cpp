#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,0,1,1,1,0,0,1};
    for(int i=0;i<9;i++){
        if(arr[i]==0){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
        cout<<arr[i]<<" ";
    }
    return 0;
}