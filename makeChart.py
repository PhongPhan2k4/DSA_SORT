import numpy as np
import matplotlib.pyplot as plt

testcase = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '10']

#Lấy dữ liệu
QuickSort = np.loadtxt('time_QuickSort.txt')
MergeSort = np.loadtxt('time_MergeSort.txt')
HeapSort = np.loadtxt('time_HeapSort.txt')
SortCpp = np.loadtxt('time_SortCpp.txt')

# Vẽ biểu đồ
plt.title('Time Chart')
plt.ylabel('Time(Second)')
plt.xlabel('Testcase')
plt.ylim(0, 0.4)
plt.plot(testcase, QuickSort, '-r', label = "Quick Sort")
plt.plot(testcase, MergeSort, '-b', label = "Merge Sort")
plt.plot(testcase, HeapSort, '-g', label = "Heap Sort")
plt.plot(testcase, SortCpp, '-y', label = "Sort Cpp")
plt.legend(loc = "best")
plt.show()