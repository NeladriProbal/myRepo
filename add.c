#include<stdio.h>
fun(int * y)
{
    printf("%d",*y);
    return 0;
}
int main()
{
    int x=100;
    int * y=&x;
    fun(y);
    return 0;
}