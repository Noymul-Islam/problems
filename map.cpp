#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

int main()
{
    map<string,int>mymap;
    int edge,assign=0;
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        char s1[100],s2[100];
        cin>>s1>>s2;
        if(mymap.find(s1)==mymap.end())
        {
            printf("mappinf %s with %d\n",s1,assign);
            mymap[s1]=assign++;
        }
        if(mymap.find(s2)==mymap.end())
        {
            printf("mapping %s with %d\n",s2,assign);
            mymap[s2]=assign++;

        }
        int u=mymap[s1];
        int v=mymap[s2];
        cout<<"edges : "<<u<<" "<<v<<endl;


    }

    return 0;
}
