#include <stdio.h>

int main()
{
    //* You will given an integer array A and the size N. You will also be given an integer value X. You need to tell if X was appeared in the array. If X has appeared then print "YES", otherwise print "NO".

    int T;
    scanf("%d", &T);

    for (int c = 0; c < T; c++)
    {
        // Step-01: Take the length of array
        int N;
        scanf("%d", &N);

        // Step-02: create array and take input
        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        // step-03: comparison number
        int X;
        scanf("%d", &X);

        // step-04: Hold result
        int res = 0;

        for (int i = 0; i < N; i++)
        {
            if (A[i] == X)
            {
                res = 1;
                break;
            }
        }

        // step-05: final output
        if (res)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
