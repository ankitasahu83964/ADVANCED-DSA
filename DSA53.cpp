#include <iostream>
using namespace std;
//function signature
bool isprime(int n){
    //function body
    for(int i=2;i<n;i++){
        //not a prime number
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n=4;
    //function call
    if(isprime(n)){
    cout<<"is a prime no"<<endl;
    }
    else{
        cout<<"is  not a prime no"<<endl;
    }
}