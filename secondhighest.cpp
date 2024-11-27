/*#include<iostream>
using namespace std;
int main(){
    int arr[] = {20,4,12,3,14,7};
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        int max1,max2;
        max1=max1=INT8_MIN;
        for(int i=0;i<s;i++){
            if(arr[i]>max1){
                max2=max1;
                max1=arr[i];
            }

            else{
                if(arr[i]>max2 && arr[i]!=max1){
                    max2=arr[i];
                }
            }
        }
        cout<<"second highest value:"<<max2;
    }
}*/

///wap to display prime number in a given aray. arr=[7,4,6,11,5]
/// wap to replace 1 with 0 in a given array?arr=[2,1,3,1,5,1]
/// wap to find out sum of all the odd number;arr=[7,4,6,11,5]

/*#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[] = {7,4,6,11,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]%2!=0){
            sum=sum+arr[i];


        }
    }
    cout<<"sum of odd numbes will be:"<<sum;


}*/
///wap to find the valid square roots of the given array arr=[64,24,81,312,25,121,76]

#include<iostream>
using namespace std;
int main(){
    int arr[] = {64,24,81,312,25,121,76};
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        int j = arr[i];//64
        for(int x=1;x<=j;x++){
            if(x*x==j){
                cout<<j<<"\t";
                break;

            }
        }

    }



}

/// wap to display the array in descending order.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,1,4,2,5};


}




