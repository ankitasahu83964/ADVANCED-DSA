#include <iostream>
using namespace std;
//function signature
void update(int a){
    a=a/2;
}

int main(){
    int a=10;
    //function call
    update(a);
    cout<<a<<endl;
    return 0;
} 