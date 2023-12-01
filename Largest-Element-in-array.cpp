#include <iostream>
 namespace std{;
 };
int findlargest (int arr[], int n){
	int largest = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] > largest){
			largest = arr[i];
		}
	}
	return largest;
}
int main() {
	int arr[] = {10, 25, 12, 34, 59};
	int n = sizeof(arr) / sizeof (arr[0]);
	
	int largestElement = findlargest(arr , n);
	std::cout << "the largest element in the array is: "<< largestElement << std::endl;
	return 0;
}
