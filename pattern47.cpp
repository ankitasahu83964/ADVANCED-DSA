#include <iostream>
using namespace std;

int main() {
    int n=5;
    int i = 1;

    while(i <= n) {
        int j=1;
        while (j<=n-i+1){
            cout<<j;
            j++;

        }

        int space=1;
        while(space<=2*(i-1)){
            cout << "* ";
            space++;

        }  

        j=n-i+1;
        while(j>=1){
            cout<<j;
            j--;
        }   

        cout << endl;
        i++;
    }  
    
}    