#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n=5;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        ans=(digit*pow(10,i))+ans;
        n=n>>1;
        i++;

    }
    cout <<" answer is " <<ans <<endl;
}