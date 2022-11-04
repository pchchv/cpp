#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx])
            {
                min_idx = i;
            }
        }

        swap(&array[min_idx], &array[step]);
    }
}

int main()
{
    int n, i, arr[50];

    cout<<"Enter the Size (max. 50): ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++) {
        cin>>arr[i];
    }

    selectionSort(arr, n);

    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
