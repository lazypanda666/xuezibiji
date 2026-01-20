#include<stdio.h>

#define N 5

struct stu_type
{
    char num[20];
    char name[20];
    int score;
} stu[N],*t,*pstu[N];

int main()
{
    for(int i=0; i<N; i++)
        pstu[i]=&stu[i];
    for(int i=0; i<N; i++)
        scanf("%s%s%d", pstu[i]->num, pstu[i]->name, &pstu[i]->score);

    printf("\n");
    for(int i=0; i<N; i++)
        printf("%s %s %d\n", pstu[i]->num, pstu[i]->name, pstu[i]->score);


    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<N-i-1; j++)
        {
            if( pstu[j]->score < pstu[j+1]->score)
            {
                t=pstu[j+1];
                pstu[j+1]=pstu[j];
                pstu[j]=t;
            }
        }
    }


    printf("\n");
    for(int i=0; i<N; i++)
        printf("%s %s %d\n",pstu[i]->num,pstu[i]->name,pstu[i]->score);

    return 0;
}

