#include <iostream>
#include <vector>

using namespace std;

void swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void SortVector(vector <int>& myVec) {
	int n = myVec.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (myVec[j] > myVec[j + 1]) {
				swap(&myVec[j], &myVec[j + 1]);
			}
		}
	}
}

void printArray(vector<int>& myVec, int size) {
	for (int i = 0; i < size; i++)
		cout << myVec[i] << " ";
	cout << endl;
}

int main()
{
	int n;
	vector <int> myVec;
	cout << "Enter a number, where the first number will \n indicate the length of the array of to be sorted,\n every subseqent number will be sorted in ascending order.";
	cout << endl;
	cin >> n;
	for (int j = 0; j < n; ++j) {
		int num;
		cin >> num;
		myVec.push_back(num);
	}
	SortVector(myVec);
	printArray(myVec, n);
	return 0;
}
