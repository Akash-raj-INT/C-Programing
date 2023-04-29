int main(){
	int a[100];
	int hold,i,j,n;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Data items in original order");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]){
			hold=a[j];
			a[j]=a[j+1];
			a[j+1]=hold;
			
		}
	}
	}
	printf("\nData items in desending order");
	for(i=n;i>=0;i--){
		printf("\n%d",a[i]);
	}
}
