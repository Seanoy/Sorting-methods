#include "stdio.h"
#include "stdlib.h"

// 分类 ------------ 内部比较排序
// 数据结构 --------- 数组
// 最差时间复杂度 ---- 根据步长序列的不同而不同。已知最好的为O(n(logn)^2)
// 最优时间复杂度 ---- O(n)
// 平均时间复杂度 ---- 根据步长序列的不同而不同。
// 所需辅助空间 ------ O(1)
// 稳定性 ----------- 不稳定
// 简而言之就是多次分组排序

void ShellSort(int A[], int n)
{
	int h = 0;	
	int i, j, k;
	int get;							//抽出的牌
	while (h < n / 3) 					//生成初始增量
		h = 3 * h + 1;

	for (; h >= 1; h = (h - 1) / 3)		// 计算下一次递减增量
	{
		for (i = h; i < n; i++)
		{
			get = A[i];
			for ( j = i - h; j >= 0 && A[j] > get; j = j - h)
				A[j + h] = A[j];
			A[j + h] = get;


			for (k = 0; k < n; k++)
			{
				printf("%d ", A[k]);
			}
			printf("\n");
		}	
	}
}


int main()
{
	int A[] = { 5, 15, 14, 2, 9, 4, 13 ,11, 7, 6, 1, 3, 8, 12 };// 从小到大希尔排序
	int n = sizeof(A) / sizeof(int);
	ShellSort(A, n);
	printf("希尔排序结果：");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}