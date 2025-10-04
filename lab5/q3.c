#include<stdio.h>
int main()
{
    printf("select a device to buy:\n");
    printf("phone=1\nlaptop=2\n");
    int choice;
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("You selected phone.\n");
            printf("select a brand:\n");
            printf("samsung=1\napple=2\n");
            int brand;
            scanf("%d", &brand);
            switch(brand)
            {
                case 1:
                    printf("You selected samsung.\n");
                    break;
                case 2:
                    printf("You selected apple.\n");
                    break;
                default:
                    printf("Invalid brand choice.\n");
            }
            break;


        case 2:
            printf("You selected laptop.\n");
            printf("select a brand:\n");
            printf("dell=1\nhp=2\n");
            int brand2;
            scanf("%d", &brand2);
            switch(brand2)
            {
                case 1:
                    printf("You selected dell.\n");
                    break;
                case 2:
                    printf("You selected hp.\n");
                    break;
                default:
                    printf("Invalid brand choice.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
}