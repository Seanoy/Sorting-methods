#include "stdio.h"
#include "stdlib.h"

// ���� ------------ �ڲ��Ƚ�����
// ���ݽṹ --------- ����
// ���ʱ�临�Ӷ� ---- ���ݲ������еĲ�ͬ����ͬ����֪��õ�ΪO(n(logn)^2)
// ����ʱ�临�Ӷ� ---- O(n)
// ƽ��ʱ�临�Ӷ� ---- ���ݲ������еĲ�ͬ����ͬ��
// ���踨���ռ� ------ O(1)
// �ȶ��� ----------- ���ȶ�
// �����֮���Ƕ�η�������

void ShellSort(int A[], int n)
{
	int h = 0;	
	int i, j, k;
	int get;							//�������
	while (h < n / 3) 					//���ɳ�ʼ����
		h = 3 * h + 1;

	for (; h >= 1; h = (h - 1) / 3)		// ������һ�εݼ�����
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
	int A[] = { 5, 15, 14, 2, 9, 4, 13 ,11, 7, 6, 1, 3, 8, 12 };// ��С����ϣ������
	int n = sizeof(A) / sizeof(int);
	ShellSort(A, n);
	printf("ϣ����������");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}