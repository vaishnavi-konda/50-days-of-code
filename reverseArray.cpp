#include <iostream>

using namespace std;

void reverseArray(int *array, int size);
void swap(int *first, int *last);
void printArray(int *array, int size);

int main()
{
    int size = 0;
    cout << "Enter number of elements:";
    cin >> size;
    int *array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "\nElement " << i + 1 << ": ";
        cin >> array[i];
    }
    
    printArray(array, size);
    reverseArray(array, size);
    printArray(array, size);
    return 0;
}

void reverseArray(int *array, int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        swap(&array[i], &array[j]);
        i++;
        j--;
    }   
    return;
}

void swap(int *first, int *last)
{
    int temp = *first;
    *first = *last;
    *last = temp;

    return;
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
    return;
}