#include <iostream>
#include <cstdlib>

using namespace std;

/*inline float sum (float f1, float f2)
{
    float result = f1 + f2;
    return result;
}
*/
float sum (float, float);

int main()
{
    system("cls");
    float f1, f2;
    cout << "Enter the first num = ";
    cin >> f1;
    
    cout << "Enter the second num = ";
    cin >> f2;
    cout << "The sum of two numbers is = " << sum (f1 , f2);
    cin.ignore();
    cin.get();

    return 0;
}

float sum (float f1, float f2)
{
    float result = f1 + f2;
    return result;
}