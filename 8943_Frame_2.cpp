#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
            puts("***");
        else
            puts("* *");
    }
    return 0;
}