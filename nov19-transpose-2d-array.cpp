#include<iostream>
using namespace std;
 //transpose matrix
    //rule:matrix should be in square format
    //when we convert any matrix into transpose matrix,the column gets convertyed into row and vice versa
int main(){

    int arr[2][3] = {1,2,3,4,5,6};
    cout<<"enter 6 values:\n";
    for(int r=0;r<2;r++){

        for(int c=0;c<3;c++){
            cin>>arr[r][c];
        }
    }
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }
    
}