#include<stdio.h>
int  main(){
	int n,i,l=-200,l1=-300;
	printf("Enter size");
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int));
	int *brr = (int*)calloc(n,sizeof(int));
	printf("Enter elements for first array=");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter elements for second array=");
	for(i=0;i<n;i++){
		scanf("%d",&brr[i]);
	}
	
	for(i=0;i<n;i++){
		if(arr[i]>l){
			l=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if(brr[i]>l1){
			l1=brr[i];
		}
	}

     if(l>l1){
     	printf("\nLargest element=%d",l);
	 }else{
	 	printf("\nLargest element=%d",l1);
	 }
	return 0;
}
