#include<stdio.h>
using namespace std;
int main(){
	int n=0;
	int x=0;
	printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			count++;
		}
	}
	printf("%d\n",count);
}
