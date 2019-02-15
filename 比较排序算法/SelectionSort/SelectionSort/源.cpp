#include "stdio.h"
#include "stdlib.h"

void swap(int A[], int i, int j) 
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void SelectionSort(int A[], int n) 
{
	for (int i = 0; i < n - 1; i++) // i为已排序序列的末尾
	{
		int min = i;				// 记住最小值的位置
		for (int j = i + 1; j < n; j++) 
		{
			if (A[j] < A[min])		// 找出未排序序列中最小值
			{
				min = j;			//此时A[j]为min
			}
		}
		if(min!=i)
		{
			swap(A, min, i);
		}
	}
}


int main()
{
	int A[] = { 8, 5, 2, 6, 9, 3, 1, 4, 0, 7 }; // 从小到大选择排序
	int n = sizeof(A) / sizeof(int);
	SelectionSort(A, n);
	printf("选择排序结果：");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

