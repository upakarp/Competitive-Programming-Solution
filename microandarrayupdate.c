#include <stdio.h>

int main()
{
   int i, j, l, t, n, k, min, arr[100000];
   scanf("%d", &t);
   for(i=0; i<t; i++){
       scanf("%d %d", &n, &k);
       for(j=0; j<n; j++){
           scanf("%d", &arr[j]);
       }
       
       min = arr[0];
       for(l=1;l<n;l++){
			if(min>arr[l]){
				min = arr[l];
			}
		}
		if(k<=min){
			printf("%d", 0);
		}
       else{
			printf("%d", k-min);
		}
   }
}
