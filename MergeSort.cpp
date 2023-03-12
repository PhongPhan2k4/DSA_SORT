#include <bits/stdc++.h>
using namespace std;

void merge(double num[], int l, int m, int r) {
    double *temp = new double[r - l + 1];
    int i = l, j = m + 1, k = 0;
    while (i <= m && j <= r) {
        if (num[i] > num[j]) temp[k++] = num[j++];
        else temp[k++] = num[i++];
    }
    while (i <= m) temp[k++] = num[i++];
    while (j <= r) temp[k++] = num[j++];
    for (int x = l; x <= r; x++) num[x] = temp[x - l];
    delete []temp;
}

void mergeSort(double num[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(num, l , m);
    mergeSort(num, m + 1, r);
    merge(num, l, m, r);
}


