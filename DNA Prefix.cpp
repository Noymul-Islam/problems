#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<list>
#include<map>
using namespace std;
char input[50005][55];
map<string,int>mp;
int count;
int map2[67001];
struct node
{
    bool mark;
    node *next[26];
    node()
    {
        mark=false;
        for(int i=0; i<26; i++)
        {
            next[i]=NULL;
        }

    }
} *root;
int insetInput(char str[],int len,int flag)
{
    node *cur=root;
    int size=0;
    string st="";
    for(int i=0; i<len; i++)
    {
        int id=str[i]-'A';
        if(cur->next[id]==NULL)
        {
            cur->next[id]=new node();
            if(!flag)
            {
                size++;
                st+=str[i];
                if(mp.find(st)==mp.end())
                {
                    mp[st]=count++;

                }
                map2[mp[st]]++;

            }

        }
        else
        {
            size++;
            st+=str[i];
            if(mp.find(st)==mp.end())
            {
                mp[st]=count++;

            }
            map2[mp[st]]++;

            //cout<<st<<endl;
        }
        cur=cur->next[id];
    }
    //  printf("map---->%d\n",map2[mp[st]]);

    return size*map2[mp[st]];
}

void del(node *cur)
{
    for(int i=0; i<26; i++)
        if(cur->next[i])
            del(cur->next[i]);

    delete(cur);

}

int main()
{
    int t,cs=1;
    scanf("%d",&t);

    while(t--)
    {
        memset(map2,0,sizeof(map2));
        int n,count=0;
        scanf("%d",&n);
        int sum1,sum2,tot=-1;
        root=new node();
        int k=0;
        for(int i=0; i<n; i++)
        {
            scanf("%s",input[i]);
            sum1=strlen(input[i]);

            if(sum1>tot)
                tot=sum1;
            sum2=insetInput(input[i],sum1,k);
            k=1;
            if(sum2>tot)
                tot=sum2;

        }

        del(root);

        mp.clear();
        printf("Case %d: %d\n",cs++,tot);
    }


    return 0;
}
