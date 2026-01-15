/*
This code act as below:
    - Receive the number of rows and columns of the Table
    - Receive the value of each element in the table
    - Do the summation of each row
    - Show the complete table and each summation related to each Rows as the final column

Payamreza Pourreza
July 2025
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int i = 0 , j = 0;
    int x = 0 , y = 0;
    system("cls");

    // Receive the dimentions of the Table
    cout << "How many rows (less than or equal to 10) or insert '0' to exit = ";
    cin >> i;
    while (i<=0 | i>10) {
        if (i==0) {
            cout << "\n" << "Have a good time!" << endl << endl;
            return 0;
        }

        cout << "\n" << "Input number is not valid!" << endl;
        cout << "Please insert a new 'row' value (less than 10) or insert '0' to exit = ";
        cin >> i;
    } 
    
    cout << "How many columns (less than or equal to 10) or insert '0' to exit = ";
    cin >> j;
    while (j<=0 | j>10) {
        if (j==0) {
            cout << "\n" << "Have a good time!" << endl << endl;
            return 0;
        }

        cout << "\n" << "Input number is not valid!" << endl;
        cout << "Please insert a new 'column' value (less than 10) or insert '0' to exit = ";
        cin >> j;
    }

    // Printing the received dimentions of the Table
    cout << "\n" << "The number of Rows = " << i << endl;
    cout << "\n" << "The number of Columns = " << j << endl << endl;
    cout << "Now, give me " << i*j << " values for the table, each between 0 and 99" << endl << endl;

    // Receiveing the i*j elements of the Table
    int val[i][j];
    int sum = 0;

    for (x=0 ; x<i ; x++) {
        for (y=0 ; y<j ; y++) {
            cout << "Give me the value x[" << x << "][" << y << "] = ";
            cin >> val[x][y];
            while (val[x][y]<0 | val[x][y]>99) {
                cout << "\n" << "The input value is not in the range 0 to 99!" << endl;
                cout << "Please insert new values for the x[" << x << "][" << y << "] = ";
                cin >> val[x][y];
            }
        }
    }

    // Printing the whole Table and the summaton of each row
    cout << "\n" << "Your Table is as below : " << endl << endl;
    y = ((j+1)*8)+2;
    for (x=0; x<=y ; x++)
        cout << "-";
    for (x=0 ; x<i ; x++) {
        cout << endl;
        for (y=0 ; y<j ; y++) {
            cout << val[x][y] << "\t";
            sum = sum + val[x][y];
        }
        cout << "\t" << sum;
        sum = 0;
    }
    cout << endl << endl;
    return 0;
}