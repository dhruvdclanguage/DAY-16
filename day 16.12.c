#include<stdio.h>

int main (){
	
	int r , c , k ;
	
	for(r=1 ; r<=5 ; r++){
		
		for(k=4 ; k>=r ; k--){
			
			printf(" ");
			
		}
		
		for(c=1 ; c<=r ; c++){
			
			if(c%2==0){
				printf("*");
			}
			else{
				printf("*");
			}
			
		}
		
		printf("\n");
		
	}
	
	return 0 ;
}

