#include<iostream>
using namespace std;

 int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {

    if (arr[i] == target) {
    return i;
    }
    }
    return -1;
}
int main() {
    int arr1[] = {34, 7, 23, 32, 5, 62};
    int target1 = 23;
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    int result1 = linearSearch(arr1, size1, target1);
    if (result1 != -1)
    cout << "Array: [34, 7, 23, 32, 5, 62], Target: " << target1 << " Output: Index " << result1 << endl;
    else
    cout << "Array: [34, 7, 23, 32, 5, 62], Target: " << target1 << " Output: Not Found" << endl;

    int arr2[] = {1, 2, 3, 4, 5};
    int target2 = 10;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int result2 = linearSearch(arr2, size2, target2);
    if (result2 != -1)
    cout << "Array: [1, 2, 3, 4, 5], Target: " << target2 << " Output: Index " << result2 << endl;
    else
    cout << "Array: [1, 2, 3, 4, 5], Target: " << target2 << " Output: Not Found " << endl;
    

    return 0;
}
