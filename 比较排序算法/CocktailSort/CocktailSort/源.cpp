#include "stdio.h"
#include "stdlib.h"

// ���� -------------- �ڲ��Ƚ�����
// ���ݽṹ ---------- ����
// ���ʱ�临�Ӷ� ---- O(n^2)
// ����ʱ�临�Ӷ� ---- ���������һ��ʼ�Ѿ��󲿷�������Ļ�,��ӽ�O(n)
// ƽ��ʱ�临�Ӷ� ---- O(n^2)
// ���踨���ռ� ------ O(1)
// �ȶ��� ------------ �ȶ�
//ð�����������
//������(2,3,4,5,1)Ϊ������β������ֻ��Ҫ����һ�����оͿ����������
//�����ʹ��ð����������Ҫ�ĴΡ��������������е�״̬�£���β��������ð�������Ч�ʶ��ܲ��


void swap(int A[], int i, int j) {
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void CocktailSort(int A[], int n) {
	int left = 0;							//��ʼ���߽�
	int right = n - 1;
	while (left < right) 
	{
		for (int i = left; i < right; i++)	//ǰ���֣������Ԫ�ط��ں���
		{
			if (A[i] > A[i + 1]) 
			{
				swap(A, i, i + 1);
			}
		}
		right--;
		for (int i = right; i > left; i--)	//�����,����СԪ�طŵ�ǰ��
		{
			if (A[i-1] > A[i]) 
			{
				swap(A, i - 1, i);
			}
		}
		left++;
	}
}

int main()
{
	int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };   // ��С������ð������
	int n = sizeof(A) / sizeof(int);
	CocktailSort(A, n);
	printf("��β����������");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

