#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int szam;
    int i;
    printf("add meg a szamot: ");
    scanf("%d",&szam);
    for (i=1;i<=szam;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for (i=szam;i>=1;i--)
    {
        printf("%d ",i);
    }
    return 0;
}*/
/*
int main()
{
    int szamig_osszeg=0;
    int szam;
    int i;
    printf("add meg a szamot: ");
    scanf("%d",&szam);
    for (i=1;i<=szam;i++)
    {
        szamig_osszeg=szamig_osszeg+i;
    }
    printf(" az eredmeny: %d",szamig_osszeg);
    return 0;
}*/
/*
int main()
{
    int szam;
    int eredmeny=1;
    int i;
    printf("add meg a szamot: ");
    scanf("%d",&szam);
    for (i=1;i<=10;i++)
    {
        eredmeny=i*szam;
        printf("%d * %d = %d\n",szam,i,eredmeny);
    }
    return 0;
}
*/
/*
int main()
{
    int i=2;
    int szam;
    printf("add meg a szamot: ");
    scanf("%d",&szam);
    /*for (i=2;i<=szam;i=i+2)
    {
        printf("%d ",i);
    } rossz *//*
    while (szam>0)
    {
        printf("%d ",i);
        i+=2;
        szam=szam-1;
    }
    return 0;
}
*/
/*
int main()
{
    int i, j, n;
    printf( "add meg n-t: ");
    scanf("%d",&n);
    for()
        while (n>0)
        {
            printf(" .");
            n--;
        }
}*/

int main()
{
    int i,j,k;
    int space;
    int n;
    int jelenlegi_ertek=1;
    printf("add meg n-t: ");
    scanf("%d",&n);
    space=n-1;
    for (i=1;i<=n;i++)
    {
        for (k=space;k>=1;k--){
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d ",jelenlegi_ertek);
            jelenlegi_ertek+=1;

        }
    printf("\n");
    space--;
    }
    return 0;
}
