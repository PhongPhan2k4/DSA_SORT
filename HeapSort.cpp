#include <bits/stdc++.h>
using namespace std;

void heapify(double num[], int n, int i) 
{ 
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
    if (l < n && num[l] > num[largest]) largest = l;
    if (r < n && num[r] > num[largest]) largest = r; 
    if (largest != i) 
    { 
        swap(num[i], num[largest]); 
        heapify(num, n, largest); 
    } 
} 
void heapSort(double num[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(num, n, i); 
    for (int i = n - 1; i > 0; i--) 
    { 
        swap(num[0], num[i]); 
        heapify(num, i, 0); 
    } 
}
