#include <iostream>
using namespace std;
int main(){int n,x,sum=0;cin>>n;x=n;while(x>0){int d=x%10;sum+=d*d*d;x/=10;}cout<<(sum==n?"Armstrong":"Not Armstrong");return 0;}
