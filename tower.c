#include<stdio.h>
void tower(int ndisk,char source, char inter, char dest);
int main()
{
char source='A', inter='B', char dest='C';
int ndisk;
printf("enter the num of disks");
scanf("%d",&n);
printf("sequence is:/n")
tower(ndisk,source,inter,dest);
return 0;
}
void tower(int ndisk,char source,char inter, char dest)
{
if(ndisk==1)
{
printf("move disk %d from%c-->%c/n",ndisk source dest);
return;
tower(ndisk-1,source,dest,inter)
printf("move disk%d from%c-->%c/n", ndisk,source,dest);
tower(ndisk-1,inter,source,dest);
}
