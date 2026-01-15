/*
This code works on charachters and strings as below:
    - Print String

Payamreza Pourreza
July 2025
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    int x , y;
    int i ;
    cout << "How Many string? = ";
    cin >> x;
    cout << "How Many charcters for each string? = ";
    cin >> y;

    cin.ignore();
    
    char test[x][y];

    for(i=0 ; i<x ; i++) {
            cout << "Give me the string [" << i <<  "] = ";
            cin.get(test[i],y);
            cin.ignore(1000, '\n');
    }

    for(i=0 ; i<x ; i++) {
        cout << test[i] << "\t";
    }

return 0;
}