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
    
    char strArray[5][11];
    for(int i=0 ; i<5 ; i++) {
        cin.get(strArray[i],10);
        }
    cin.get();

    for(int i=0 ; i<5 ; i++) {
        cout << strArray[i] << "\t";
        }
    
return 0;
}