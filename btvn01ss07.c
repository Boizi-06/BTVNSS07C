#include<stdio.h>
int main(){
	int chuoi[5]={1,12,13,11,2};
	int size_chuoi=sizeof(chuoi)/sizeof(int);
	printf("do dai cua mang la %d\n",size_chuoi);
	int i;
	for(i=0;i<size_chuoi;i++){
		printf("phan tu thu %d cua chuoi la %d\n",i,chuoi[i]);
	}
	
	
	
	
	return 0;
}
