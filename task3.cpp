#include <iostream>
using namespace std;

int main() {
    
    // declaring and initializing variables for counters
    int i = 0, j = 0, k = 0;

    // constants
    char space = ' ', star = '*';

    // outer while loop for columns
    while (i < 5) {
        // first inner loop for spaces
        j = 1;
        while (j < 5 - i){
            cout << space;
            j++;
        }
        // second inner loop for stars
        k = 0;
        while (k <= i) {
            cout << star;
            k++;
        }
        i++;
        // going to the next line
        cout << endl;
    }

    cout << endl;

    cout << "__________________________________________________" << endl;
    cout << endl;
    // reinitializing counter variables for further use
    i = 1;
    j = 0;
    k = 0;
    
    // do while outer loop for columns
    while (i <= 5){
        j = 1;
        // inner do while loop for printing numbers in a row
        while (j <= i)  {
            cout << j;
            j++;
        }
        i++;
        // going to the next line
        cout << endl;
    } 


    return 0;
}
