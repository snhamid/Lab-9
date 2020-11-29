#include <iostream>
#include <stdio.h>
using namespace std;

template <class T>
T maxfunc(T array[], int size)
{
    T maxVal = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > maxVal)
        {
            maxVal = array[i];
        }
    }
    return maxVal;
}

int main()
{
    //Finding the max values of the array (Question 1)
    int firstArr[] = {4, 1, 13, 3, 2};
    double secondArr[] = {1.1, 4.1, 8.1, 5.2, 2.3};
    char thirdArr[] = {'2', 'A', 'B', 'a', 'c', 'd', 'E', 'f'};

    int intMax;
    double doubleMax;
    char charMax;

    intMax = maxfunc(firstArr, 5);
    doubleMax = maxfunc(secondArr, 5);
    charMax = maxfunc(thirdArr, 6);

    cout << "Max value of first array: " << intMax << "\n";
    cout << "Max value of second array: " << doubleMax << "\n";
    cout << "Max value of third array: " << charMax << "\n";

    return 0;
}
