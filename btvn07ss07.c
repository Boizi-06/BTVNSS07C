#include<stdio.h>
int main(){
	int n,i,num;
	int number[1000];
	printf("hay nhap so phan tu cua mang\n");
	scanf("%d",&n);
	printf("bay gio hay nhap cac phan tu cua mang \n");
	for(i=0;i<n;i++){
		do{
			printf("hay nhap phan tu thu %d :",i+1);
		    scanf("%d",&num);
		    if(num%2==0){
		    	printf("so nhap vao phai la so le\n");
		    	
			}
		}while(num%2==0);
		number[i]=num;
	}	
	printf("cac phan tu trong mang lan luot la \n");
	for(i=0;i<n;i++){
		printf("%d\n",number[i]);
	}
	

	
	return 0;
}
