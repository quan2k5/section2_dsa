#include<stdio.h>
using namespace std;
int main(){
	int n=0;
	printf("Nhap n: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	int left=0;
	int right=n-1;
	while(left<right){
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left++;
		right--;
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 
