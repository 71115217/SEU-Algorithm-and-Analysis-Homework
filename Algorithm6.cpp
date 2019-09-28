#include<iostream>
using namespace std;
bool  judgeCombine(int x, int* a, int size);
bool binarySearch(int* a, int left, int right, int s, int noEqualNum);

int main() {
	int x = 8;
	int a[5] = { 1,2,3,4,5 };
	bool res = judgeCombine(x, a, 5);
	cout << res << endl;
	return 0;
}

bool  judgeCombine(int x, int *a, int size) {
	for (int i = 0; i < size; i++) {
		int s = x - a[i];
		if (binarySearch(a, 0, size-1, s,a[i]) == true) {
			return true;
		}
	}
	return false;
}

bool binarySearch(int* a, int left,int right, int s, int noEqualNum) {
	if (left == right) {
		if (s == a[left] && s != noEqualNum)
			return true;
		else
			return false;
	}
	else {
		int middle = (left + right) / 2;
		bool judge1 = binarySearch(a, left, middle, s, noEqualNum);
		bool judge2 = binarySearch(a, middle + 1, right, s, noEqualNum);
		return judge1 || judge2;
	}
	return false;
}