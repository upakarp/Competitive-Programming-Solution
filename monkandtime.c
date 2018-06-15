#include <stdio.h>

#define MAX 100

int arr[MAX];
int front = 0, rear = -1;

void push(int data){
    if( rear != MAX-1){
        arr[++rear] = data;
    }
}

void pop(int data){
    data = arr[front++];
    
    if(front == MAX-1){
        front = 0;
    }
}

int main()
{
    int n, i, count=0, timetaken = 0;
    scanf("%d", &n);
    int c[n], ideal[n];
    
    for(i=0; i<n; i++){
        scanf("%d", &c[i]);
        push(c[i]);
    }
    
    for(i=0; i<n; i++){
        scanf("%d", &ideal[i]);
    }
    
    int j=0;
    while(count<n){
        if(c[j] != ideal[j]){
            pop(c[j]);
            push(c[j]);
            timetaken++;
        }  else {
            timetaken++ ;
            count++;
            j++;
        }
    }
    printf("%d", timetaken);
   }
