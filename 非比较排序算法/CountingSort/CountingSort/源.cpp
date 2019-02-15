#include <iostream>
using namespace std;

// 分类 ------------ 内部非比较排序
// 数据结构 --------- 数组
// 最差时间复杂度 ---- O(n + k)
// 最优时间复杂度 ---- O(n + k)
// 平均时间复杂度 ---- O(n + k)
// 所需辅助空间 ------ O(n + k)
// 稳定性 ----------- 稳定

const int k = 100;			//基数为100，排序[0,99]内的整数
int C[k] = {0};				//创建并初始化计数数组

void CountingSort(int A[], int n) {
	int i;
	for (i = 0; i < n; i++) 
		C[A[i]]++;// 使C[i]保存着等于i的元素个数
	for (i = 1; i < k; i++)
		C[i] += C[i - 1];// 使C[i]保存着小于等于i的元素个数，排序后元素i就放在第C[i]个输出位置上
	int *B = (int*)malloc((n) * sizeof(int));// 分配临时空间,长度为n，用来暂存中间数据
	for (i = n - 1; i >= 0; i--)
		B[--C[A[i]]] = A[i];	// 从后向前扫描保证计数排序的稳定性(重复元素相对次序不变)
	for (i = 0; i < n; i++)		// 把临时空间B中的数据拷贝回A
		A[i] = B[i];
	free(B);    // 释放临时空间 
}

int main()
{
	int A[] = { 15, 22, 19, 46, 27, 73, 1, 19, 8 };  // 针对计数排序设计的输入，每一个元素都在[0,100]上且有重复元素
	int n = sizeof(A) / sizeof(int);
	CountingSort(A, n);
	printf("计数排序结果：");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}