#include <iostream>
using namespace std;

int main() {
    int n=5;
    int i = 1;

    while(i <= n) {

        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }

        int j=1;
        while (j<=i){
            cout<<j;
            j++;

        }
        int space=n-i;
        while(space){
            cout << "* ";
            space--;

        }
        

        cout << endl;
        i++;
    }  
    
}    