#include "sort.h"

int main(int argc, char **argv){
    int arr[] = {50, 12 , 15, 78, 82, 63, 28, 35};
    int arrSize = sizeof(arr)/sizeof(int);
    outArr(arr, arrSize);
    //bubble(arr, arrSize);
    //insertSort(arr, arrSize);
    //selectSort(arr, arrSize);
    quickSort(arr, 0, arrSize - 1);
    outArr(arr, arrSize);
    return 0;
}
