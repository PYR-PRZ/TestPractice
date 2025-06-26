#include <iostream>
#include <conio.h>

using namespace std;


#define PI 3.14159
#define SR "Payam "
const int FR = 125; 

int main () {

int min = 1;
int max = 999;
int i,j;

//char str[8];
//std::string st = "2electron ";
//std::cout << st << std::endl;
//std::cout << SR << std::endl;
//std::cout << FR << std::endl;
//std::cout << PI << std::endl;
//std::cin >> a >> b;
//std::cout << "a : " << a << std::endl;
//std::cin >> b;
//std::cout << "b : " << b << std::endl;
//std::cout << "Press any key to continue..." << "\n";
//getch();
int x;
while (x != 0) {
x = min + rand() % (max - min + 1);
cout << "Enetr a number or 0 to exit : ";
cin >> i;
while (j != 0)
{
//cout << "x = " << x << "\n";
if (i == 0)
{
    cout << "\n" << "It was nice to see you!" << "\n" << "\n";
    cout << "\n" << "The random number was = " << x << "\n" << "\n";

    return 0;
}
else if (i == x)
{
    cout << "\n" << "Perfect! You found the currect number = " << i << "\n" << "\n";
    return 0;
}
else if (i < x)
{
    cout << "Less than it!    Increase your guess = ";
    cin >> i;
}
else
    cout << "More than it!    Decrease your guess = ";
    cin >> i;
}
}
return 0;
}