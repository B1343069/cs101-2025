#include <stdio.h>
int main()
{
    char v ='A';
    int *p=NULL;
    p = &v;

    printf("value of v:%d\n",v);
    printf("address stored in p:%x\n",p);
    printf("address of p%x\n",&p);
    printf("value of p%d\n",*p);
    return 0;
}