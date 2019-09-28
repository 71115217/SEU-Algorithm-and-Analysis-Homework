#include<iostream>
using namespace std;

int findMaxValue(int*arr,int left,int right);

int findMiddleValue(int* arr, int left, int right, int middle);

//int main() {
//	int a[5] = { 1,-2,5,8,-6 };
//	int value = findMaxValue(a, 0, 4);
//	cout << value;
//	return 0;
//}

int findMaxValue(int *arr, int left, int right) {
	if (left == right) {
		return arr[left];
	}
	else {
		int middle = (left + right) / 2;
		int leftMax = findMaxValue(arr, left, middle);
		int rightMax = findMaxValue(arr, middle+1, right);
		int middleMax = findMiddleValue(arr, left, right, middle);
		if (leftMax >= rightMax && leftMax >= middleMax) {
			return leftMax;
		}
		else if (rightMax >= leftMax && rightMax >= middleMax) {
			return rightMax;
		}
		else {
			return middleMax;
		}
	}
}

int findMiddleValue(int* arr, int left, int right, int middle) {
	int sum = 0;
	int leftMaxSum = 0;
	int rightMaxSum = 0;
	for (int i = middle; i >= left; i--) {
		sum += arr[i];
		if (sum >= leftMaxSum) {
			leftMaxSum = sum;
		}
	}

	sum = 0;
	for (int i = middle; i < right;i++) {
		sum += arr[i];
		if (sum >= leftMaxSum) {
			rightMaxSum = sum;
		}
	}
	return leftMaxSum + rightMaxSum;

}

int DynamicPrograming(int* arr, int size) {
	int curMaxSum = 0;
	int maxSum = 0;
	for (int i = 0; i < size; i++) {
		curMaxSum += arr[i];
		if (curMaxSum < arr[i]) {
			curMaxSum = arr[i];
		}
		if (curMaxSum > maxSum) {
			maxSum = curMaxSum;
		}
	}
	return curMaxSum;
}