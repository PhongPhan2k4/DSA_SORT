#include <bits/stdc++.h>
#include "QuickSort.cpp"
#include "MergeSort.cpp"
#include "HeapSort.cpp"
using namespace std;

int main() {
    const int MAX = 1000000;
    // Mở file ghi dữ liệu
    //ofstream fout("time_QuickSort.txt");
    //ofstream fout("time_MergeSort.txt");
    //ofstream fout("time_HeapSort.txt");
    ofstream fout("time_SortCpp.txt");

    string testcase[10] = {"test1.txt", "test2.txt", "test3.txt", "test4.txt", "test5.txt", "test6.txt", "test7.txt", "test8.txt", "test9.txt", "test10.txt"};
    for (int k = 0; k < 10; k++) {
        double *num = new double[MAX];
        ifstream fin(testcase[k]); // Mở file để lấy dữ liệu vào

        // Lấy dữ lệu
        for (int i = 0; i < MAX; i++) fin >> num[i];

        clock_t start, end; // khai báo biến thời gian;
        double time;
        
        start = clock(); // thời gian trước khi thực hiện thuật toán

        //quickSort(num, 0, MAX - 1);
        //mergeSort(num, 0, MAX - 1);
        //heapSort(num, MAX);
        sort(num, num + MAX);
    
        end = clock(); // thời gian sau khi thực hiện thuật toán

        time = double(end - start) / (double)CLOCKS_PER_SEC; // tính thời gian thực hiện thuật toán

        fout << time << '\n'; // ghi nhận thời gian
        cout << time << '\n';

        //đóng file
        fin.close(); 

        delete []num;
    }

    fout.close();

    return 0;
}