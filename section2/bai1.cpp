#include<stdio.h>
using namespace std;
int main(){
	int n;
	printf("Nhap n: ");
    scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	} 
	printf("%d\n",max);
} 
