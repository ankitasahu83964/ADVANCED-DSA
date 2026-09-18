#include <iostream>
using namespace std;
//function signature
int update(int a){
    int ans=a*a;
    return ans;
   
}

int main(){
    int a=14;
    //function call
    a=update(a);
    cout<<a<<endl;
    
} 