#include <stdio.h>
void evenodd();
int main()
{
    evenodd();
    return 0;
}
void evenodd()
{
int h;
    printf("Enter a number:- \n");
    scanf("%d",&h);
    if(h%2==0)
    {
    printf("the number is even");
    }
    else
    {
    printf("the number is odd");
}
}
