#include <iostream>
using namespace std;

int main() {
    int n=5;
    int i = 1;

    while(i <= n) {
        //first triangle
        int space=n-i;
        while(space){
            cout << " ";
            space--;

        }
        //second triangle
        int j=1;
        while (j<=i){
            cout<<j;
            j++;

        }
        //third triangle
        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }

        cout << endl;
        i++;
    }  
    
}    