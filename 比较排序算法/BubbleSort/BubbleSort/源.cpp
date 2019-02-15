#include "stdio.h"
#include "stdlib.h"
// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- O(n^2)
// ����ʱ�临�Ӷ� ---- ��������ڲ�ѭ����һ������ʱ,ʹ��һ���������ʾ������Ҫ�����Ŀ���,���԰�����ʱ�临�ӶȽ��͵�O(n)
// ƽ��ʱ�临�Ӷ� ---- O(n^2)
// ���踨���ռ� ------ O(1)
// �ȶ��� ------------ �ȶ�
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
			if (A[i] > A[i + 1])	// ��С����ð������
				swap(A, i, i + 1);
		}
	}
}

int main(int argc, char *argv[]) {
	int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
	int n = sizeof(A) / sizeof(int);
	BubbleSort(A, n);
	printf("ð����������");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;

}