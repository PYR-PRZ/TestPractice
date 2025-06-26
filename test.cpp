#include <iostream>
#include <cstdlib>

using namespace std;

// test to see the changes 


int payam (int);

int main() {

int i , j = 1;
int num = 10;

cout << "How many numbers should be added (less than "<< num << " ) or 0 to exit? = ";
cin >> i;
int a = i;
int x[a] = {0};
int result = 0;

while (i != 0) {
    if (j <= a && a < num) {
        cout << "Enther Number " << j << " = ";
        cin >> x[j-1];
        result = result + x[j-1];
        j++;
        i--;
    }
    else if (a == 0) {
        cout << "Thank You!" << endl;
        return 0;
    }
    else {
        cout << "The input number is not allowed (should be less than "<< num << "!)" << endl;
        cout << "Please enter another number less than or equal to " << num << " (or 0 for exit) = ";
        cin >> i;
        a = i;
    }
}

while (i<a) {
    cout << "x[" << i << "] = " << x[i] << endl;
    i++;
}
cout << "Result = " << result << endl;

return 0;
}