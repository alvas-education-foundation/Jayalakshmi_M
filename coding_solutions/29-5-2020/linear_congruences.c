//write a c program to solve a system of linear congruences by applying the Chinese Remainder Theorem
//


#include <stdio.h>
 
// returns x where (a * x) % b == 1
int mul_inv(int a, int b)
{
	int b0 = b, t, q;
	int x0 = 0, x1 = 1;
	if (b == 1) return 1;
	while (a > 1) {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += b0;
	return x1;
}
 
int chinese_remainder(int *n, int *a, int len)
{
	int p, i, prod = 1, sum = 0;
 
	for (i = 0; i < len; i++) prod *= n[i];
 
	for (i = 0; i < len; i++) {
		p = prod / n[i];
		sum += a[i] * mul_inv(p, n[i]) * p;
	}
 
	return sum % prod;
}
 
int main(void)
{
    int t,d;
    printf("Enter n value for pairwise co-prime");
    scanf("%d",&t);
    int n[t];
    printf("Enter the pairwise co-prime");
    for(int i=0;i<t;i++)
    scanf("%d",&n[i]);
    printf("Enter n value for sequence of integers");
    scanf("%d",&d);
    int a[d];
    printf("Enter the sequence of integers");
    for(int i=0;i<d;i++)
    scanf("%d",&a[i]);
    
 
	printf("%d\n", chinese_remainder(n, a, sizeof(n)/sizeof(n[0])));
	return 0;
}