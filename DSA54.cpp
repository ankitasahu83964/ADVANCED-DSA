#include <iostream>
using namespace std;
//function signature
void dummy(int n){
    n++;
    cout<<"n is "<<n<<endl;
}

int main(){
    int n=4;
    //function call
    dummy(n);
    cout<<"number n is "<<n<<endl;
    return 0;
} 