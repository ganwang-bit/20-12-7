//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//#include<string.h>
//int main()
//{
//    FILE*pf=fopen("test.txt","r");
//    if(pf==NULL)
//    {
//        printf("%s\n",strerror(errno));
//    }
//    else
//    {
//        printf("yes\n");
//        char arr[20];
//        fgets(arr,20,pf);
//        puts(arr);
//    }
//    fclose(pf);
//    pf=NULL;
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//#include<string.h>
//int main()
//{
//    FILE*pf=fopen("test.txt","w");
//    if(pf==NULL)
//    {
//        printf("%s\n",strerror(errno));
//    }
//    else
//    {
//        char arr[20];
//        fputs("abcasdsd",pf);
//        fgets(arr,20,stdin);
//        fputs(arr,stdout);
//        gets(arr);
//        puts(arr);
//        puts("yes");
//    }
//    fclose(pf);
//    pf=NULL;
//    return 0;
//}
//#include<stdio.h>
//struct S
//{
//    int n;
//    float score;
//    char arr[20];
//};
//int main()
//{
//    struct S s={100,3.14f,"bit"};
//    FILE*pf=fopen("test.txt","w");
//    fscanf(pf,"%d %f %s",&s.n,&s.score,s.arr);
//    printf("%d %f %s",s.n,s.score,s.arr);
//    //fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//    return 0;
//}
//scanf/printf//针对标准输入流和标准输出流
//fprintf/fscanf//针对所有输入流和所有输出流
//sprintf/针对字符串
//#include<stdio.h>
//struct S
//{
//    int n;
//    float score;
//    char arr[10];
//};
//int main()
//{
//    struct S s={100,3.14f,"10"};
//    char arr2[40];
//    sprintf(arr2,"%d %f %s",s.n,s.score,s.arr);
//    printf("%s\n",arr2);
//    return 0;
//}
#include<stdio.h>
struct S
{
    char name[20];
    int age;
    double score;
};
int main()
{
    struct S s={"zhangsam",20,55.6};
    struct S tmp={0};
    FILE*pf=fopen("test.txt","rb");
    if(pf==NULL)
    {
        return 0;
    }
    //fwrite(&s,sizeof(struct S),1,pf);
    fread(&tmp,sizeof(struct S ),1,pf);
    printf("%s %d %f",tmp.name,tmp.age,tmp.score);
    fclose(pf);
    pf=NULL;
    return 0;
}
