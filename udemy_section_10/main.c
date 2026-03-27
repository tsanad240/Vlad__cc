#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// sorozat challenge 1
// 9.tag kell
/*
int main()
{
    double a1;
    double d;
    int n;
    double n_tag;
    printf("add meg a1-et: ");
    scanf("%lf",&a1);
    printf("add meg d-t: ");
    scanf("%lf",&d);
    printf("add meg n-t: ");
    scanf("%d",&n);
    n_tag=a1+(n-1)*d;
    printf("a sorozat 9-ik tagja: %.2lf\n",n_tag);
    return 0;
}*/
// Sn tag
/*
int main()
{
    double a1;
    double an;
    int n;
    double Sn;
    printf("add meg a1-et: ");
    scanf("%lf",&a1);
    printf("add meg an-t: ");
    scanf("%lf",&an);
    printf("add meg n-t: ");
    scanf("%d",&n);
    Sn=(a1+an)*n/2;
    printf("Sn erteke: %.2lf\n",Sn);
    return 0;
}*/
// fizetés számláló
/*
int main()
{
    double oraber;
    int dolgozott_ora;
    double haviber;
    printf("Mennyi az orabered: ");
    scanf("%lf",&oraber);
    printf("Mennyit dolgoztal a honapban: ");
    scanf("%d",&dolgozott_ora);
    haviber=oraber*dolgozott_ora;
    printf("ennyi a havibered: %.2lf",haviber);
    return 0;
}*/

// autó
/*
int main()
{
    int s=300000;
    double v_km=75;
    double v_m;
    double perc;
    printf("ennyi a tav: %d\n",s);
    printf("ennyivel megy az auto: %.1f\n",v_km);
    v_m=v_km/3.6;
    perc=s/v_m/60;
    printf("ennyi ido volt percben: %.2f",ido);
    return 0;
}
*/
/*
int main()
{
    int masodperc;
    int ora,perc,maradek_masodpec;
    printf("add meg a masodpercet: ");
    scanf("%d", &masodperc);
    ora = masodperc / 3600;
    perc = (masodperc - ora * 3600) / 60;
    maradek_masodpec = (masodperc - ora * 3600) % 60;
    printf("osszes ora: %d\n", ora);
    printf("osszes perc: %d\n", perc);
    printf("osszes masodperc: %d\n", maradek_masodpec);
    return 0;
}*/

// levalasztas
/*
int main()
{
    float data;
    float float_resz;
    printf("add meg a szamot: ");
    scanf("%f",&data);
    printf("az int resze: %d\n",(int)data);
    float_resz=data-(int) data;
    printf("ez a tizedestort resze: %.2f\n",float_resz);
    return 0;
}*/
// szamjegyek
/*
int main()
{
    int szam;
    int szazas;
    int tizes;
    int egyes;
    printf("adj meg egy 3 jegyu szamot: ");
    scanf("%d",&szam);
    egyes= szam %10;
    szazas= szam /100;
    tizes=(szam/10)%10;
    printf("az elso szamjegye: %d\n",szazas);
    printf("az masodik szamjegye: %d\n",tizes);
    printf("az harmadik szamjegye: %d\n",egyes);
    printf("osszeguk: %d",szazas+tizes+egyes);
    return 0;
}*/
/*
int main()
{
    int szam;
    int szazas;
    int tizes;
    int egyes;
    int forditott;
    printf("adj meg egy 3 jegyu szamot: ");
    scanf("%d",&szam);
    egyes= szam %10;
    szazas= szam /100;
    tizes=(szam/10)%10;
    forditott= egyes;
    forditott= forditott*10 +tizes;
    forditott=forditott*10+szazas;
    printf("forditva %d%d%d\n",egyes,tizes,szazas);
    // vagy
    printf("forditva: %d",forditott);
    return 0;
}*/
// koordinata
// gyokvonas parancs sqrt
/*
int main()
{
    float x1,x2,y1,y2;
    float tavolsag;
    printf("Add meg x1-et: ");
    scanf("%f",&x1);
    printf("Add meg y1-et: ");
    scanf("%f",&y1);
    printf("Add meg x2-et: ");
    scanf("%f",&x2);
    printf("Add meg y2-et: ");
    scanf("%f",&y2);
    tavolsag= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf(" a ket pont tavolsaga: %.2f ",tavolsag);
    return 0;
}*/
// hatvanyozas

int main()
{
    int x;
    int x2,x4,x6,x8;
    printf("mennyi az x: ");
    scanf("%d",&x);
    x2=x*x;
    x4=x2*x2;
    x6=x4*x2;
    x8=x4*x4;
    printf("x a masodikon: %d\n",x2);
    printf("x a negyediken: %d\n",x4);
    printf("x a hatodikon: %d\n",x6);
    printf("x a nyolcadikon: %d\n",x8);
    return 0;
}
