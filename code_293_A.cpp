#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<sstream>

using namespace std;

int main()
{
    //char s[1000],t[1000];
    string s,t;
    //scanf("%s %s",s,t);
    cin>>s;
  getchar();
    //gets(t);
     cin>>t;
      getchar();
    int k=0;
    int len=s.length();
     //printf("%d\n",strlen(t));
      int m=0;
    /*if((t[len-1]-'0')-(s[len-1]-'0')>1)
    {
       // printf("%c\n",t[len-1]);
        //printf("ok");
        char c=++s[len-1];
        printf("%c\n",c);

    }
    else if((t[len-1]-'0')-(s[len-1]-'0')==1)
    {

        printf("No such string\n");
    }*/
    //else if(t[len-1]==s[len-1])

        //k=1;

        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)

          //printf("ok");
            {
                if((t[i]-'0')-(s[j]-'0')>1)
            {
                string ch;
                //printf("ok");
               // m++;
               //cout<<"ok"<<endl;
                //s[i]=++s[i];
                ch=t;
                ch[i]=--ch[i];
                if(ch>s&&ch<t)
                {
                    m++;
                    cout<<ch<<endl;
                       break;
                }
           //t[i]=--t[i];
                //printf("%c",++s[i]);
               // puts(t);
               // printf("\n");
              //  break;

            }


        }
        if(m)
              break;
        }



    if(!m)
        printf("No such string\n");



  return 0;
}
