#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < n; j++)
            printf("#");
        printf("\n");
    }
    return 0;
}