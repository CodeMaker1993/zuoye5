#include<stdio.h>

int main() {
	int input=0;
	int arr[] = {5,6,7,8,9,10,11,12,13,14,15};
	int num=0;
	num = sizeof(arr) / sizeof(arr[0]);//数组个数
	int left=0;//左下标
	int right= num-1;//右下标
	int mid =0;//中间下标
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
			printf("这个数字是第%d个数\n", mid); 
		break;}
		

	}
	if (left > right)
		printf("此数字不在数组中！");

	return 0;
}