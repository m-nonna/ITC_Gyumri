#include <iostream>
using namespace std;
    void swap (int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;


    }
    void bubbleSort(int arr[],int n){
     int i, j;
     for(i = 0; i<n-1; i++)
         
      for (j = 0; j< n-i-1; j++)
        if(arr[j] > arr[j+1])
        swap(&arr[j], &arr[j+1]);


    }

    void printArr(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout << endl;


    }


int main(){
    int arr[] = {64, 34, 25, 12, 22,11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArr(arr, n);


return 0;
}
