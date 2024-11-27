/*#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,5,8,79,80};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<length;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[] = {19,8,4,5,6};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        sum = sum+arr[i];
    }
    cout<<sum;
}*/

/*#include<iostream>
using namespace std;
int main(){
    cout<<"find the maximum number in this array"<<endl;
    int arr[] = {24,65,37,90,36};
    int small = INT8_MIN;
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(small<arr[i]){
            small = arr[i];
        }

    }
cout<<"maximum number in array is:"<<small;

}*/

#include<iostream>
using namespace std;
int main(){
    int arr[] = {19,8,7,85,90};
    int large = INT8_MAX;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        if(arr[i]<large){
            large = arr[i];
        }
    }
    cout<<large;
}