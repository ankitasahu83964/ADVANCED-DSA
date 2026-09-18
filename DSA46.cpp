#include <iostream>
using namespace std;
int power(int num1,int num2){
    //cout<<a<<endl;
    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num1;
    }
    return ans;    
}
int main(){
    int num1=8;
    int num2=3;
    int answer=power(num1,num2);  
    cout<< " answer is " <<answer << endl;
    return 0;
}