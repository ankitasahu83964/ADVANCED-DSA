#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){  //outer loop
        char ch='A';
        for(int j=1;j<=n;j++){   //inner loop->start line
            cout<<ch;  
            ch=ch+1;
            cout<<" ";
        }
        cout<<endl;
    }
}