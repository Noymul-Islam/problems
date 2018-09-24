#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

int  bp[100][100],match[100],seen[100];
  bool bpm(int u);
  int maxbpm();
 int n,m;
  int main()
  {

      cin>>n>>m;
      for(int i=0;i<m;i++)
      {
          for(int j=0;j<n;j++)
          {
              scanf("%d",&bp[i][j]);
          }
      }

      int res=maxbpm();
      printf("%d\n",res);
      return 0;
  }
// Returns maximum number of matching from M to N
int maxbpm()
{// An array to keep track of the applicants assigned to
    // jobs. The value of matchR[i] is the applicant number
    // assigned to job i, the value -1 indicates nobody is
    // assigned.which is globally declared called match

    // Initially all jobs are available
    memset(match,-1,sizeof(match));
    int  res=0;
    for(int u=0;u<m;u++)
    {
        // Mark all jobs as not seen for next applicant.
        memset(seen,0,sizeof(seen));
        if(bpm(u))
              res++;
    }
    return res;
}



// A DFS based recursive function that returns true if a
// matching for vertex u is possible
bool bpm(int u)
{

    // Try every job one by one
    for(int v=0;v<n;v++)
    {
        // If applicant u is interested in job v and v is
        // not visited
        if(bp[u][v]&&!seen[v])
        {
            seen[v]=1;
            // If job 'v' is not assigned to an applicant OR
            // previously assigned applicant for job v (which is matchR[v])
            // has an alternate job available.
            // Since v is marked as visited in the above line, matchR[v]
            // in the following recursive call will not get job 'v' again
            if(match[v]<0||bpm(match[v]))
            {
                match[v]=u;
                return true;
            }

        }

    }
    return false;
}
