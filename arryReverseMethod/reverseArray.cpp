#include <iostream>
using namespace std;

void reversedArray(int arr[], int size){
    // Create a new array to store the reversed elements
    int reversedArr[size];

    // Iterate through the original array
    for(int i = 0; i < size; i++){
        // Assign elements from the original array to the reversed array in reverse order
        reversedArr[i] = arr[size - i - 1];
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for(int i = 0; i < size; i++){
        cout << reversedArr[i] << " ";
    }
}


int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // Call the function to reverse the array
    reversedArray(arr,size);
    return 0;
}
