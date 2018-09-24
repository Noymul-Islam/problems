#include <stdio.h>
#include <string.h>
struct x
{
char word[100];
char pword[100];
}a[100];
int main()
{
int L,N;
while(scanf("%d %d",&L,&N)==2)
{
int i,j;
for(i=1;i<=L;i++)
scanf("%s %s",&a[i].word,&a[i].pword);
for(j=1;j<=N;j++)
{
char name[100];
scanf("%s",name);
int k=0;
for(i=1;i<=L;i++)
if(strcmp(name,a[i].word)==0)
{
printf("%s\n",a[i].pword);
k=1;
break;
}
if(k==0)
{
int c=strlen(name);
int b=c-1;
if(name[b]=='y' && (name[b-1]!='a'&& name[b-1]!='e'&& name[b-1]!='i'&& name[b-1]!='o' && name[b-1]!='u'))
{ name[b++]='i';
name[b++]='e';
name[b++]='s';
name[b]='\0';
printf("%s\n",name);
}
else if(name[b]=='o'|| name[b]=='s' ||(name[b]=='h' && name[b-1]=='c')|| ( name[b]=='h' && name[b-1]=='s')|| name[b]=='x')
{
name[c++]='e';
name[c++]='s';
name[c]='\0';
printf("%s\n",name);
}
else
{
name[c++]='s';
name[c]='\0';
printf("%s\n",name);
}
}
}

}
return 0;
}
