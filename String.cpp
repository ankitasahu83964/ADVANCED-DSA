#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool checkpalindrome(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }
    for(int i=0;i<str.length();i++){
        if(str[i] !=st.top()){
            return false;
        }
        st.pop();
    }
    return true;
}
int main(){
    string str="MoM";
    if(checkpalindrome)
       cout<<"palindrome";
    else
       cout<<"not palindrome";   
}