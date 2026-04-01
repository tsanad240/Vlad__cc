#include <stdio.h>
#include <stdlib.h>
//pelda 1
/*
int main()
{
    int jegy;
    printf("Add meg a szazalekot: ");
    scanf("%d",&jegy);
    if (jegy>=60)
        printf("Gratulalok");
    else
        printf("megbuktal, probald ujra");
    return 0;
}*/
//pelda 2
/*
int main()
{
    int szam1;
    int szam2;
    printf("Kerem szam1-et: ");
    scanf("%d",&szam1);
    printf("Kerem szam2-t: ");
    scanf("%d",&szam2);
    if (szam1>szam2)
        printf("a nagyobb szam: %d",szam1);
    else
        printf("a nagyobb szam: %d",szam2);
    return 0;
}*/
// paros/paatlan
/*
int main()
{
    int szam;
    printf("adj meg egy szamot: ");
    scanf("%d",&szam);
    if (szam%2==0)
        printf("%d paros szam\n",szam);
    else
        printf("%d paratlan szam\n", szam);
        return 0;
}*/
// min/max
/*
int main()
{
	float szaml, szam2;
	printf("Add meg az elso szamot: ");
	scanf("%f", &szaml);
	printf("Add meg a masodik szamot: ");
	scanf("%f", &szam2);
	if (szaml > szam2)
	{
		printf("max = %f \n", szaml);
		printf("min = %f \n", szam2);
	}
	else
	{
		printf("max = %f \n", szam2);
		printf("min = %f \n", szaml);
	}
	return 0;
}*/
// min/max 3 valtozo kozul
/*
int main()
{
    int szam1, szam2, szam3;
    int max, min;
    printf("Add meg az elso szamot: ");
    scanf("%d", &szam1);
    printf("Add meg a masodik szamot: ");
    scanf("%d", &szam2);
    printf("Add meg a harmadik szamot: ");
    scanf("%d", &szam3);
    max = szam1;
    min = szam2;
    if (szam1 < szam2)
    {
        max = szam2;
        min = szam1;
    }
    if (max < szam3)
        max = szam3;
    if (szam3 < min)
        min = szam3;
    printf("max 3 szam kozul = %d\n", max);
    printf("min 3 szam kozul = %d\n", min);
    return 0;
}*/

// tobb if-es
/*
int main()
{
    int szazalek;
    printf("add meg a szazalekot: ");
    scanf("%d",&szazalek);
    if (szazalek>=80)
        printf("szep munka");
    else if (szazalek>=60)
        printf("Gyakorolj tobbet de jo lesz");
    else
        printf("ezt elszurtad");
    return 0;
}*/
// AND es OR:  AND jele: &&, OR jele: ||
// pelda
/*
int main()
{
	int penz;
	int szazalek;
	printf("add meg a penzt(dollarban) es a szazalekot: ");
	scanf("%d%d", &penz, &szazalek);
	if (penz < 50 && szazalek > 90)
		printf("teljesul az and\n");
	if (penz < 50 || szazalek > 90)
		printf("teljesul az or\n");
	if (!(szazalek > 80))
		printf("nem szep munka \n");
	return 0;
}*/
// switch
//pelda
/*
int main()
{
    char jegy;
    printf("Add meg a jegyed (A-F) : ");
    scanf("%c", &jegy);
    switch (jegy)
    {
    case 'A': //
        printf("a szazalek 90-100 kozott van \n");
        break;
    case 'B':
        printf("a szazalek 80-89 kozott van \n");
        break;
    case 'C':
        printf("A szazalek 70-79 kozott van \n");
        break;
    case 'D':
        printf("a szazalek 60-69 kozott van \n");
        break;
    default:
        printf("Hiba! \n");
        break;
    }
    return 0;
}*/
// milestone extra szamologep

int main()
{
    int szam1, szam2;
    char matekegyenlet;
    printf("Melyiket szeretned hasznalni ('+', '-', ..): ");
    scanf("%c", &matekegyenlet);
    printf("add meg szam1-et: ");
    scanf("%d", &szam1);
    printf("add meg szam2-t: ");
    scanf("%d", &szam2);

    switch (matekegyenlet)
    {
    case '+':
        printf("%d %c %d = %d\n", szam1, matekegyenlet, szam2, szam1 + szam2);
        break;
    case '-':
        printf("%d %c %d = %d\n", szam1, matekegyenlet, szam2, szam1 - szam2);
        break;
    case '*':
        printf("%d %c %d = %d\n", szam1, matekegyenlet, szam2, szam1 * szam2);
        break;
    case '/':
        if (szam2 == 0)
            printf("Nullaval nem lehet osztani! \n");
        else
            printf("%d %c %d = %d\n", szam1, matekegyenlet, szam2, szam1 / szam2);
        break;
    case '%':
        if (szam2 == 0)
            printf("Nullaval meg mindig nem lehet osztani! \n");
        else
            printf("%d %c %d = %d\n", szam1, matekegyenlet, szam2, szam1 % szam2);
        break;
    default:
        printf("nem lehetseges \n");
        break;
    }
}
