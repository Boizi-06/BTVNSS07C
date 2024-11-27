#include<stdio.h>
int main(){
	int n;
	int i;
	
	int number[100];
	printf("hay nhap so phan tu cua mang\n");
	scanf("%d",&n);
	printf("bay gio hay nhap cac phan tu cua mang \n");
	for(i=0;i<n;i++){
		printf("hay nhap phan tu thu %d :",i+1);
		scanf("%d",&number[i]);
		
	}
	printf("cac phan tu trong mang lan luot la \n");
	for(i=0;i<n;i++){
		printf("%d\n",number[i]);
	}
	

	
	return 0;
}
