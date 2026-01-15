/*
This code act as below:
    - Receive the number of rows and columns of the Table
    - Receive the value of each element in the number-set
    - Print all the received values without sorting
    - Sort the number-set starting from the Maximum value and the print the result
    - Sort the number-set starting from the Minimum value and the print the result

Payamreza Pourreza
July 2025
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int i = 0 , j;
    int x = 0 , y = 0;
    system("cls");

    // Receive the number of elements
    cout << "How many elements do you have for the sorting? (insert between 2 to 10 or '0' for exit) = ";
    cin >> i;
    while (i<=0 | i>10) {
        if (i==0) {
            cout << "\n" << "Have a good time!" << endl << endl;
            return 0;
        }

        cout << "\n" << "Input number is not valid!" << endl;
        cout << "Please insert a new value (between 1 to 10 or '0' for exit) = ";
        cin >> i;
    } 

    // Printing the received numbers of Elements
    cout << "\n" << "The number of Elements = " << i << endl;
    cout << "Now, give me " << i << " values for the Elements, each between 0 and 99" << endl << endl;

    // Receiveing the i elements
    int val[i];
    int temp = 0;

    for (x=0 ; x<i ; x++) {
            cout << "Give me the value x[" << x << "] = ";
            cin >> val[x];
            while (val[x]<0 | val[x]>99) {
                cout << "\n" << "The input value is not in the range 0 to 99!" << endl;
                cout << "Please insert new values for the x[" << x << "] = ";
                cin >> val[x];
        }
    }

    // Printing the whole number set
    cout << "\n" << "Your number set is : {";
    for (x=0 ; x<i ; x++) {
        cout << val[x];
        if (x<i-1)
            cout << ",";
    }
    cout << "}" << endl;

    // Sorting the numbers from Small to Big

    for (j=1 ; j<=i-1 ; j++) {
        for (y=j ; y>=1 ; y--) {
            if (val[y]>val[y-1]) {
                temp = val[y-1];
                val[y-1] = val[y];
                val[y] = temp;
            }
        }
    }
    
    // Printing the sorted numbers (Start from the Maximum Value)
    cout << "\n" << "The sorting result (Start from the Maximum Value) : {";
    for (x=0 ; x<i ; x++) {
        cout << val[x];
        if (x<i-1)
            cout << ",";
    }
    cout << "}" << endl;

     // Printing the sorted numbers (Start from the Minimum Value)
    cout << "\n" << "The sorting result (Start from the Minimum Value) : {";
    for (x=i-1 ; x>=0 ; x--) {
        cout << val[x];
        if (x>0)
            cout << ",";
    }   
    cout << "}" << endl << endl;
    
    return 0;
}