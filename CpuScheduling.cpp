#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

struct data
{
    int  index;
    int waitingTime;
    int BurstTime;
    int ArrivalTime;
    int TurnArroundTime;
    int priority;
};
bool comp1(data p, data q)
{

    return p.ArrivalTime<q.ArrivalTime;

}
bool comp2(data p,data q)
{

    return p.BurstTime<q.BurstTime;

}
bool comp3(data p, data q)
{
    return p.priority>q.priority;

}
queue<int>qu;
int quantam;
void call(int element, int process,int exist[],data e[]);
int main()
{
    int process;
    printf("Enter The Number of Process\n");
    scanf("%d",&process);

    data e[process];
    ;
    int number;

    do
    {
        printf("Cpu Scheduling Menue:\n");
        printf("1. FCFS\n");
        printf("2. SJF\n");
        printf("3. Priority\n");
        printf("4. Round-Robin\n");
        printf("Press 0 to exit\n");

        scanf("%d",&number);

        switch(number)
        {

        case 1:
        {
            for(int i=0; i<process; i++)
            {
                printf("Give ArrivalTime for process- %d \n",i+1);
                e[i].index=i;
                scanf("%d",&e[i].ArrivalTime);
                printf("Give BurstTime for process- %d \n",i+1);
                scanf("%d",&e[i].BurstTime);

            }
            sort(e,e+process,comp1);
            e[0].waitingTime=0;
            e[0].TurnArroundTime=e[0].BurstTime;
            for(int i=1; i<process; i++)
            {
                if(e[i-1].ArrivalTime+e[i-1].BurstTime-e[i].ArrivalTime<0)
                {
                    e[i].waitingTime=0;
                    e[i].TurnArroundTime=e[i].BurstTime;
                }
                else
                {

                    e[i].waitingTime=e[i-1].ArrivalTime+e[i-1].BurstTime-e[i].ArrivalTime;
                    e[i].TurnArroundTime=e[i].waitingTime+e[i].BurstTime;

                }



            }
            double sum=0,sum1=0;
            for(int i=0; i<process; i++)
            {
                printf("Process p%d is Running...\n",i+1);
                for(int k=0; k<10000000; k++)
                    ;
                printf("Process p%d is Finished...\n",i+1);

                printf("WaitingTime for process:%d is %d\n",e[i].index+1,e[i].waitingTime);
                printf("TurnArroundTime for process:%d is d\n\n\n",e[i].index+1,e[i].TurnArroundTime);

                sum+=e[i].TurnArroundTime;
                sum1+=e[i].waitingTime;

            }
            printf("Average TurnArround time is: %lf\n",sum/process);
            printf("Average Waiting time is: %lf\n",sum1/process);



            break;
        }
        case 2:
        {
            int sum=0;
            int sum1=0;
            for(int i=0; i<process; i++)
            {
                e[i].index=i;
                printf("Give BurstTime for process- %d \n",i+1);
                scanf("%d",&e[i].BurstTime);

            }
            sort(e,e+process,comp2);
            e[0].waitingTime=0;
            e[0].TurnArroundTime=e[0].BurstTime;
            for(int i=1; i<process; i++)
            {

                e[i].waitingTime=e[i-1].BurstTime+e[i-1].waitingTime;
                e[i].TurnArroundTime=e[i].waitingTime+e[i].BurstTime;

            }
            for(int i=0; i<process; i++)
            {

                printf("Process p%d is Running...\n",e[i].index+1);
                for(int k=0; k<10000000; k++)
                    ;
                printf("Process p%d is Finished...\n",e[i].index+1);


                printf("WaitingTime for process:%lf is %d\n",e[i].index+1,e[i].waitingTime);
                printf("TurnArroundTime for process:%lf is %d\n\n\n",e[i].index+1,e[i].TurnArroundTime);

                sum+=e[i].TurnArroundTime;
                sum1+=e[i].waitingTime;

            }
            printf("Average TurnArround time is: %lf\n",sum/process);
            printf("Average Waiting time is: %lf\n",sum1/process);



            break;
        }
        case 3:
        {

            for(int i=0; i<process; i++)
            {
                printf("Give Priority for process %d \n",i+1);
                e[i].index=i;
                scanf("%d",&e[i].priority);
                printf("Give BurstTime for process %d \n",i+1);
                scanf("%d",&e[i].BurstTime);

            }
            sort(e,e+process,comp3);
            e[0].waitingTime=0;
            e[0].TurnArroundTime=e[0].BurstTime;
            for(int i=1; i<process; i++)
            {

                e[i].waitingTime=e[i-1].BurstTime+e[i-1].waitingTime;
                e[i].TurnArroundTime=e[i].waitingTime+e[i].BurstTime;



            }
            double sum=0,sum1=0;
            for(int i=0; i<process; i++)
            {
                printf("Process p%d is Running...\n",e[i].index+1);
                for(int k=0; k<100000000; k++)
                    ;
                printf("Process p%d is finished!!\n",e[i].index+1);
                printf("WaitingTime for process:%d is %d\n",e[i].index+1,e[i].waitingTime);
                printf("TurnArroundTime for process:%d is %d\n\n\n",e[i].index+1,e[i].TurnArroundTime);

                sum+=e[i].TurnArroundTime;
                sum1+=e[i].waitingTime;

            }
            printf("Average TurnArround time is: %lf\n",sum/process);
            printf("Average Waiting time is: %lf\n",sum1/process);



               break;

        }
        case 4:
        {
            int  exist[process];
            double sum=0,sum1=0;
            memset(exist,0,sizeof(exist));

            for(int i=0; i<process; i++)
            {
                qu.push(i);
                printf("Give Burst Time for proces p%d:\n",i);
                scanf("%d",&e[i].BurstTime);
                sum1+=e[i].BurstTime;
                e[i].waitingTime=0;

            }
            printf("Give Time Quantam...\n");
            scanf("%d",&quantam);
            while(!qu.empty())
            {

                int top=qu.front();
                qu.pop();
                call(top,process,exist,e);


            }

            for(int i=0; i<process; i++)
            {
                sum+=e[i].waitingTime;


            }
            sum1+=sum;

            printf("Average Waiting Time is: %lf\n",sum/process);
            printf("Average TurnAround TIme is : %lf \n",sum1/process);

           break;
        }
        default:
            break;

        }

        for(int i=0; i<process; i++)
        {
            e[i].TurnArroundTime=0;
            e[i].waitingTime=0;

        }


    }
    while(number!=0);




    return 0;
}

void call(int element,int process,int exist[],data e[])
{
    int tm;
    printf("process%d is Runing.......\n\n",element);

    if(e[element].BurstTime-quantam<=0)
        tm=e[element].BurstTime;
    else
        tm=quantam;
    for(int i=0; i<100000000*tm; i++)
        ;

    if(e[element].BurstTime-quantam<=0)
    {
        e[element].BurstTime=0;
        exist[element]=1;
        printf("process%d is Finished.......\n\n",element);

    }
    else
    {
        e[element].BurstTime=e[element].BurstTime-tm;
        qu.push(element);
    }
    for(int i=0; i<process; i++)
    {
        if(i==element)
            continue;



        if(exist[i]==0)
        {
            //printf("okok");
            e[i].waitingTime+=tm;


        }
        //printf("Asche!");
    }


    return;
}
