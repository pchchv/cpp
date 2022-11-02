#include<iostream>

using namespace std;

int bubble_sort(int n, int *arr)
{
    int i, j, temp;
    for(i=0; i<(n-1); i++) {
        for(j=0; j<(n-i-1); j++) {
            if(arr[j]>arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return 0;
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
    bubble_sort(n, arr);
    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
