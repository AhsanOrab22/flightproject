#include <stdio.h>
#include <string.h>

typedef struct airline
{
    char name[100];
    int flight_num;
    int ticket_price;
    char seat_no[100];
    int depar_time;
}record;

int main(void)
{
    int i , choice;
    FILE *fp1,*fp2;
    char oname[100];
    record det;
    int recsize;
    char c;

    fp1 = fopen("record.dat" , "r+");
    if(fp1 == NULL)
    {
        fp1 = fopen("record.dat" , "w+");
        if(fp1 == NULL)
        {
            printf("error in opening file : \n");
            return -1;
        }
    }
    recsize = sizeof(det);

  fseek(fp1 , 0 ,SEEK_END);
    printf("Enter Passenger Name : ");
    scanf("%[^\n]" , det.name);
    printf("Enter Flight Number   : ");
    scanf("%d" , &det.flight_num);
    printf("Enter the Price of Ticket    : ");
    scanf("%d" , &det.ticket_price);
    scanf("%c" , &c);
    printf("Enter Seat Number   : ");
    scanf("%[^\n]" , det.seat_no);
    printf("Enter Departure Time  : ");
    scanf("%d" , &det.depar_time);
    fwrite(&det,recsize,1,fp1);
}
