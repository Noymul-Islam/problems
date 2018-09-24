#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<string>

using namespace std;

struct st
{
    string s1,s2;

};
int main()
{
    int n,m;
    cin>>n>>m;
      getchar();
    st data[m];
    for(int i=0;i<m;i++)
    {
        char ch[100],ch1[100];
        //scanf("%s %s",&data[i].s1,&data[i].s2);
       cin>>ch>>ch1;
       data[i].s1=(string)ch;
       data[i].s2=(string)ch1;
    }
    string s;
      char ch1[100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",ch1);
        string ch=(string)ch1;

        for(int j=0;j<m;j++)
        {
            if(ch==data[j].s1)
            {
                if((data[j].s1.length())<=(data[j].s2.length()))
                {

                    s+=data[j].s1;
                    if(i!=n-1)
                    {
                        s+=' ';

                    }
                    break;
                }
                else
                {
                    s+=data[j].s2;
                    if(i!=n-1)
                    {
                        s+=' ';

                    }
                    break;
                }

            }

        }

    }
    cout<<s<<endl;


    return 0;
}
