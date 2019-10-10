#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int NewAccount()
{
    char name[30];
    int mnum;
    char yn;
    char resi[100];
    char t[10];
    char email[1000];

    t=="Yes";

    printf("\nEnter your Full name as mentioned in official records.\n");
    scanf("%s", &name);
    printf("------------------------------------------------------------------");

    printf("\nEnter your mobile number.\n");
    scanf("%d", &mnum);
    printf("------------------------------------------------------------------");

    printf("\nWhat is the city or town or village of your residence?\n");
    scanf("%s", &resi);
    printf("------------------------------------------------------------------");

    printf("\nEnter your e-mail address.\n");
    scanf("%s", &email);
    printf("------------------------------------------------------------------");

    printf("\nDo you need a credit card?(y or n)");
    scanf("%s", &yn);
    printf("------------------------------------------------------------------");

    /*if (strcmp(t,yn)==0)
    {
        printf("\nPlease collect your credit card along with your pass book and other\ndocuments at our %s branch.\n", resi);
    }
    else
    {
        printf("\nPlease collect your pass book and other\ndocuments at our %s branch.\n", resi);
    }*/

    switch(yn)
    {
    case 'y':
        printf("\nPlease collect your credit card along with your pass book and other\ndocuments at our %s branch.\n", resi);
        break;

    case 'n':
        printf("\nPlease collect your pass book and other\ndocuments at our %s branch.\n", resi);
        break;
    }

    printf("\nPlease meet our %s branch accounts manager within 4 working days,\nwith the acknowledgement form mailed to you email address (%s) to complete all the formalities to completely set up your account.\n", resi, email);

    printf("____________________________________________________________________\n");
    printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<Thank you!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("____________________________________________________________________\n");

    return 0;

}

int UpdateInfo()
{
    char unam[100];
    printf("\nEnter your updated name.(Press '-' if no change is required.");
    scanf("%c", &unam);

}

int Withdraw()
{
    long acc;
    int pin;
    long amt;

    printf("\nEnter your bank account number.\n");
    scanf("%d", &acc);
    printf("------------------------------------------------------------------");

    printf("\nEnter your pin :\n");
    scanf("%d", &pin);
    printf("------------------------------------------------------------------");

    printf("\nEnter the amount you want to withdraw(in Rs.):\n");
    scanf("%d", &amt);
    printf("------------------------------------------------------------------");

    if(amt<100001)
    {
        printf("\nPlease collect Rs.%d/- and the receipt.\n", amt);
    }
    else
    {
            printf("\nYour maximum daily withdrawal limit is Rs.1,00,000/-\n");
    }
    printf("------------------------------------------------------------------");

return 0;
}

int main()

{
    int i;

    printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("::>>>>>>>>>>>>>>CUSTOMER ONLINE BANKING SERVICES<<<<<<<<<<<<<<::\n");
    printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("::------------------------>MAIN MENU<-------------------------::\n");
    printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    printf("1)Open new account.\n");
    printf("2)Update information of existing account.\n");
    printf("3)Withdraw money.\n");
    printf("4)Money transfer.\n");
    printf("5)Check withstanding amount.\n");
    printf("6)Remove existing account.\n");
    printf("7)View last transaction.\n");
    printf("8)Exit.\n");

    printf("\nEnter your choice:\n");
    scanf("%d", &i);

    printf("------------------------------------------------------------------");

    switch(i)
    {
    case 1:
        NewAccount();
        break;

    case 2:
        //UpdateInfo();
        break;

    case 3:
        Withdraw();
        break;

    case 4:
        //Transfer();
        break;

    case 5:
        //Check();
        break;

    case 6:
        //Remove();
        break;

    case 7:
        //Last();
        break;

    case 8:
        exit(0);

    default:
        printf("Please select a valid option.");

    }

return 0;
}
