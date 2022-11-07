#include <iostream>
using namespace std;

long int* fibonacci(int size)
{
    long int* arr = new long int[size];
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < size; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr;
}

int main()
{
    int n;
    long int* arr;
    cout << "Enter the number of terms: ";
    cin >> n;

    arr = fibonacci(n);

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        cout << "\n";
    }
    return 0;
}
