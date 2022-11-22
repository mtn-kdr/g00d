#include <stdio.h>

int main(){

int tip, ucret, gun, yol;


printf("Araba turu: \n");
scanf("%s",&tip);

printf("Kac gun kullandiniz: \n");
scanf("%d",&gun);

printf("Ne kadar yol yaptiniz: ");
scanf("%d",&yol);

switch(tip)
{
    case 'A':
    case 'a':
        ucret = gun*20+yol*18;
        break;

    case 'B':
    case 'b':
        ucret = gun*32+yol*22;
        break;

    case 'S':
    case 's':
        ucret = gun*43+yol*28;
        break;

    case 'P':
    case 'p':
        ucret = gun*51+yol*36;
        break;

default:
    break;
}

printf("Ucret: %d",ucret);
    return 0;
}