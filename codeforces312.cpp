#include <iostream>
#include <string>
using namespace std;
int main(){string s;int count=0;cin>>s;for(char c:s)if(c>='A'&&c<='Z')count++;cout<<count;return 0;}
