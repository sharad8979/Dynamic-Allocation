#include<stdio.h>
int main(){
	int arr[20],i,n;
      printf("Enter the size=");
      scanf("%d",&n);
      printf("Enter the elements=");
      for(i=0;i<n;i++){
      	scanf("%d",&arr[i]);
	  }
	    int *ptr1=(int*)malloc(n*sizeof(int));
	    for(i=0;i<n;i++){
	    	ptr1[i]=arr[i];
		}
		printf("Second array=");
		for(i=0;i<n;i++){
			printf(" %d",ptr1[i]);
		}
	
	return 0;
}
