#include <iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num=13;
    if(isEven (num)){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
}