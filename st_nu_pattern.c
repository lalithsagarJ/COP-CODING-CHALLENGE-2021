/*	Author : LALITH SAGAR J
	USN	  : ENG18CS0147
	CLASS : CSE VI 'C'
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
 	int n,i,j,t=0;
	printf("\nEnter the no. of lines :");
	scanf("%d",&n);
	t=n-1+4;   // number of rows.
 	for(i = 1; i <= n; i++) {
      		for(j = 1; j <= n-i+4; j++){
         		printf("*");
         	}
       		for(j=1;j<=i;j++){
       			printf("%d",i);
       			printf("*");
       		}    	
         	for(j=t+i+1;j<=2*t;j++)
         		printf("*"); 	
      		printf("\n");
   	}
   	return 1;
}
