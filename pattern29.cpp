#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=0;
    
    while(i<n){
        int j=0;
        
        while(j<=i){
            char ch='A'+i;
            cout<<ch;
            //ch=ch+1;
            j=j+1;
            cout<<" ";
        }
        cout<<endl;
        i=i+1;
    }
}