#include <bits/stdc++.h>
using namespace std;

bool cmp(double a, double b) {
    return a > b;
}

int main()
{
    const int MAX = 1000000;
    srand(time(NULL));
    string testcase[10] = {"test1.txt", "test2.txt", "test3.txt", "test4.txt", "test5.txt", "test6.txt", "test7.txt", "test8.txt", "test9.txt", "test10.txt"};
    for (int i = 0; i < 10; i++) {
        ofstream fout(testcase[i]);
        double *num = new double[MAX];
        for (int i = 0; i < MAX; i++) num[i] = rand() / (RAND_MAX + 1.0) + (double)rand() / (RAND_MAX / 1000);
        if (i == 0) sort(num, num + MAX);
        if (i == 1) sort(num, num + MAX, cmp);
        for (int i = 0; i < MAX; i++) fout << num[i] << " ";
        fout.close();
        delete []num;
    }
    return 0;
}