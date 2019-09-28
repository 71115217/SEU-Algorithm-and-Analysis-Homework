#include<iostream>
using namespace std;
int a[3] = { 4,3,2 };
int* b = new int[3];
void countInverseSeqPoints(int left, int right);
int answer = 0;
//int main() {
//	for (int i = 0; i < 3; i++) {
//		b[i] = 0;
//	}
//	countInverseSeqPoints(0, 2);
//	cout << answer;
//	return 0;
//}


void countInverseSeqPoints(int left, int right) {
	if (left == right) {
		return;
	}
	int mid = (left + right) / 2;
	countInverseSeqPoints(left, mid);
	countInverseSeqPoints(mid + 1, right);

	int i = left, j = mid + 1, t = left;
	while (i <= mid && j <= right) {
		if (a[i] <= a[j]) {
			b[t++] = a[i++];
		}
		else {
			b[t++] = a[j++];
			answer+=mid-i+1;
		}
	}

	while (i <= mid) {
		b[t++] = a[i++];
	}
	while (j <= right) {
		b[t++] = a[j++];
	}

	for (int k = left; k <= right; k++) {
		a[k] = b[k];
	}
}