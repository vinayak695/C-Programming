/*Print N Bits from Given Position 
Example Number: 23 → (10111) Position = 4, N = 3 
→ Output: 101 */

#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int pos;
    scanf("%d",&pos);

    int n;
    scanf("%d",&n);

    int mask=((1<<n)-1)<<(pos-n+1);
    int bin =(num&mask)>>(pos-n+1);

    printf("%b",bin);

}