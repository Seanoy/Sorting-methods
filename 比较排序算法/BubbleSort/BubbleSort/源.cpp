#include "stdio.h"
#include "stdlib.h"
// 分类 -------------- 内部比较排序
// 数据结构 ---------- 数组
// 最差时间复杂度 ---- O(n^2)
// 最优时间复杂度 ---- 如果能在内部循环第一次运行时,使用一个旗标来表示有无需要交换的可能,可以把最优时间复杂度降低到O(n)
// 平均时间复杂度 ---- O(n^2)
// 所需辅助空间 ------ O(1)
// 稳定性 ------------ 稳定
void swap(int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void BubbleSort(int A[], int n)
{
	for (int j = 0; j < n - 1; j++)
	{
		for (int i = 0; i < n - 1 - j; i++)
		{
			if (A[i] > A[i + 1])	// 从小到大冒泡排序
				swap(A, i, i + 1);
		}
	}
}

int main(int argc, char *argv[]) {
	int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
	int n = sizeof(A) / sizeof(int);
	BubbleSort(A, n);
	printf("冒泡排序结果：");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;

}