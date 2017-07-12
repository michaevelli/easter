#include <stdio.h>

int main(void){
    int year, a, b, c, d, e, f, g, h, i, k, l, m, month, p, date;

    printf("Enter Year: ");
    scanf("%d", &year);

    a=year%19;
    b=year/100;
    c=year%100;
    d=b/4;
    e=b%4;
    f=(b+8)/25;
    g=(b-f+1)/3;
    h=(19*a+b-d-g+15)%30;
    i=c/4;
    k=c%4;
    l=(32+2*e+2*i-h-k)%7;
    m=(a+11*h+22*l)/451;
    month =(h+l-7*m+114)/31;
    p=(h+l-7*m+114)%31;
    date =p+1;

    printf("Easter is ");
    switch(month){
        case 1:
            printf("Janurary");
            break;
        case 2:
            printf("Feburary");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            break;
            printf("November");
        case 12:
            printf("December");
            break;
        default:
            printf("What");

    }
    printf(" %d in %d.\n", date, year);

}
