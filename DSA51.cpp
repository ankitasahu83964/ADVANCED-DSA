#include <iostream>
using namespace std;
//function signature
void printCounting(int n){
    //function body
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    cout<<endl;
}
int main(){
    int n=5;
    //function call
    printCounting(n);
    return 0;


}