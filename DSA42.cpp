#include <iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;    
}
int main(){
    int a=2;
    int b=4;
    int answer=power(a,b);  
    cout<< " answer is " <<answer << endl;

    int c=3;
    int d=3;
    answer=power(c,d);  
    cout<< " answer is " <<answer << endl;


    return 0;
}