#include <stdio.h>
#include <stdlib.h>


int main() {
	int a1[100],b1[100];
	int a1_size,b1_size;
	int i,j;
	int temp;
	int total;
	int size=0;
	
	//ARRAY ONE ELEMET GET
	printf("Enter how much elemenet in first array : ");
	scanf("%d",&a1_size);
	printf("\nEnter %d elemenst\n",a1_size);
	for(i=0;i<a1_size;i++){
		printf("\na1[%d] : ",i+1);
		scanf("%d",&a1[i]);
	}
	
	
	//ARRAY TWO ELEMENT GETTING
	printf("\nEnter how much elemenet in second array : ");
	scanf("%d",&b1_size);
	printf("\nEnter %d elemenst\n",b1_size);
	for(i=0;i<b1_size;i++){
		printf("\na1[%d] : ",i+1);
		scanf("%d",&b1[i]);
	}
	
	//TOTAL ARRAY ELEMENTS
	total=a1_size+b1_size;
	
	//THIRD AARRAY BY JOINING EXISTING TWO ARRAYS
	for(i=a1_size;i<total;i++){
		a1[i]=b1[size];
		size=size+1;
	}
	
	//SORTING THIRD ARRAY
	for(i=total;i>0;i--){
		for(j=0;j<total-1;j++){
			if(a1[j]>a1[j+1]){	
			temp=a1[j];
			a1[j]=a1[j+1];
			a1[j+1]=temp;
			}
		}
	}
	
	printf("\n...............\n");
	
	//PRINTING THIRD ARRAY
	printf("Array elements are : \n");
	for(i=0;i<total;i++){
		printf("Array_[%d] is : %d\n",i,a1[i]);
	}
	


	
	return 0;
}