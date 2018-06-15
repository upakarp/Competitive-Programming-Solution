#include <stdio.h>

int main()
{
    int n, x, i,j, count=0, score=0;
    scanf("%d %d", &n, &x);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    
        for(j=0;j<n;j++){
				if(arr[j]>x){
					count++;
					if(count>1){
						break;
					}
				} else {
					score++;
				}
        }
        printf("%d\n", score);
    
    
}
