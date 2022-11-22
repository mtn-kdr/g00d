#include <stdio.h>
#include <stdlib.h>

int main(){

int honda=0, ford=0, mazda=0, renault=0, marka=0, sayi;
float tutar=0 ,ht=0, ft=0, rt=0,mt=0;

do
{ 

    printf("Marka, tutar giriniz: ");
    scanf("%d %f",&marka,&tutar);

    switch (marka)
        {
            case 1:
                rt=+tutar;           
                renault= renault+1;
                break;

            case 2:
                mt+=tutar;
                mazda=mazda+1;
                break;

            case 3:
                ht+=tutar;
                honda=honda+1;
                break;

            case 4:
                ft+=tutar;
                ford=ford+1;
                break;

            case 111:
                printf("--------PROGRAM SONA ERDI--------");
                break;
        }
       

} while (marka != 111 && tutar != 0);



    if (mazda<renault && ford < renault && honda<renault)
    {
        printf("\nEn cok gelen arac: Renault(%d)",renault);

    }
    else if (mazda < ford && renault < ford && honda < ford)
    {
        printf("\nEn cok gelen arac: Ford(%d)",ford);

    }

    else if (ford < mazda && renault < mazda && honda < mazda)
    {
        printf("\nEn cok gelen arac: mazda(%d)",mazda);

    }

    else if (mazda < honda && renault < honda && ford < honda)
    {
        printf("\nEn cok gelen arac: Honda(%d)",honda);

    }

    else
        printf("\nWWWWW");

if (ht < rt && mt<rt && ft<rt)
{
    printf("\nEn cok alan arac:Renault (%f)",rt);
}

else if (rt < mt && ft<mt && ht<mt)
{
    printf("\nEn cok alan arac:Mazda (%f)",mt);
}
else if (rt < ht && ft<ht && mt<ht)
{
    printf("\nEn cok alan arac:Honda (%f)",ht);
}
else if (rt < ft && mt<ft && ht<ft)
{
    printf("\nEn cok alan arac:Ford (%f)",ft);
}






}




