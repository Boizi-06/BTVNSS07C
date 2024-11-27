#include<stdio.h>
int main(){
	int i;
	int number[5]={1,2,3,4,5};
	for(i=0;i<5;i++){
		if(number[i]%2==0){
			number[i]+=3;
		}else{
			number[i]+=2;
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",number[i]);
	}

	return 0;
}
