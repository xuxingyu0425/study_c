#include<stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
vector<int>split(int splitMoney[], int totalMoney, int num) {
	vector<int> result;
	while (totalMoney != 0) {
		for (int i = 0; i < num; i++) {
			if (totalMoney % splitMoney[i] == 0) {
				result.push_back(splitMoney[i]);
				totalMoney -= splitMoney[i];
				break;
			}
		}
	}
	return result;
}
void bubble(int num[], int n) {
	bool jud = true;
	for (int i = n; i > 0; i--) {
		jud = true;
		for (int j = 0; j < n - 1; j++) {
			if (num[j] < num[j + 1]) {
				int temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
				jud = false;
			}
		}
		if (jud)break;
	}
}
int main() {
	int totalMoney, num;
	cout << "Please input the total money: ";
	cin >> totalMoney;
	cout << "Please input the num of split money";
	cin >> num;
	cout << "Please input the split money: ";
	int splitMoney[4];
	for (int i = 0; i < num; i++) {
		cin >> splitMoney[i];
	}
	bubble(splitMoney, num);
	vector<int> sum = split(splitMoney, totalMoney, num);
	//使用迭代语句进行获取
	cout << "the solution is: ";
	for (vector<int>::iterator iter = sum.begin(); iter != sum.end(); iter++) {
		cout << *iter << " ";
	}
	system("pause");
	return 0;
}
 