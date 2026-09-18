#include <iostream>
using namespace std;
//function signature
void update(int a){
    a-=5;
}

int main(){
    int a=15;
    //function call
    update(a);
    cout<<a<<endl;
    
} 