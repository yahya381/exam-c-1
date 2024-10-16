#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the 1 number : ");
scanf("%d",&a);
printf("Enter the 2 number : ");
scanf("%d",&b);
printf("Enter the 3 number : ");
scanf("%d",&c);
if(a<b){
	if(a<c){
		
		printf("%d",a);	
		}
		else{
			printf("%d",c);
		}
	}

	else{
		if(b<c){
			printf("%d",b);
		}
		else{
			printf("%d",c);
		}
	}
	
}




