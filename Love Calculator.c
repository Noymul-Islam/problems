
#include<stdio.h>
int digit(int x)
{
    int i,sum=0;
    while(1)
    {
        if(x<=9)
        {
            sum+=x;
            break;
        }
        sum+=x%10;
        x=x/10;
    }
    return sum;
}
int main()
{
    int i,sum1,sum2,val[2];
    double res;
    char ara1[30],ara2[30],ch;
    while(scanf("%[^\n]",ara1)!=EOF)
    {
        scanf("%c",&ch);
        scanf("%[^\n]",ara2);
        scanf("%c",&ch);
        for(i=0,sum1=0;ara1[i]!='\0';++i)
        {
            if(ara1[i]>='a'&&ara1[i]<='z')
            sum1+=ara1[i]-'a'+1;
            else if(ara1[i]>='A'&&ara1[i]<='Z')
            sum1+=ara1[i]-'A'+1;
            else
            continue;
        }
        for(i=0,sum2=0;ara2[i]!='\0';++i)
        {
            if(ara2[i]>='a'&&ara2[i]<='z')
            sum2+=ara2[i]-'a'+1;
            else if(ara2[i]>='A'&&ara2[i]<='Z')
            sum2+=ara2[i]-'A'+1;
            else
            continue;
        }
        val[0]=sum1;
        val[1]=sum2;
        ch='%';
        for(i=0;i<2;++i)
        {
           val[i]=digit(val[i]);
           while(val[i]>=10)
           val[i]=digit(val[i]);
        }
        res=(val[1]*100.0)/val[0];
        if(res<=100.00)
        printf("%0.2lf %c\n",res,ch);
        else
        {
            res=(val[0]*100.0)/val[1];
            printf("%0.2lf %c\n",res,ch);
        }
    }
    return 0;
