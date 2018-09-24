#include<cstdio>
#include<cmath>
#include<cstring>
#include<stack>
#include<string>
#include<iostream>
using namespace std;
stack<string>bck,fron;
int main()
{
    int t,cs=1;
    scanf("%d",&t);
    getchar();
    char input[1000];
    while(t--)
    {
        printf("Case %d:\n",cs++);
        while(!bck.empty())
               bck.pop();
        while(!fron.empty())
               fron.pop();
        string current="http://www.lightoj.com/";
        while(gets(input))
        {

           // printf("adad");
            if(!strcmp(input,"QUIT"))
                break;
           // printf("dwsdsdsd");
            if(input[0]=='V')
            {
               // printf("asche");
               while(!fron.empty())
                  fron.pop();
                bck.push(current);
                current="";
                for(int i=6; i<strlen(input); i++)
                    current=current+input[i];

                //current=""+input;
                cout<<current<<endl;


            }
            else if(input[0]=='B')
            {
                if(bck.empty())
                    cout<<"Ignored"<<endl;
                else
                {
                    fron.push(current);
                    current="";
                    current=bck.top();
                     bck.pop();
                    cout<<current<<endl;

                }

                }

                else if(input[0]=='F')
                {
                    if(fron.empty())
                    {
                        cout<<"Ignored"<<endl;
                    }
                    else
                    {
                        bck.push(current);
                        current="";
                        current=fron.top();
                        fron.pop();
                        cout<<current<<endl;


                    }


                }
            }


        }


    return 0;
    }




