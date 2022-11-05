#include <iostream>
using namespace std;

void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
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

    insertionSort(arr, n);

    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
