#include <iostream>
using namespace std;
int main(){
    //declare
    int number[15];
    //accessing an array
    cout<<" value at 14 index "<<number[14]<<endl;

    //cout<<" value at 20 index "<<number[20]<<endl;
    //initializing an array
    int second[3]={5,7,11};

    //accessing an element
    cout<<" value at 2 index "<<number[2]<<endl;

    int third[15]={2,7};
    int n=15;
    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }

    cout<<endl<<"everything is fine"<<endl<<endl;
    return 0;

}