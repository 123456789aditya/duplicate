/*#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char name[20];
    char surname[20];
    cout<<"enter ur name:"<<endl;
    cin>>name;
    cout<<"enter ur surname"<<endl;
    cin>>surname;
    cout<<strcat(name,surname)<<"\t";
    ///cout<<strlen(name)<<"\t";
    cout<<strcpy(name,surname);

}*/
/*#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char pwd[20];
    char repwd[20];
    cout<<"enter ur password"<<endl;
    cin>>pwd;
    cout<<"enter repwd"<<endl;
    cin>>repwd;
    cout<<"\n";
    if(strcmp(pwd,repwd)==0){
        cout<<"correct";
    }
    else{
        cout<<"password not matched";
    }
}*/

//wap to check the given string is palindrome or not;

#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char passs[20];
    cout<<"enter the string"<<endl;
    cin>>passs;

    if(strrev(passs)==passs)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}




