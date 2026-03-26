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
/*
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
}*/
// casting -> int-es muveletnel a muveletben valtoztatjuk at double-re hogy double eredményt kapjunk es ugyan ez forditva pl:
/*
int main()
{
    int szam1=5, szam2=2;
    double eredmeny;
    eredmeny=szam1/(double)szam2;
    printf("eredmeny= %lf\n", eredmeny);
    return 0;
}*/
// challenge 3
/*
int main()
{
    int szam1,szam2,szam3;
    double atlag;
    printf("add meg a szam1-et: ");
    scanf("%d",&szam1);
    printf("add meg a szam2-et: ");
    scanf("%d",&szam2);
    printf("add meg a szam3-et: ");
    scanf("%d",&szam3);
    atlag=((double)szam1+szam2+szam3)/3;
    printf("az atlaga= %.2lf\n",atlag);
    return 0;

}*/
// milestone hőfok
/*
int main()
{
    double celsius;
    double atvalto;
    printf("kerem a hofokot celsius fokban: ");
    scanf("%lf",&celsius);
    atvalto=(celsius*1.8)+32.0;
    printf("ennyi a hofok Fahenheit-ben: %.2lf\n",atvalto);
    return 0;
}*/
/*
int main()
{
    double fahrenheit;
    double atvalto;
    printf("kerem a hofokot fahrenheitben: ");
    scanf("%lf",&fahrenheit);
    atvalto=(fahrenheit-32)/1.8;
    printf("ennyi a hofok celsius fokban: %.2lf\n",atvalto);
    return 0;
}*/

//swap-> a,b ben van ertek, kell egy c valtozo oda atrakjuk az a valtozo erteket, utana a b erteket az a-ba vegul a c erteket a b-be. PL:
/*
int main()
{
    int a=10;
    int b=20;
    int csere;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    csere=a;
    a=b;
    b=csere;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}*/
// assignment

int main()
{
    double a=10.49;
    double b=40.03;
    double csere;
    printf("a=%.2lf\n",a);
    printf("b=%.2lf\n",b);
    csere=a;
    a=b;
    b=csere;
    printf("a=%.2lf\n",a);
    printf("b=%.2lf\n",b);
    return 0;

}

