//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

/*
int main(){
    int a = 1000;
    FILE* pf = fopen("a.c.txt","wb");
    fwrite(&a,4,1,pf);
    fclose(pf);
    pf = NULL;
    return 0;
}*/

/*int main(){
    FILE* pf = fopen("a.c.txt","w");
    if(pf == NULL){
        printf("%s\n",strerror(errno));
        return 0;
    }

    //写文件
    fputc('b',pf);
    fputc('i',pf);
    fputc('t',pf);
    fputc(' ',pf);
    fputc('d',pf);
    fputc('a',pf);
    fputc('n',pf);
    fputc('c',pf);
    fputc('e',pf);

    //关闭文件
    fclose(pf);
    pf = NULL;

    FILE* pfRead = fopen("a.c.txt","r");
    if(pfRead == NULL){
        return 0;
    }

    for(int i = 0;i < 9;i++){
        printf("%c",fgetc(pfRead));
    }

    fclose(pfRead);
    pfRead = NULL;

    return 0;
}*/

/*
int main(){
    FILE* pf = fopen("a.c.txt","w");
    if(pf == NULL){
        printf("%s",strerror(errno));
        return 0;
    }
    fputs("LIFE IS A FUCING MOVIE!\n",pf);
    fputs("MAYBE NOT!\n",pf);
    fclose(pf);
    pf = NULL;
}*/

/*
int main(){
    char buff[1024];
    FILE* pf = fopen("a.c.txt","r");
    if(pf == NULL){
        printf("%s",strerror(errno));
        return 0;
    }
    fgets(buff,1021,pf);
    printf("%s",buff);
    puts(buff);
    fgets(buff,1021,pf);
    puts(buff);
}
*/

/*int main(){
    char buff[1024] = {0};
    //gets(buff);
    //puts(buff);
    fgets(buff,1024,stdin);
    fputs(buff,stdout);
}*/

/*struct s{
    int age;
    float score;
    char arr[30];
};

int main(){
    struct s S1 = {20,3.1415926f,"LIFE IS A FUCKING MOVIE!"};
    FILE* pf = fopen("a.c.txt","r");
    if(pf == NULL){
        printf("%s",strerror(errno));
        return 0;
    }
    fscanf(pf,"%d\n%f\n%s",&(S1.age),&(S1.score),S1.arr);
    printf("%d%f\n%s",S1.age,S1.score,S1.arr);
    fclose(pf);
    pf = NULL;
    return 0;
}*/

/*
struct s{
    int age;
    float score;
    char arr[30];
};

int main(){
    struct s s1 = {20,3.1415926,"LIFE IS A FUCKING MOVIE!"};
    char buff[1024] = {0};
    struct s s2 = {0};

    sprintf(buff,"%d %f %s",s1.age,s1.score,s1.arr);
    //printf("%s",buff);
    sscanf(buff,"%d %f %s",&(s2.age),&(s2.score),s2.arr);
    printf("%d %f %s",s2.age,s2.score,s2.arr);
    return 0;
}*/

