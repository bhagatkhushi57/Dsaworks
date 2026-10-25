#include<stdio.h>
#include<stdbool.h>
int ins(int arr[],int*n){
	int idx,elem;
	if(*n>=10){
		printf("Array is full.Cannot insert.\n");
			return 0;
	}
//	---------------------Insertion-------------
	printf("Enter position of element where you want to insert your element:");
	scanf("%d", &idx);
	printf("Enter what to insert:");
	scanf("%d", &elem);
	for(int i=*n;i>=idx;i--){
		arr[i]=arr[i-1];
	}
	arr[idx-1]=elem;
	(*n)++;
	printf("Element inserted successfully!\n");
	for(int i=0;i<*n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
//---------------Deletion-------------------

int del(int arr[],int *n){
	int idx;
	printf("Enter position of element which you want to delete:");
	scanf("%d",&idx);
	for(int i=idx-1;i< *n-1;i++){
		arr[i]=arr[i+1];
	}
	(*n)--;
	printf("Element deleted successfully!");
	for(int i=0;i<*n;i++){
		return 0;
	}
}
//	--------------Search------------------------
void search(int arr[], int *n){
		int x;
		printf("Enter elements to search: ");
		scanf("%d", &x);
		bool found=false;
		for(int i=0;i< *n;i++){
			if(arr[i] ==x){
				found=true;
			}
		
	}
		if(found){
			printf("Element found");
		}
		else{
		
			printf("Element not found");
	}
}
//	-------------------Traversal--------------------
	void tra(int arr[],int*n){
		for(int i=0;i<*n;i++){
			printf("%d",arr[i]);
		}
	}
		int main(){
			char choice;
			int n;
			printf("Enter size of array:");
			scanf("%d",&n);
			int arr[n];
			printf("Enter elements of array");
			for(int i=0;i<n;i++){
				scanf("%d", &arr[i]);
			}
			printf("Enter your choices:'I'for insert,'D'for deletion,'T'for traversal,'S'for searching:");
			scanf(" %c",  &choice);
			 if(choice=='I'||choice=='i'){
			 	ins(arr,&n);
			 	
			 	
			 }
			 	else if(choice=='D'||choice=='d'){
			 		del(arr,&n);
				 }
				 else if(choice=='T'||choice=='t'){
				 	tra(arr,&n);
				 }
				 else if(choice=='S'||choice=='s'){
				 	search(arr,&n);
				 }
				 return 0;
			}
			
			
	
		
	


