#include <iostream>
#include <cstdlib>

using namespace std;

void fibo(long);      

int main()
{
    long a, x = 1;

    cout << "How many numbers in fibonachi ? = " ;
    cin >> a;
    fibo(a);

    return 0;
}

void fibo(long a)       
{
    int count = 1;
    int x = 1 , y = 1 , w;
    while (count < a)
    {
        if(count < 2) {
            cout << x << "\t";
            count++;
        }
        else {
            w = x + y;
            cout << x << "\t";
            y = x;
            x = w;
            count++;
        }
    }
}