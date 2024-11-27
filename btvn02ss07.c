#include<stdio.h>
int main(){
	int number[5];
	int i;
	
	printf("nhap 5 phan tu cho mang :\n");
	for(i=0;i<5;i++){
		printf("phan tu thu %d",i+1);
		scanf("%d",&number[i]);
	}
	printf("cac phan tu trong mang bao gom\n");
	for(i=0;i<5;i++){
		printf("%d\n",number[i]);
	}
	return 0;
}
