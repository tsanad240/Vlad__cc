#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int szam, hanyadikra;
    printf("add meg a szamot: ");
    scanf("%d",&szam);
    printf("hanyadikra szeretned emelni a szamot: ");
    scanf("%d",&hanyadikra);
    printf(" szam^hanyadikra: %d",szam*szam*....*szam);
}*/
/*
int main()
{
    int szam=1;
    while(szam<10)
    {
        printf("*");
        szam=szam+1;
    }
    return 0;
}
*/
/*
int main()
{
    int darab;
    int szam=1;
    printf("add meg hany csillag legyen: ");
    scanf("%d",&darab);
    while(szam<=darab)
    {
        printf("*");
        szam=szam+1;
    }
    return 0;

}*/

/*
int main()
{
    int i=1;
    int szam, hanyadikra;
    int eredmeny=1;
    printf("add meg a szamot: ");
    scanf("%d",&szam);
    printf("hanyadikra szeretned emelni a szamot: ");
    scanf("%d",&hanyadikra);
    while (i<=hanyadikra)
    {
        eredmeny=eredmeny*szam;
        i++;
    }
    printf("az eredmeny: %d",eredmeny);
    return 0;

}*/
// milestone
/*
int main()
{
    int szazalek;
    int osszes=0;
    int szazalekdarab=0;
    printf("add meg a jegyeid vagy allitsd le a programot -1-el: ");
    scanf("%d",&szazalek);
    while (szazalek != -1)
    {
        osszes=osszes+szazalek;
        szazalekdarab++;
        printf("add meg a jegyeid vagy allitsd le a programot -1-el");
        scanf("%d",&szazalek);
    }
    if (szazalekdarab!=0)
        printf(" az atlagod %f",(float)osszes/szazalekdarab);
    else
        printf("nincs jegyed");

    return 0;
}*/
// vlad pelda a do while-ra, akkor jo ha ugyan az az utasitas whileon kivul es belul
/*
int main()
{
    int price, totalPrice = 0;
    do {
        printf("Please enter a price: ");
        scanf("%d", &price);
        totalPrice = totalPrice + price;
    } while (price != 0);

    printf("Total Order Price = %d \n", totalPrice);
    return 0;
}*/
// Segitseg
/*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*/

int main()
{
    int szazalek;
    do {
        printf(" add meg  szazalekod: ");
        scanf("%d",&szazalek);
    }while (szazalek <=0 && szazalek>=100);
    // while(szazalek<0 || szazalek>100)
    printf("Koszonom! %d szazalekot adta meg ami helyes\n",szazalek);
    return 0;
}
/*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*/
// vlad peldaja a for- ra
/*
int main()
{
	int num;
	int i;

	printf("Hello! Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d ", i);
	}
	return 0;

}*/

/*
int main()
{
    int szam, hanyadikra, i;
    int eredmeny = 1;
    printf("add meg a szamot: ");
    scanf("%d",&szam);
    printf("hanyadikra szeretned emelni a szamot: ");
    scanf("%d",&hanyadikra);
    for(i=1; i<=hanyadikra;i++)
    {
        eredmeny=eredmeny*szam;
    }
    printf("az eredmeny %d",eredmeny);
    return 0;

}*/
/*
int main()
{
    int i;
    int darab=1000;
    for(i=1;i<=darab;i++)
    {
        printf("Sajnalom tanarur!, Tobbet gyakorolok\n");
    }
    return 0;
}*/
/*
int main()
{
    int i, j, n;
    printf( "add meg n-t: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
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
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",i);
        printf("\n");
    }
    return 0;
}*/
/*
int main()
{
    int cent=1;
    int ido=30;
    int i;
    float dollar;
    for(i=1;i<=ido;i++)
    {
        //printf("%d nap, %d cented van\n",i,cent);
        cent=cent*2;
    }
    dollar=cent/100;
    printf(" ennyi dollarod lesz a vegere: %.2f\n",dollar);
    if(dollar<1000000)
    {
        printf("Az azonnali 1 milka jobban megeri");
    }
    else if (dollar>1000000)
    {
        printf("A duplazodo eri meg jobban");
    }
    else
        printf("mindegy melyiket valasztod");
    return 0;
}
*/
