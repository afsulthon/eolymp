#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int sum = n / 10 + n % 10;
    int product = (n / 10) * (n % 10);
    printf("%d %d\n", sum, product);
    return 0;
}