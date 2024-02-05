#include<bits/stdc++.h>
using namespace std;

int partitionArray(int input[], int start, int end) {
	int pivot = input[start];
	int i = start;
	int j = end;
	while (i < j) {
		while (input[i] <= pivot && i <= end-1) {
			i++;
		}
		while (input[j] > pivot && j >= start+1) {
			j--;
		}
		if (i < j) {
			swap(input[i], input[j]);
		}
	}
	swap(input[start], input[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
	if (start < end) {
		int pIndex = partitionArray(input, start, end);
		quickSort(input, start, pIndex-1);
		quickSort(input, pIndex+1, end);
	}
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;  i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);

    for (auto it : arr) {
        cout << it << " "; 
    }
}