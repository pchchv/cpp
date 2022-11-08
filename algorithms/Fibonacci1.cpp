#include <iostream>
using namespace std;

long int fibonacci(int n)
{
    long int item1 = 0;
    long int item2 = 1;
    long int temp;

    if (n == 0) {
        return item1;
    }
    if (n == 1) {
        return item2;
    }

    for (int i = 2; i <n; i++) {
        temp = item1;
        item1 = item2;
        item2 += temp;
    }
    return item2;
}

int main()
{
    int n;
    cout << "Enter the number of the sequence item: ";
    cin >> n;

    long int item = fibonacci(n);

    cout << item;
    return 0;
}
