#include <iostream>
using namespace std;

//hold
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    //print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
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
    printArray(third,15);

    //initialzing all location with 0
    int fourth[10]={0};
    printArray(fourth,10);
    

    //initialzing all location with 1[not possible wiith below line]
    int fifth[10]={1};
    printArray(fifth,10);

    cout<<endl<<"everything is fine"<<endl<<endl;
    return 0;

}