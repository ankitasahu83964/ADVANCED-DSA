#include <iostream>
using namespace std;
int main(){int n,x,r=0;cin>>n;x=n;while(n>0){r=r*10+n%10;n/=10;}cout<<(x==r?"Palindrome":"Not Palindrome");return 0;}
