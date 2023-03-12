#include <bits/stdc++.h>
using namespace std;

void quickSort(double num[], int l, int r){
	double p = num[(l+r)/2];
	int i = l, j = r;
	while (i < j){
		while (num[i] < p && i <= r){
			i++;
		}
		while (num[j] > p && j >= l){
			j--;
		}
		if (i <= j){
			swap(num[i], num[j]);
			i++;
			j--;
		}
	}
	if (i < r){
		quickSort(num, i, r);
	}
	if (l < j){
		quickSort(num, l, j);
	}
}

