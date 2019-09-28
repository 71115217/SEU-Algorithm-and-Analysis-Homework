#include<iostream>
#include<queue>
#include<vector>
using namespace std;



//int main() {
//	int inputArray[8][3] = { {1,5,11},{2,7,6},{3,9,13},{12,16,7},{14,25,3},{19,22,18},{23,29,13},{24,28,4} };
//	vector<int*> result;
//	int a[16][2];
//	int b[8][2];
//	
//
//	for (int i = 0; i < 16; i+=2) {
//		a[i][0] = inputArray[i][0];
//		a[i][1] = -inputArray[i][2];
//		a[i+1][0] = inputArray[i][1];
//		a[i+1][1] = inputArray[i][2];
//	}
//	
//	for (int i = 0; i < 15; i++) {
//		for (int j = i + 1; j < 16; j++) {
//			if (a[i][0] > a[j][0]) {
//				int temp[2] = { a[i][0],a[i][1] };
//				a[i][0] = temp[0];
//				a[i][1] = temp[1];
//				a[i][0] = a[j][0];
//				a[i][1] = a[j][1];
//				a[j][0] = temp[0];
//				a[j][1] = temp[1];
//			}
//			else if (a[i][0] == a[j][0]) {
//				if (a[i][1] > a[j][1]) {
//					int temp[2] = { a[i][0],a[i][1] };
//					a[i][0] = temp[0];
//					a[i][1] = temp[1];
//					a[i][0] = a[j][0];
//					a[i][1] = a[j][1];
//					a[j][0] = temp[0];
//					a[j][1] = temp[1];
//				}
//			}
//		}
//	}
//
//	priority_queue<int> pq;
//	pq.push(0);
//	pq.top();
//	int preHeight = 0;
//
//	for (int i = 0; i < 16; i++) {
//		if (a[i][1] < 0) {
//			pq.push(-a[0][1]);
//		}
//		else {
//			pq.pop();
//		}
//
//		if (pq.empty()) {
//			break;
//		}
//		int cur_max_height = pq.top();
//
//		if (cur_max_height != preHeight) {
//			int temp[2] = {a[i][0],a[i][1]};
//			result.push_back(temp);
//			preHeight = cur_max_height;
//		}
//	}
//
//	for (int i = 0; i < result.size(); i++) {
//		cout << result[i] << endl;
//	}
//	return 0;
//
//}