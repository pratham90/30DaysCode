
#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n){
    int i, key, j;
	for (i = 1; i < n; i++) {
	key = arr[i];
	j = i - 1;
	while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
	}
	arr[j + 1] = key;
	}
}
void printArray(int arr[], int n){
    int i;
	for (i = 0; i < n; i++)
	printf(" %d \t", arr[i]);
	
}
int binarySearch(int arr[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    
    if (arr[mid] > x)
      return binarySearch(arr, x, low, mid - 1);

  
    return binarySearch(arr, x, mid + 1, high);
  }

  return -1;
}
int main(){
	int arr[100];
	int n;
     printf("enter no.of elements in array \n");
    scanf("%d",&n);
    printf("Enter elements of array \n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("elements of array are: \t");
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
	insertionSort(arr, n);
    	printf(" \n sorted array: \t");
	printArray(arr, n);
    int x ;
    printf(" \n enter number to find \n");
    scanf("%d",&x);
  int result = binarySearch(arr, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);

	return 0;
}
