/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    int a=10,b=5;
    printf("1.add\n2.sub\n3.mul");
    printf("\nchoose it");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("add:%d",a+b);
        break;
        case 2:
        printf("sub:%d",a-b);
        break;
        case 3:
        printf("mul:%d",a*b);
        break;
    
        default:
        printf("nil");
        
        return 0;
        
    }
}
