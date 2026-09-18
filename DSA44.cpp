#include <iostream>
using namespace std;
int power(){
    int a=5;
    int b=5;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;    
}
int main(){
    cout<< " answer is " <<power()<< endl;
    return 0;
}