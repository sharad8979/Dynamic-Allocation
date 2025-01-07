#include<stdio.h>
int main(){
	int n,m,i,j;
    printf("Enter the size");
    scanf("%d %d",&n,&m);
    int **arr=(int **)malloc(n * sizeof(int *));
	for(i=0;i<n;i++){
		arr[i]=(int *)malloc(m * sizeof(int));
	}
	printf("Enter the elements=");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nMatrix is=\n");
     for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nLeft diagonal=");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==j){
				printf(" %d",arr[i][j]);
			}
		}
	}
	printf("\nRight diagonal=");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if((i==1 && j==1) || (i==0 && j==2) || (i==2 && j==0)){
				printf(" %d",arr[i][j]);
			}
		}
	}
	
	return 0;
}
