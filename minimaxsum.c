#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[5], temp;
	
	for(int i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if (arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
	}
	
	int max=0;
	int min=0;
	
	for(int i=1; i<5; i++){
		max = max + arr[i];
	}
	for(int i=0; i<4; i++){
		min = min + arr[i];
	}
	
	printf("%d %d", max, min);
}
