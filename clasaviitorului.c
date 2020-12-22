#include<stdio.h>

int n,start[100],stop[100],nr[100];
int main()
{
    int i,m,h, schimb, aux, ultim;
    printf("dati numarul de activitati:");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        nr[i] = i+1;
        printf("ora de inceput pentru activitatea %d (hh mm) = ", i);
        scanf("%d %d",&h,&m);
        start[i] = h * 60 + m; //pentru fiecare activitate transformam ora de inceput in minute
        printf("ora de sfarsit pentru activitatea %d (hh mm) = ", i);
        scanf("%d %d",&h,&m); //pentru fiecare activitatea transformam ora de sfarsit in minute
        stop[i] = h * 60 + m;
    }
    // ordonarea activităților crescator dupa ora de final
    do
        {
            schimb = 0;
            for(i = 0; i < n-1; i++)
            if(stop[nr[i]] > stop[nr[i+1]])
            {
                aux = nr[i];
                nr[i] = nr[i+1];
                nr[i+1] = aux;
                schimb = 1;
            }
        }
        while(schimb);
        printf("Activitatile selectate sunt:");
        for(ultim = 0,i = 1; i < n; i++)
        if(start[nr[i]] >= stop[nr[ultim]]) // selectam activitățile ce ne avantajeaza
        {
            printf("%d ",nr[i]+1); ultim = i;
        }
printf("\n");
return 0;
}
