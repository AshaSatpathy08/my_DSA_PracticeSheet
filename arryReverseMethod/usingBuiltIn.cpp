#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int array[] = {1,2,3,4,5,6};
    int length = sizeof(array)/ sizeof(array[0]);

    reverse(array, array+length);

    // printing reversearray
    for(int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}