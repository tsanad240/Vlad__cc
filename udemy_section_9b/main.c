#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
// int->sima szám, double->tört, beolvasás-> scanf("%d vagy %lf,&neve az eltárolt adatnak)
    int szam;
    szam=10;
    printf("a szam: %d\n",szam);
    return 0;
}
*/
/*
int main()
{
    int szam;
    printf("add meg a szamot:");
    scanf("%d",&szam);
    printf("a szam: %d\n",szam);
    return 0;
}*/
// challenge 1
/*
int main()
{
    int kor;
    int mostani_ev;
    int szulev;
    printf("add meg a mostani evet: ");
    scanf("%d",&mostani_ev);
    printf("add meg az eletkorod: ");
    scanf("%d",&kor);
    szulev=mostani_ev-kor;
    printf("A szuletesi eved %d",szulev);
    return 0;
}
*/
// challenge 2
/*
int main()
{
    double a, b;
    double terulet;

    printf("teglalap a oldala: ");
    scanf("%lf",&a);
    printf("teglalap b oldala: ");
    scanf("%lf",&b);
    terulet=a*b;
    printf("a teglalap terulete: %.2f",terulet);
    return 0;

}
*/
// assignment

int main()
{
    double a, b;
    double kerulet;

    printf("add meg az a oldalt: ");
    scanf("%lf",&a);
    printf("add meg a b oldalt: ");
    scanf("%lf",&b);
    kerulet=2*(a+b);
    printf("a teglalap kerulete: %.2lf",kerulet);
    return 0;
}


