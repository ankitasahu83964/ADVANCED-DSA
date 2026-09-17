#include <iostream>
using namespace std;
int main(){
    char ch='1';
    int num=1;

    cout<<endl;
    switch(2*num){
        case 2: cout<<"first "<<endl;
                cout<<"first again"<<endl;
                break;
                
        case '1': switch(num){
                   case 1: cout<<"value of num is"<<num<<endl;
                   break;
                 } 
                break; 
        default: cout<<"It is default case"<<endl;               
    }
    cout<<endl;
    
    return 0;
}