#include<stdio.h>
int main(){
	int i;
	int number[5]={6,2,3,4,5};
	int min=2;
	int max=6;
	for(i=0;i<5;i++){
		if(number[i]=max){
			number[i]=max;
		}
		if(number[i]=min){
			min=number[i];
		}
	}
	printf("so nho nhat la: %d\n",min);
	printf("so lon nhat la: %d",max);
	return 0;
}
