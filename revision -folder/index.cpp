#include<iostream>
using namespace std;
int main(){
    cout<<"find the second highest element in an given array"<<endl;
    int arr[] = {50,10,30,100,70};
    int max,second;
    max=arr[0];
    
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]>max){
            max=arr[i];
            second=max;
        }
        else if(arr[i]>second && arr[i]!=max){
            second = arr[i];
        }
    }
    cout<<second;
}