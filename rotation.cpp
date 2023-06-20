#include <iostream>
using namespace std;

int countRotations(int arr[], int n){


int min = arr[0], min_index = 0;
    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }

    cout << "Rotation array:  ";
    cout << countRotations(arr, n);
    cout << endl;

    return 0;
}