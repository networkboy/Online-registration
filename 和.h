#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[20];
	char ID[20];
	char zhanghao[20];
	char mima[20];
	//char bingli[1000];
	
}useres;

struct{
	char zhanghao[20];
	char mima[20];
	char name[20];
	char ID[20];
	char bingli[100];
}user[100];

struct 
{
	char name[25];
	char time[25];
    char address[30];
	char jianli[300];
	
}doctor[100];


int checkusers(char *q,char *s)//ºË¶ÔÕËºÅÃÜÂë
{
	FILE *fp;
	useres *p;
	int i,j;
	p=(useres*)malloc(sizeof(useres));
	fp=fopen("user.txt","r");
	while(!feof(fp))
	{
		fscanf(fp,"%s %s %s %s",p->zhanghao,p->mima,p->name,p->ID);
		i=strcmp(q,p->zhanghao);
		j=strcmp(s,p->mima);
		if(i==0&&j==0)
		{
			fclose(fp);
			return 1;
		}
	}
	fclose(fp);
	return 0;
}