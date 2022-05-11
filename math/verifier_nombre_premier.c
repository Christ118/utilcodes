#include<stdio.h>

int main()
{
    int n,p=0;
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
        if(n%i==0)
        {
            p=1;
            break; //le  mot cle break  permet de sortir  d'une  boucle
        }
        (!p)?puts("cest un nombre  premier"):puts("ce n'est  pas un nombre premier");
    return 0;

}
