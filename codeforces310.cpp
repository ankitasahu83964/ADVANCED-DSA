#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;string r=s;for(int i=0,j=s.length()-1;i<j;i++,j--)swap(r[i],r[j]);cout<<(s==r?"YES":"NO");return 0;}
