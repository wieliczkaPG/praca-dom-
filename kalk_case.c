#include <stdio.h>
#include <stdlib.h>
//Wykonał Soborski Dariusz 27-XII-2017
int main()
{
    char dzialanie;
    double a, b, wynik;
    puts("**************KALKULATOR****************");
    puts("-/+*-/+*-/+*-/+*-/+*-/+*-/+*-/+*-/+*-/+*");
    printf("Wybierz dzaialanie  \n dzielenie [/]\n mnożenie[*]\n odejmowanie[-]\n dodawanie[+] \n ");
    scanf("%c", &dzialanie);
    printf("Podaj liczbe a: \n");
    scanf("%lf", &a);
    printf("Podaj liczbe b: \n");
    scanf("%lf", &b);
    switch (dzialanie)
    {
        case '+':
	    wynik=a+b;
            printf(" Suma %f+%f =%f \n ", a, b, wynik);
            break;
        case '-':
	    wynik=a-b;
            printf("Roznica %f - %f = %f \n ", a, b, wynik); 
            break;
        case '*':
            wynik = a * b;
            printf("Iloczyn %f * %f =%f \n ", a, b, wynik);
            break;
        case '/':
            wynik = a / b;
            if (b!=0)
            	{
                printf("Iloraz %f/%f=%f \n ",a, b, wynik);
            	}
            else
            	{
                printf(" Nie mogę podzielić %f przez 0 działanie niewykonalne \n ", a);
            	}

            break;
        default:
            printf("Błędny znak nie obsługuje takiego działania \n ");
            break;
    }
    return 0;
}
