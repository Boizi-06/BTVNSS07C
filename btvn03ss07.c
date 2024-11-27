#include<stdio.h>
int main(){
	int i;
	int number[5]={5,10,15,20,25};
	for(i=0;i<5;i++){
		if(number[i]%2==0){
			printf("%d\n",number[i]);
		}else{
			printf(" khong phai so chan\n");
		}
		
	}
	
	return 0;
}
