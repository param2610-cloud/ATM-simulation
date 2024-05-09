#include <stdio.h>
#include <windows.h>
#include <unistd.h>
void delay(unsigned int milliseconds)
{
    usleep(milliseconds * 1000);
}
int pin_check(int pin)
{
    if (pin == 7047)
    {
        return 1; // 1=hiranmay
    }
    else if (pin == 6291)
    {
        return 2; // 2=parthib
    }
    else if (pin == 8509)
    {
        return 3; // 3=jeet
    }
    else if (pin == 9674)
    {
        return 4; // 4=kopai
    }
    else if (pin == 9051)
    {
        return 5; // 5=koyena
    }
    else if (pin == 7428)
    {
        return 6; // 6=mrinmoy
    }
    else if (pin == 8250)
    {
        return 7; // 7=nayan
    }
    else if (pin == 9432)
    {
        return 8; // 8=baba
    }
    else if(pin==8240){
        return 9;
    }
    else
    {
        printf("Again input your card and try again.");
        return 0;
    }
}
int profile(int n)
{
    if (n == 1)
    {
        printf("\033[1mHii Hiranmay Pore.\033[0m\n\n");
        return 0;
    }
    else if (n == 2)
    {
        printf("\033[1mHii Parthib Panja.\033[0m\n\n");
        return 0;
    }
    else if (n == 3)
    {
        printf("\033[1mHii jeet Mahapatra.\033[0m\n\n");
        return 0;
    }
    else if (n == 4)
    {
        printf("\033[1mHii Kopai Manna.\033[0m\n\n");
        return 0;
    }
    else if (n == 5)
    {
        printf("\033[1mHii koyena Haldar .\033[0m\n\n");
        return 0;
    }
    else if (n == 6)
    {
        printf("\033[1mHii Mrinmoy Mondal.\033[0m\n\n");
        return 0;
    }
    else if (n == 7)
    {
        printf("\033[1mHii Nayan Samanta.\033[0m\n\n");
        return 0;
    }
    else if (n == 8)
    {
        printf("\033[1mHii Bablu Kumar Ghosh.\033[0m\n\n");
        return 0;
    }
    else if(n==9){
        printf("\033[1mHII Soumabrata Ghosh\033[0m\n\n");
    }
}
int withdraw()
{
    printf("Enter the amount:");
    float amount;
    scanf("%f", &amount);
    float j = amount;
    if (amount < 100000 && amount > 100)
    {
        printf("what is your preference ---2000 's note / 500 's note / 100 's note / 50 's note . \n [enter the digit only] \n  ");
        int note;
        scanf("%d", &note);
        int frequencies[] = {500, 600, 700, 800};
        int durations[] = {200, 100, 200, 100};

        int numNotes = sizeof(frequencies) / sizeof(frequencies[0]);

        for (int i = 0; i < numNotes; i++)
        {
            playSound(frequencies[i], durations[i]);
        }
        if (amount / 2000 >= 1 && note == 2000)
        {

            int currency[3];
            currency[0] = amount / 2000;
            currency[1] = (amount - (currency[0] * 2000)) / 500;
            currency[2] = ((amount - (currency[0] * 2000)) - (currency[1] * 500)) / 100;
            currency[3] = (((amount - (currency[0] * 2000)) - (currency[1] * 500)) - (currency[2] * 100)) / 50;
            printf("You will get \n %d 2000 's note/s. \n%d 500 's note/s,\n%d 100 's note/s,\n%d 50 's note/s\n ", currency[0], currency[1], currency[2], currency[3]);
            printf("Collect the Cash.\n");
            printf("if you wnat to check balence-- press 1.\n Otherwisw, press any number.\n");
            int p;
            scanf("%d", &p);
            if (p == 1)
            {
                float h = 90000.00 - j;
                printf("Your Balence is %f", h);
            }

            return 0;
        }
        else if (amount / 500 >= 1 && note == 500)
        {
            int currency[2];
            currency[0] = amount / 500;
            currency[1] = (amount - (currency[0] * 500)) / 100;
            currency[2] = ((amount - (currency[0] * 500)) - (currency[1] * 100)) / 50;
            printf("You will get  \n%d 500 's note/s,\n%d 100 's note/s,\n%d 50 's note/s\n ", currency[0], currency[1], currency[2]);
            printf("Collect the Cash.\n");
            printf("if you wnat to check balence-- press 1.\n Otherwisw, press any number.\n");
            int p;
            scanf("%d", &p);
            (p == 1) ? printf("your Balence is = %d", 90000 - amount) : printf("Thank you.\n\nRemove The card.");

            return 0;
        }
        else if (amount / 100 >= 1 && note == 100 && amount / 100 < 500)
        {
            int currency[1];
            currency[0] = amount / 100;
            currency[1] = (amount - (currency[0] * 100)) / 50;
            printf("You will get \n%d 100 's note/s,\n%d 50 's note/s ", currency[0], currency[1]);
            printf("Collect the Cash.\n");
            printf("if you wnat to check balence-- press 1.\n Otherwisw, press any number.\n");
            int p;
            scanf("%d", &p);
            (p == 1) ? printf("your Balence is = %d", 90000 - amount) : printf("Thank you.\n\nRemove The card.");

            return 0;
        }
        else if (amount / 50 >= 1 && note == 50 && amount / 50 < 1000)
        {
            int currency[0];
            currency[0] = amount / 50;
            printf("You will get \n%d 50 's note/s ", currency[0]);
            printf("Collect the Cash.\n");
            printf("if you wnat to check balence-- press 1.\n Otherwisw, press any number.\n");
            int p;
            scanf("%d", &p);
            (p == 1) ? printf("your Balence is = %d", 90000 - amount) : printf("Thank you.\n\nRemove The card.");

            return 0;
        }
        else if (amount / 50 >= 1000 || amount / 100 >= 500)
        {
            printf("Insufficient Balance; [etoh nei bhai.] \n Retry.");
            withdraw();
            return 0;
        }
        else
        {
            printf("retry.");
            withdraw();
            return 0;
        }
    }
    else if (amount > 100000)
    {
        printf("tere pas toh hai nehi itni, toh me kya mera ghra se du!! 50 ke upar aur 1 lakh ke niche likh. ");
    }
    else
    {
        printf("kiu maje le rahe ho.. 50 se upar likho na. ");
    }
}
void playSound(int frequency, int duration)
{
    Beep(frequency, duration);
}
int main()
{
    printf("Enter your Card:-\n");
    printf("If you enter, press 1 for confirmation.\n");
    int c;
    scanf("%d", &c);
    if (c = 1)
    {
        Beep(440, 500);
        printf("successfully recognised. \n");
    }

    printf("Enter your PIN:-(your pin is your active phone no's first 4 digit.)--\n");
    int pin;
    scanf("%d", &pin);
    int v = pin_check(pin);
    profile(v);
    printf("\n\n\nWhat you want to do? \n");
    printf("Banking-----Press 1 \n\n End the Process-----Press 2\n");
    int a;
    scanf("%d", &a);
    if (a == 1)
    {
        printf("\n\nWithdraw----Press 1.\n\n Check Balance----Press 2\n\nDeposit-----Press 3\n");
        int b;
        scanf("%d", &b);
        if (b == 1)
        {
            withdraw();
        }
        else if (b == 2)
        {
            printf("your balence is = ₹90000.");
        }
        else if (b == 3)
        {
            printf("Type what amount you want to be deposit:-");
            int dep;
            scanf("%d", &dep);
            int frequencies[] = {400, 500, 600, 700, 800};
            int durations[] = {200, 150, 200, 150, 200};

            int numNotes = sizeof(frequencies) / sizeof(frequencies[0]);

            for (int i = 0; i < numNotes; i++)
            {
                playSound(frequencies[i], durations[i]);
                Sleep(100);
            }
            printf("Keep the cash on the desk.\n");
            int i;
            char processingBar[4] = {'|', '/', '-', '\\'};

            for (i = 0; i < 10; i++)
            {
                printf("Processing... %c\r", processingBar[i % 4]);
                fflush(stdout);
                delay(250);
            }

            printf("Processing... Done!\n");

            for (int i = 0; i < numNotes; i++)
            {
                int frequencies[] = {800, 600, 1000, 400, 1200};
                int durations[] = {150, 200, 250, 200, 150};

                int numNotes = sizeof(frequencies) / sizeof(frequencies[0]);
                playSound(frequencies[i], durations[i]);
                Sleep(100);
            }
            printf("if you wnat to check balence-- press 1.\n Otherwisw, press any number.");
            int p;
            scanf("%d", &p);
            (p == 1) ? printf("your Balence is = %d", 90000 + dep) : printf("Thank you.\n\nRemove The card.");
        }
        else
        {
            printf("You put wrong number. \n Remove the card. \n Retry.");
        }
    }
}