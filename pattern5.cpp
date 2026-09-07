#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=7){
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;    
        } 
    cout<<endl;
    i=i+2;
    }    
}