#include<cstdio>
#include<cstring>
#include<iostream>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
void Union(int u, int v);
int find(int r);

int parent[5000];
int main()
{
    //freopen("in.txt","w",stdout);
    set<int>S;
    int cases,follow;
    scanf("%d",&cases);

        getchar();
        getchar();

    int line=0;
        int p=0,q=0;
        for(follow=1; follow<=cases; follow++)
        {

            //q=1;
            map<char,int>mp;



            int  mark=1;
            char large;
            cin>>large;
            getchar();
            int lenth=large-64;
            for(int i=1; i<=lenth; i++)
                {
                    parent[i]=i;
                        char c=64+i;

                    if(mp.find(c)==mp.end())

                            mp[c]=i;


                }


       char s[3];
            while(gets(s))
            {
                if(s[0]=='\0')
                   break;


                //int n= strlen(s);


                int u=mp[s[0]];
                int v=mp[s[1]];
                Union(u,v);




            }
            int arr[5000];
            memset(arr,0,sizeof(arr));
            for(int i=1; i<=lenth; i++)
            {

                int k=find(i);
                S.insert(k);
                //arr[k]++;


            }
            if(line)
              printf("\n");
              line++;
            printf("%d\n",S.size());
//(follow!=cases)
            //printf("\n");
            //8q=1;

       mp.clear();
       S.clear();


        }


    return 0;
}

void Union(int u, int v)
{
    if(find(u)!=find(v))
        parent[find(v)]=find(u);


}
int find(int r)
{

    if(parent[r]==r)
        return r;
    else

        return (parent[r]=find(parent[r]));
}
