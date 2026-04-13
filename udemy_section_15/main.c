#include <stdio.h>
#include <stdlib.h>

/*
bit-> lehet 0,1
erteket mutat
byte 8db bit pl: 01101110

decimalis:
0-9
10es alapu
pl:2463 = 2*10^3+4*10^2+6*10^1+3*10^0
helye a szamnak-> hogy hanyadikon van a 10
formula: szamjegy*alap^hely

binaris:
2es alapu
0-1
dec: 0, 1, 2, 3, 4, 5, 6, 7, ...
 |
 V
bin: 0, 1,10,11,100,101,110,111,...
mindig 2esevel tolti fel
atvaltas dec-be:
ugyan az a formula: szamjegy*alap^hely
pl: 1101=1*2^3+1*2^2+0*2^1+1*2^0 = 13

GYAKORLAS:

137=1*10^2+3*10^1+7*10^0
bin-bol atvaltas dec-be
101= 1*2^2+0*2^1+1*2^0=5

11010= 1*2^4+1*2^3+0*2^2+1*2^1+0*2^0=16+8+0+2+0=26
also indexben kell jelezni az alapot

dec-bol atvaltas bin-be:
van egy x szam
el kell osztani es a maradekot hozzarakjuk a bin szamhoz
addig ismetelni amig x nem nulla
hatulrol kell feltolteni
pl:bin szam=..1
5/2=2(1)
bin szam=.01
2/2=1(0)
bin szam=101
1/2=0(1)

pl: 11
11/2=5(1)
5/2=2(1)
2/2=1(0)
1/2=0(1)
bin szam=1011

pl: 23
23/2=11(1)
11/2=5(1)
5/2=2(1)
2/2=1(0)
1/2=0(1)
23=10111

54
54/2=27(0)
27/2=13(1)
13/2=6(1)
6/2=3(0)
3/2=1(1)
1/2=0(1)
54=110110

15
15/2=7(1)
7/2=3(1)
3/2=1(1)
1/2=0(1)
15=1111

345
345/2=172(1)
172/2=86(0)
86/2=43(0)
43/2=21(1)
21/2=10(1)
10/2=5(0)
5/2=2(1)
2/2=1(0)
1/2=0(1)
345=101011001

700
700/2=350(0)
350/2=175(0)
175/2=87(1)
87/2=43(1)
43/2=21(1)
21/2=10(1)
10/2=5(0)
5/2=2(1)
2/2=1(0)
1/2=0(1)
700=1010111100

HEXADECIMALIS:
16os alap
0-9 utana A-F
pl: 26=1A

hex-bol atvaltas dec-be
ugyan az a formula: szamjegy*alap^hely
pl: 2A3=2*16^2+10*16^1+3*16^0=512+160+3=675

GYAK:

123= 1*16^2+2*16^1+3*16^0=291
2F= 2*16^1+15*16^0=47
000F=0*16^3+...+15*16^0=15
A2=10*16^1+2*16^0=162
ABCD= 10*16^3+11*16^2+12*16^1+13*16^0=43 981

dec atvaltas hex-be:
van x szam
elosztjuk 16 al, a maradek alkotja a szamot
addig amig x nem 0
harulrol kell feltolteni

pl: 123
123/16=7(11)
7/16=0(7)
123=7B

GYAK:

23
23/16=1(7)
1/16=0(1)
23=17

54
54/16=3(8)
3/16=0(3)
54=38

15
15/16=0(15)
15=F

345
345/16=21(9)
21/16=1(5)
1/16=0(1)
345=159

700
700/16=43(12)
43/16=2(11)
2/16=0(2)
700=2BC

hex atvaltas bin-be:
mind a ketto 2es alapu

pl:2A3 -> mindegyik szamjegyet 4 bittel tudunk jelolni
jelen esetben a 2 az elso 4, A a masodik 4 es 3 az utolso 4
vannak vezeto 0-ak
pl:hex 3 -> bin (00)11
az elso pelda eseteben 0010 1010 0011

GYAK:
123=0001 0010 0011
2F= 0010 1111
000F= 0000 0000 0000 1111
A2= 1010 0010
ABCD= 1010 1011 1100 1101

bin atvaltas hex-be:
jobbrol 4esbe csoportositjuk
pl: 1101 0110= 13 es 6=D6

GYAK:
0110 1101= 6D
11 1111 1011= 0011 1111 1011=3FB
00011=0000 0011=03
101010101010101011=0010 1010 1010 1010 1011=2AAAB
0000110000100111000=0000 0110 0001 0011 1000=06138

ASCII tablazat:
karakterek
szimbolum
pl: nagy/kis(a-z | A-Z)
szamok (0-9)
pontok (;,.;...)
stb
pl: dec 33->!
dec 48-57ig ASCII kod 0-9
65-90ig A-Z az ASCII kod
97-122ig a-z az ASCII kod
*/

// gyakorlatban
/*
int main()
{
    char karakter='a';

    printf("karakter: %c\n",karakter);
    printf("Decimalis ASCII kod %d\n",karakter);
    printf("Hex ASCII kod %X\n",karakter);
    return 0;
}*/
/*
int main()
{
    char karakter='O';

    printf("karakter: %c\n",karakter);
    printf("Decimalis ASCII kod %d\n",karakter);
    printf("Hex ASCII kod %X\n",karakter);
    return 0;
}*/

int main()
{
    int nap;
    int honap;
    int ev;
    printf("adj meg egy evet: \n");
    scanf("%d",&ev);
    printf("adj meg egy honapot: \n");
    scanf("%d",&honap);
    printf("adj meg egy napot: \n");
    scanf("%d",&nap);
    printf("Az datum hex alakban: 0x%X:0x%X:0x%X",ev,honap,nap);
    return 0;
}
