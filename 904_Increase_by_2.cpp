#include <cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n >= 0)
            printf("%d ", n + 2);
        else
            printf("%d ", n);
    }
    return 0;
}