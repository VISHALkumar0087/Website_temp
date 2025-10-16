#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    cout << "Initial Array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){      
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << endl;
    cout << "Sorted Array is: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
