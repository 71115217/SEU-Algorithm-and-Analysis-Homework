#include<iostream>
using namespace std;

void circulatePos(int* arr, int left, int right);
int res;
//int main() {
//	int a[7] = { 4,5,6,7,1,2,3 };
//	circulatePos(a, 0, 6);
//	cout << res+1 << endl;
//	return 0;
//}


void circulatePos(int* arr, int left, int right) {
	if (right == left) {
		return;
	}
	if ((right - left) == 1) {
		if (arr[left] > arr[right]) {
			res = left;
		}
	}
	else {
		int middle = (left + right) / 2;
		if (arr[middle] > arr[middle + 1]) {
			res = middle;
		}
		circulatePos(arr, left, middle);
		circulatePos(arr, middle + 1, right);
	}
}