#include <stdio.h>
#include <stdlib.h>

//feladat 1
/*
int main()
{
    int szam1, szam2;
    printf("add meg a szaml-et: ");
    scanf("%d", &szam1);
    printf("add meg a szam2-t: ");
    scanf("%d", &szam2);
    if (szam1 == szam2)
        printf("a ket szam egyenlo\n");
    else
        printf("a ket szam nem egyenlo\n");
    return 0;
}*/

// feladat 2
/*
int main()
{
    int szam;
    printf("adj meg egy szamot: ");
    scanf("%d", &szam);
    if (szam >= 10 && szam <= 99)
        printf("ez egy ketjegyu szam");
    else if (szam >= 100 && szam <= 999)
        printf("ez egy haromjegyu szam");
    else
        printf("ez a szam sem 2 sem 3 jegyu'\n");
    return 0;
}*/

//feladat 3
/*
int main()
{
    int szam;
    printf("adj meg egy szamot (pozitiv vagy negativ): ");
    scanf("%d", &szam);
	if (szam < 0)
        printf("az abszolut erteke %d", (-1) * szam);
    else
        printf("az abszolut erteke %d", szam);

    return 0;
}*/

//feladat 4
/*
int main()
{
    int x, y;
    printf("add meg x-et es y-t: ");
    scanf("%d%d",&x,&y);
    if (x>0 && y>0)
        printf("ez a koordinata rendszer elso negyedeben lesz", x, y);
    else if (x < 0 && y > 0)
        printf("ez a koordinata rendszer masodik negyedeben lesz", x, y);
    else if (x < 0 && y < 0)
        printf("ez a koordinata rendszer harmadik negyedeben lesz", x, y);
    else if (x > 0 && y < 0)
        printf("ez a koordinata rendszer negyedik negyedeben lesz", x, y);
    else
        printf("ez a pont az origoban van");

	return 0;
}*/

// feladat 5
/*
int main()
{
    int honap;
    printf("add meg a honap szamat: ");
    scanf("%d", &honap);
    switch (honap)
    {
    case 1:
        printf("Januar\n");
        break;
    case 2:
        printf("Februar\n");
        break;
    case 3:
        printf("Marcius\n");
        break;
    case 4:
        printf("Aprilis\n");
        break;
    case 5:
        printf("Majus\n");
        break;
    case 6:
        printf("Junius\n");
        break;
    case 7:
        printf("Julius\n");
        break;
    case 8:
        printf("Augusztus\n");
        break;
    case 9:
        printf("Szeptember\n");
        break;
    case 10:
        printf("Oktober\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default:
        printf("Nincs ilyen honap");
        break;
    }
    return 0;
}*/

// feladat 6
/*
int main()
{
    int mp;
    int ora, perc, maradek_mp;
    printf("add meg a masodpercet: ");
    scanf("%d", &mp);
    ora = mp /3600;
    perc = (mp - ora * 3600) / 60;
    maradek_mp = (mp - ora * 3600) % 60;
    if (ora < 10)
        printf("0");
    printf("%d : ", ora);
    if (perc < 10)
        printf("0");
    printf("%d : ", perc);
    if (maradek_mp < 10)
        printf("0");
    printf("%d\n", maradek_mp);
    return 0;
}*/

// feladat 7
/*
int main()
{
    int a, b, c;
    printf("add meg a-t, b-t, c-t: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0 || b == 0 || c == 0)
        printf("Nullaval nem lehet osztani");
    else if ((a % b == 0 || b % a == 0) && (b % c == 0 || c % b == 0) && (a % c == 0 || c % a == 0))
        printf("oszthato szamok");
    else
        printf("ne oszthato szamok");
    return 0;
}*/

// feladat 8
/*
int main()
{
    int ev;
    printf("add meg az evet: ");
    scanf("%d", &ev);
    if (ev % 400 == 0)
        printf("%d szokoev volt", ev);
    else if (ev % 100 == 0)
        printf("%d nem volt szokoev", ev);
    else if (ev % 4 == 0)
        printf("%d szokoev volt", ev);
    else
        printf("%d nem volt szokoev", ev);
    return 0;
}*/

// feladat 9

int main()
{
    int nap, honap, ev;
    int szokoev = 0;

    printf("add meg a napot: ");
    scanf("%d", &nap);

    printf("add meg a honapot: ");
    scanf("%d", &honap);

    printf("add meg az evet: ");
    scanf("%d", &ev);
    if (honap == 2)
        if (ev % 4 == 0 && (ev % 100 != 0 || ev % 400 == 0))
            szokoev = 1;

    nap += 1;

    switch (honap)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (nap <= 31)
            break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (nap <= 30)
            break;
    case 2:
        if (nap <= 29 && szokoev == 1)
            break;
        else if (nap <= 28)
            break;
    default:
        nap = 1;
        honap += 1;
        if (honap > 12)
        {
            honap = 1;
            ev += 1;
        }
    }
        printf("A kovetkezo nap: %d/ %d/ %d\n", nap, honap, ev);
    }
