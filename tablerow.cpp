/*#include<iostream>
using namespace std;
int main(){
   int marks[4]={10,20,30,40};
   cout<<marks[0]<<endl;
   cout<<marks[1]<<endl;
   cout<<marks[2]<<endl;
   cout<<marks[3]<<endl;
   int mathmarks[4]={60,70,80,90};
   cout<<"thsi is math marks"<<endl;
   cout<<mathmarks<<endl;

    
    for(int i=0;i<8;i++){
        cout<<"marks of roll number"<<" "<<i<<"is"<<"  "<<marks[i]<<endl;;
    }
}*/


///doing same question by using while and do while loop///


/*#include<iostream>
using namespace std;
int main(){
    int marks[8]={13,43,56,76,77,56,45,31};
    int i=0;
    while(i<8){
        cout<<"marks of roll number"<<" "<<i<<" "<<"is"<<" "<<marks[i]<<endl;
        i++;
    }
}*/

/*#include<iostream>
using namespace std;
int main(){
    int marks[8]={45,76,74,90,56,43,77,88};
    int i=0;
    do{
        cout<<"marks of roll number"<<i<<"is"<<marks[i]<<endl;
        i++;
    }while(i<8);
}*/

#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        cout<<"marks of roll number"<<" "<<i<<" "<<"is"<<" "<<arr[i]<<endl;
    }
    int *p = arr;
    for(int j=0;j<5;j++){
        cout<<"marks for roll no"<<j<<"is"<<*p<<endl;
        cout<<"marks for roll no"<<j<<"is"<<*(p+1)<<endl;
        cout<<"marks for roll no"<<j<<"is"<<*(p+2)<<endl;
        cout<<"marks for roll no"<<j<<"is"<<*(p+3)<<endl;;
        cout<<"marks for roll no"<<j<<"is"<<*(p+4)<<endl;


    }
    
}


