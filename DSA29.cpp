#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=5;
    char op;
    cout<<"enter the operation you want perform"<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<(a+b)<<endl;
                  break;

        case '-': cout<<(a-b)<<endl;
                  break;

        case '*': cout<<(a*b)<<endl;
                  break;

        case '/': cout<<(a/b)<<endl;
                  break;

        default: cout<<"please enter a valid operation"<<endl;          


    }


}