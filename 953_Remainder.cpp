#include <cstdio>
using namespace std;

int main()
{
    int n, res;
    scanf("%d", &n);
    res = (n % 10) % (n / 100);
    printf("%d\n", res);
    return 0;
}