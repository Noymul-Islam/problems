#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

struct data
{
    int sum;
     string s;

}a[1000011];
bool comp(data p, data q)
  {
      return p.s<q.s;
  }
map<string,int>mp;
int main()
{int t;
cin>>t;
getchar();
//getchar();
while(t--)
{
   // getchar();

    int n,count=0,c=0;
    char ch[200];
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
        a[i].sum=0;
    while(n--)
    {
        //int sum=0;
        string s;
        int k=0;
        gets(ch);
        //getchar();
        int len=strlen(ch);
        for(int i=0;i<len;i++)
        {
            if(ch[i]>='0'&&ch[i]<='9')
            {
                //sum=sum*10+ch[i]-'0';
                s=s+ch[i];
                k++;

            }
            else if(ch[i]>='A'&&ch[i]<='C')
            {
                //sum=sum*10+2;
                s=s+'2';
                k++;
            }
            else if(ch[i]>='D'&&ch[i]<='F')
            {
                //sum=sum*10+3;
                s=s+'3';
                k++;
            }
            else if(ch[i]>='G'&&ch[i]<='I')
                {s=s+'4';
                 k++;}
            else if(ch[i]>='J'&&ch[i]<='L')
                 {s=s+'5';
                    k++;
                 }
            else if(ch[i]>='M'&&ch[i]<='O')
                {s=s+'6';
                  k++;
                }
            else if(ch[i]=='P'||(ch[i]>='R'&&ch[i]<='S'))
                {s=s+'7';
                    k++;
                }
                else if(ch[i]>='T'&&ch[i]<='V')
                    {s=s+'8';
                      k++;
                    }
                else if(ch[i]>='W'&&ch[i]<='Y')
                    {s=s+'9';
                       k++;}

      if(k==3)
         {s=s+'-';
          k++;}
        }
//s=s+'\0';
//cout<<s;
    if(mp.find(s)==mp.end())
    {
        mp[s]=count++;

    }
    else
         c++;
       //cout<<mp[s]<<endl;
        a[mp[s]].s=s;
        a[mp[s]].sum++;
        //cout<<a[mp[s]].sum<<endl;

    }

    if(!c)
        printf("No duplicates.\n");
    else
    {
        sort(a,a+count,comp);
        for(int i=0;i<count;i++)

            //printf("%d-%d %d\n",a[i].num/10000,a[i].num%10000,a[i].sum);
            if(a[i].sum>1)
          cout<<a[i].s<<' '<<a[i].sum<<endl;
    }
     if(t)
        printf("\n");

     mp.clear();
     //s.clear();
}

    return 0;
}
