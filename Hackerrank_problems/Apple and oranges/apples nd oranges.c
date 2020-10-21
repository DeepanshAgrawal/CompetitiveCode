#include<stdio.h>
int main()
{
int s,t,apples=0,orange=0,i,j,x,y;
scanf("%d%d",&s,&t);
int a,b;
scanf("%d%d",&a,&b);
int m,n;
scanf("%d%d",&m,&n);
int p[m],q[n];
for(i=0;i<m;i++)
scanf("%d",&p[i]);
for(j=0;j<n;j++)
scanf("%d",&q[j]);
for(x=0;x<m;x++){
if(p[x]>(s-a)&&p[x]<(t-a))
apples=apples+1;
}
for(y=0;y<n;y++){
if(q[y]>(s-t)&&q[y]<(t-b))
orange++;}
printf("%d\n%d",apples,orange);
return 0;


}
