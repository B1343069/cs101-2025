#include <stdio.h>


int mian(){
    FILE* fp;
    int a[3] ={0,1,2};
    int a_read[3];
    char b[3] = "ABC";
    char b_read[3];
    float c[3] = {1.1,1.2,1.3};
    float_c[3]
    
    fp = fopen("fang","wb+");
    fwrite(a,sizeof(int),3,fp);
    fseek(fp,0,SEEK_SET);
    fread(a_read,sizeof(int),3,fp);
    
    for (int i=0;i<3;i++){
        printf("%d", a_read[i]);
    }
     fp = fopen("fang","wb+");
    fwrite(a,sizeof(char),3,fp);
    fseek(fp,0,SEEK_SET);
    fread(a_read,sizeof(char),3,fp);
    
    for (int i=0;i<3;i++){
        printf("%d", a_read[i]);
    }
     fp = fopen("fang","wb+");
    fwrite(a,sizeof(float),3,fp);
    fseek(fp,0,SEEK_SET);
    fread(a_read,sizeof(float),3,fp);
    
    for (int i=0;i<3;i++){
        printf("%d", a_read[i]);
    }
    return 0;
}
