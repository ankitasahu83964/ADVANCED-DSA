#include <iostream>
using namespace std;
int main(){
    int a=2;
    int b=4;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }

    cout<< " answer is " <<ans << endl;

    int c=3;
    int d=5;
    ans=1;
    for(int i=1;i<=d;i++){
        ans=ans*c;
    }
    cout<< " answer is " <<ans << endl;

    int e=4;
    int f=3;
    ans=1;
    for(int i=1;i<=f;i++){
        ans=ans*e;
    }
    cout<< " answer is " <<ans << endl;

    return 0;
}