#include <stdio.h>
int len(char*s){
    if (!*s) return 0;
    return 1 + len(s+1);
}
int main(){
    char s[]="IIIIIu";
    printf("(%s)len=%d\n",s,len(s));
    return 0;
}
