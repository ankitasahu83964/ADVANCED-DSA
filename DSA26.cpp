#include <iostream>
using namespace std;
int main(){
    char ch='a';
    int num=1;

    cout<<endl;
    switch(num){
        case 1: cout<<"first "<<endl;
                cout<<"first again"<<endl;
                break;
        case '1': cout<<"character one"<<endl;
                break;
        default: cout<<"It is default case"<<endl;               
    }
    cout<<endl;
    
    return 0;
}