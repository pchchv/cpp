#include <iostream>
using namespace std;
#define RANGE 255

void countSort(int array[], int size, int range) {
        int output_array[size];
	int count_array[range];

	for(int i=0;i<range;i++)
		count_array[i]=0;

	for(int i=0;i<size;i++)
		++count_array[array[i]];

	for(int i=1;i<range;i++)
		count_array[i]=count_array[i]+count_array[i-1];

	for(int i=0;i<size;i++)
		output_array[--count_array[array[i]]] = array[i];

	for(int i=0;i<size;i++)
		array[i]=output_array[i];
}

int main()
{
    int n, i, arr[50];
    int r = 10;
    cout<<"Enter the Size (max. 50): ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++) {
        cin>>arr[i];
    }

    countSort(arr, n, r);

    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
