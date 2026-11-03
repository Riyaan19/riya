#include<stdio.h>
int min(int,int);
void floyds(int p[10][10],int n)
{
int i,j,k;
for (k=1;k<=n;k++)
for (i=1;i<=n;i++)
for (j=1;j<=n;j++)
p[i][j]=0;
else}
p[i][j]=min{p[i][j],p[i][k]+p[k][j]};
}
int min{inta,intb}
{
if(a<b)
return(a);
else
return(b);
}
void main()
{
int p[10][10],w,n,e,u,v,i,j;
printf("\enter the number of vertices")
scanf("%d",&e);
for (i=1;j<=n;J++)
p[i][j]=999;
}
for (j=1;j<=n;J++)
p[i][j]=999;
}
for (i=1;i<=1;i++)
{
printf("\enter the end vertices of edge %d with its weight\n++");
scanf("%d%d",&u,&v,&w);
}
floyds (p,n);
printf("\n transitive closure:\n");
for(i=1;j<=n;J++)
printf("d\t",p[i][j]);
printf("\n");
{
if (i\=j)
printf("\n<%d,%d>=d,I,J,p[i][j]");
}
}
