#include "stdio.h"
#include "string.h"

#define SZ  10010
#define SZ1 1000010

char pat[SZ], txt[SZ1];
int par[SZ];

//ami jotoghor agabo, amake maximum totghor picate hobe........., so the complexity is o(txt + pattern)

void pre_process()
{
    int i, k, n;

    n = strlen(pat);
    k = 0;
    par[0] = 0;

    for(i=1; i<n; i++)
    {
        while(k>0 && pat[i] != pat[k])
            k = par[k-1];
        if(pat[i] == pat[k])
            k++;
        par[i] = k;
        printf("%d___%d\n", i, par[i]);
    }
    return ;
}

int KMP_search()
{
    pre_process();

    int i, k, n, len, ans;

    n = strlen(txt);
    len = strlen(pat);
    ans = 0;
    k = 0;

    for(i=0; i<n; i++)
    {
        while(k > 0 && txt[i] != pat[k])
            k = par[k-1];
        if(txt[i] == pat[k])
            k++;
        if(k == len)
        {
            ans++;
            break;
        }
    }

    return ans;
}


int main()
{
    int t, q, x, i;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%s", txt);
        scanf("%d", &q);
        for(i = 0; i < q; ++i)
        {
            scanf("%s", pat);
            x = KMP_search();
            if(x == 1)
                printf("y\n");
            else
                printf("n\n");
        }
    }

    return 0;
}
//aabaabxaabaabyaabaabxaabaaby
