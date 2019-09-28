#include<iostream>
using namespace std;

double findMediumNumber(double a[], double b[], int a_low, int a_high, int b_low, int b_high);

//int main() {
//	double a[5] = { 1,3,4,5,7 };
//	double b[5] = { 2,4,8,9,11 };
//
//
//	double num = findMediumNumber(a, b, 0, 4, 0, 4);
//	cout << num << endl;
//	return num;
//}


double findMediumNumber(double a[], double b[], int a_low, int a_high, int b_low, int b_high) {
	
		int medium_a,medium_b;
		medium_a = (a_low + a_high) / 2;
		medium_b = (b_low + b_high) / 2;
		if ((a_high - a_low) == 1) {
			double medium_1,medium_2;
			if (a[a_low] > b[b_low]) {
				medium_1 = a[a_low];
			}else {
				medium_1 = b[b_low];
			}

			if (a[a_high] > b[b_high]) {
				medium_2 = b[b_high];
			}
			else {
				medium_2 = a[a_high];
			}

			return (medium_1 + medium_2) / 2;
		}
		if (a[medium_a] > b[medium_b]) {
			if ((a_high- a_low + 1) % 2 == 0) {
				a_high = medium_a+1;
			}
			else {
				a_high = medium_a;
				
			}
			if ((b_high - b_low+1) % 2 == 0) {
				b_low = medium_b - 1;
			}
			else {
				b_low = medium_b;
			}
		}
		else if (a[medium_a] < b[medium_b]) {
			if ((a_high - a_low + 1) % 2 == 0) {
				a_low = medium_a-1;
			}
			else {
				a_low = medium_a;

			}
			if ((b_high - b_low+1) % 2 == 0) {
				b_high = medium_b+1;
			}
			else {
				b_high = medium_b;
			}
		}
		else {
			return (a[medium_a]+b[medium_b])/2;
		}
		return findMediumNumber(a, b, a_low, a_high, b_low, b_high);
}