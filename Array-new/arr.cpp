#include <iostream>
#include <cstdlib>

using namespace std;

int minFunction(int[], int);  //------------------> اعلان تابع با پارامترهای نام آرایه و طول آن

int main()
{
    const int k=4;
    int array[k];
    system("cls");
    int x = minFunction(array, k);

    cout << "\nMinimum of array elements is " << x << endl;  //------> فراخوانی تابع
    cin.get();
    return 0;
}

int minFunction(int arr[], int length)  //------> تعریف تابع با تمامی متعلقات
{
    for(int count = 0 ; count < length ; count++)
    {
        cout << "Enter number [" << count+1 << "] :";
        cin >> arr[count];
    }

    int minNum = arr[0];

    for(int count = 1 ; count < length ; count++)
    {
        if (arr[count] < minNum)
            minNum = arr[count];
    }

    return minNum;
}