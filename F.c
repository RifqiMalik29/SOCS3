#include <stdio.h>

int main()
{
    int N = 0;
    scanf("%d", &N);

    int count = 0;
    int result;

    for (int x = 0; x <= N; x++)
    {
        for (int y = 0; y <= N; y++)
        {
            result = N - x - y;
            if (result >= 0)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
