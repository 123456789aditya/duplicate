///in one dimension
///array,
///we can use only one subscript taht belong to a size of an array,
///u can create static array as well as dynamic array.

/*#include<iostream>
using namespace std;
int main(){
    int arr[]={19,8,4,5,6};
    arr[2]=100;
    arr[5]=900;
    int len=sizeof(arr)/sizeof(arr[0]);
}*/

///wap to display the sum of the vakues of an array.

/*#include<iostream>
using namespace std;
int main(){
int arr[] = {19,8,4,5,6};
int sum=0;
int len=sizeof(arr)/sizeof (arr[0]);
for (int idx=0;idx<len;idx++){
    sum=sum+arr[idx];
}
cout<<sum;
}*/

///wap to display the min value from a given array.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {19,8,4,5,6,56};
        int len = sizeof(arr)/sizeof(arr[0]);
        int chotu = INT8_MIN;
        for(int i=0;i<len;i++){
            if(chotu<arr[i]){
                chotu=arr[i];
            }
        }
        cout<<"min value="<<chotu;
}


/*#include<iostream>
using namespace std;
int main(){
    int arr[] = {19,8,4,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        if(arr[i]%2==0){
            cout<<arr[i];
        }
    }
}*/

///wap to find the second meximum value in a given array.
/*#include<iostream>
using namespace std;
int main(){
    int arr[] = {19,8,4,5,6};
    0
}*/

