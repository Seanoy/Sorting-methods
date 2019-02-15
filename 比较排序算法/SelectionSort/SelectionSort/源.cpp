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
	for (int i = 0; i < n - 1; i++) // iΪ���������е�ĩβ
	{
		int min = i;				// ��ס��Сֵ��λ��
		for (int j = i + 1; j < n; j++) 
		{
			if (A[j] < A[min])		// �ҳ�δ������������Сֵ
			{
				min = j;			//��ʱA[j]Ϊmin
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
	int A[] = { 8, 5, 2, 6, 9, 3, 1, 4, 0, 7 }; // ��С����ѡ������
	int n = sizeof(A) / sizeof(int);
	SelectionSort(A, n);
	printf("ѡ����������");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

