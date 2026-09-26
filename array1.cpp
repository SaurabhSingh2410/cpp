#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int i=0;
    int j=4;
    
    while(i<j){
        // int temp=0;
        // arr[i]=temp;
        // arr[j]=arr[i];
        // temp=arr[j];
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}