#include<stdio.h>

int main()
{
    int n,s=0;
    printf("entrez un nombre :");//vous pouvez aussi  utiliser printf a la place de puts
    scanf("%d",&n);
    for( int i=1;i<n;i++)
    {
        if((n%i)==0)
        s+=i;
    }

 puts((s==n)?"c'est un nombre parfait":"ce nest pas un nombre parfait");
return 0;
}
