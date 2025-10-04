#include<stdio.h>
int main()
{
    printf("Which continent are you from ?:\n");
    printf("Asia = a\nEurope = e\n");
    char continent;
    scanf(" %c", &continent);
    switch(continent)
    {
        case 'a':
            printf("You selected Asia.\n");
            printf("Which country are you from?:\n");
            printf("Pakistan = p\nIndia = i\n");
           char Country;
            scanf(" %c", &Country);
            switch(Country)
            {
                case 'p':
                    printf("You selected Pakistan.\n");
                    break;
                case 'i':
                    printf("You selected India.\n");
                    break;
                default:
                    printf("Invalid country.\n");
            }
            break;


        case 'e':
            printf("You selected Europe.\n");
            printf("Which country are you from?:\n");
            printf("france=f\nGermany=g\n");
           char Country2;
            scanf(" %c", &Country2);
            switch(Country2)
            {
                case 'f':
                    printf("You selected france.\n");
                    break;
                case 'g':
                    printf("You selected germany.\n");
                    break;
                default:
                    printf("Invalid Country.\n");
            }
            break;
        default:
            printf("Invalid continent.\n");
    }
}