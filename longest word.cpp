#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;
int main()
{
    char main[10000],big[10000];
int k=1,m,n,i,j;
    while(scanf("%s",main)==1)
    {
        int c=0,st=0;
        if(strcmp(main,"E-N-D")==0)

             break;
        m=strlen(main);

        for(i=0; i<m; i++)
        {
            if((main[i]>='a'&&main[i]<='z')||(main[i]>='A'&&main[i]<='Z')||main[i]=='-')
                continue;

            else
                c++;
        }
        m=m-c;

        if(m>k)
        {

            k=m;
            strcpy(big,main);


        }}


            n=strlen(big);
            for(i=0; i<n; i++)

            {

                if(big[i]>='A'&&big[i]<='Z')
                {
                    big[i]=big[i]+32;
                    printf("%c",big[i]);
                }

                else if((big[i]>='a'&&big[i]<='z')||(big[i]=='-'))
                    printf("%c",big[i]);


            }
            printf("\n");







    return 0;
}
