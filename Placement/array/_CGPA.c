#include <stdio.h>
#include <conio.h>
int sem1();
int sem2();
int sem3();
int sem4();
void main()
{
    int a, first, second, third, fourth;
    float b = 50, c, d = 75, e, f = 99, g;
    printf("enter how many sem");
    scanf("%d", &a);
    for (int i = 1; i < a + 1; i++)
    {
        switch (i)
        {
        case (1):
            first = sem1();
            continue;
        case (2):
            second = sem2();
            continue;
        case (3):
            third = sem3();
            continue;
        case (4):
            fourth = sem4();
            continue;
        default:
            break;
        }
    }
    // printf("\n %d %d %d %d", first,second,third,fourth);
    if (a == 2)
    {
        e = (first + second) / b;
        printf(" \n Cgpa till 2nd sem is %f \n ", e);
    }
    else if (a == 3)
    {
        g = (first + second + third) / d;
        printf(" \n Cgpa till 3rd sem is %f \n ", g);
    }
    else
    {
        c = (first + second + third + fourth) / f;
        printf(" \n cgpa till 4th sem is %f \n", c);
    }
}


int sem1()
{
    int che, phy, m1, eg, py, eng, plab, pssplab, total1;
    float final, test, credits = 25.0;
    printf("Enter Sem 1 Grade points");
    printf(" \n Chemistry -");
    scanf("%d", &che);
    printf("\n physics -");
    scanf("%d", &phy);
    printf(" \n Maths 1 -");
    scanf("%d", &m1);
    printf(" \n EG -");
    scanf("%d", &eg);
    printf(" \n Python -");
    scanf("%d", &py);
    printf(" \n English -");
    scanf("%d", &eng);
    printf(" \n Labs");
    printf(" \n Phy & che lab -");
    scanf("%d", &plab);
    printf(" \n PSPP Lab -");
    scanf("%d", &pssplab);
    // printf("%d %d %d %d %d %d %d %d", che, phy, m1, eg, py, eng, plab, pssplab);
    total1 = (che * 3 + phy * 3 + m1 * 4 + eg * 4 + py * 3 + eng * 4 + plab * 2 + pssplab * 2);
    printf("\n %d", total1);
    final = total1 / credits;
    printf(" \n SEM 1 GPA is %f", final);
    return (total1);
}
int sem2()
{
    int beie, CA, ED, Eng, Phy, M2, Cdlab, EPlab, total1;
    float final, test, credits = 25.0;
    printf(" \n Enter Sem 2 Grade points");
    printf(" \n BEIE -");
    scanf("%d", &beie);
    printf(" \n Circuit Analysis -");
    scanf("%d", &CA);
    printf(" \n Electronic Devices -");
    scanf("%d", &ED);
    printf(" \n Technical English -");
    scanf("%d", &Eng);
    printf(" \n Physics -");
    scanf("%d", &Phy);
    printf(" \n Maths -ii -");
    scanf("%d", &M2);
    printf(" \n Labs  \n ");
    printf(" \n CA & devices lab -");
    scanf("%d", &Cdlab);
    printf(" \n Engg Physics Lab -");
    scanf("%d", &EPlab);
    // printf("%d %d %d %d %d %d %d %d", beie, CA, ED, Eng, Phy, eng, Cdlab, EPlab);
    total1 = (beie * 3 + CA * 4 + ED * 3 + Eng * 4 + Phy * 3 + M2 * 4 + Cdlab * 2 + EPlab * 2);
    printf("\n %d", total1);
    final = total1 / credits;
    printf("  \n SEM 2 GPA is %f  \n ", final);
    return total1;
}
int sem3()
{
    int EC1, SS, CSE, DE, C, M3, Clab, ADClab, englab, total1;
    float final, test, credits = 25.0;
    printf("\n Enter Sem 3 Grade points");
    printf(" \n EC1 -");
    scanf("%d", &EC1);
    printf(" \n Signals & system -");
    scanf("%d", &SS);
    printf(" \n Control System -");
    scanf("%d", &CSE);
    printf(" \n Digital Electronics -");
    scanf("%d", &DE);
    printf(" \n Fundamental C -");
    scanf("%d", &C);
    printf(" \n Maths -iii -");
    scanf("%d", &M3);
    printf(" \n Labs  \n ");
    printf(" \n C lab -");
    scanf("%d", &Clab);
    printf(" \n ADC Lab -");
    scanf("%d", &ADClab);
    printf(" \n English lab -");
    scanf("%d", &englab);
    // printf("%d %d %d %d %d %d %d %d", EC1, SS, CSE, DE, C, DE, Clab, ADClab);
    total1 = (EC1 * 3 + SS * 4 + CSE * 3 + DE * 3 + C * 3 + M3 * 4 + Clab * 2 + ADClab * 2 + englab * 1);
    printf("\n %d", total1);
    final = total1 / credits;
    printf("  \n SEM 3 GPA is %f  \n ", final);
    return total1;
}
int sem4()
{
    int EC2, CT, EMF, LIC, EVS, M4, CDSlab, liclab, englab, total1;
    float final, test, credits = 24.0;
    printf("\n Enter Sem 4 Grade points");
    printf(" \n EC2 -");
    scanf("%d", &EC2);
    printf(" \n Communication THeory -");
    scanf("%d", &CT);
    printf(" \n Electro Magnentic fields -");
    scanf("%d", &EMF);
    printf(" \n Linear Integrated Circuits -");
    scanf("%d", &LIC);
    printf(" \n Enivironments science -");
    scanf("%d", &EVS);
    printf(" \n Maths -iv -");
    scanf("%d", &M4);
    printf(" \n Labs  \n ");
    printf(" \n CDS lab -");
    scanf("%d", &CDSlab);
    printf(" \n lic Lab -");
    scanf("%d", &liclab);
    // printf("%d %d %d %d %d %d %d %d", EC2, CT, EMF, LIC, C, LIC, CDSlab, liclab);
    total1 = (EC2 * 3 + CT * 3 + EMF * 4 + LIC * 3 + EVS * 3 + M4 * 4 + CDSlab * 2 + liclab * 2);
    printf("\n %d", total1);
    final = total1 / credits;
    printf("  \n SEM 4 GPA is %f  \n ", final);
    return total1;
}