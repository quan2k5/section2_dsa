#include<stdio.h>
using namespace std;
int main(){
	int arr[4]={2,3,4,5};
	int left=0;
	int nums=5;
	int right=4-1;
	int check=0;
	while(left<right){
		if(arr[left]+arr[right]>nums){
			right--;
		}else if(arr[left]+arr[right]<nums){
			left++;
		}else{
			check=1;
			break;
		}
	}
	if(check==1){
		printf("%d %d",arr[left],arr[right]);
	}else{
		printf("khong co gia tri tuong ung");
	}
}
