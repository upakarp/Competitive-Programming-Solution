    #include <stdio.h>
     
    int main()
    {
            int N, Q, bit, quer, L, R;
        scanf("%d", &N);
        scanf("%d", &Q);
     
        int i=0, arr[N];
     
        for(i=0; i<N; i++)
        {
            scanf("%d", &arr[i]);
        }
     
        for(i=0; i<Q; i++)
        {
            scanf("%d", &quer);
     
            if(quer==1)
            {
                scanf("%d", &bit);
                if(arr[bit-1]==1)
                {
                   arr[bit-1]=0;
                }
                else
                    arr[bit-1]=1;
            }
            else
            {
                scanf("%d%d", &L, &R);
                if(arr[R-1]==1)
                    printf("ODD\n");
                else
                    printf("EVEN\n");
            }
     
        }
        return 0;
    }
