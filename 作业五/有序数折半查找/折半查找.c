#include<stdio.h>

int main() {
	int input=0;
	int arr[] = {5,6,7,8,9,10,11,12,13,14,15};
	int num=0;
	num = sizeof(arr) / sizeof(arr[0]);//�������
	int left=0;//���±�
	int right= num-1;//���±�
	int mid =0;//�м��±�
	scanf_s("%d", &input);
	
	while(left<=right) {
		mid = (right + left) / 2;
		
		if (input < arr[mid]) {
			right = mid - 1;
		}
		else if (input > arr[mid]) {
			left = mid + 1;
		}
		else { 
			mid += 1;
			printf("��������ǵ�%d����\n", mid); 
		break;}
		

	}
	if (left > right)
		printf("�����ֲ��������У�");

	return 0;
}