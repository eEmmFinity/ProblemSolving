#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
bool selectionSort(int array[], int size)
{

    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            if (array[i] < array[min_idx])
                min_idx = i;
        }

        // put min at the correct position
        if (array[min_idx] % 2 == 0 && array[step] % 2 == 0 || array[min_idx] % 2 != 0 && array[step] % 2 != 0)
        {
            swap(&array[min_idx], &array[step]);
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i];
        }

        selectionSort(arr, n);

        if (selectionSort(arr, n) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}