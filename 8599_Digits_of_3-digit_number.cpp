#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d %d %d\n", n / 100, n / 10 % 10, n % 10);
    return 0;
}