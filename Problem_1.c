#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
    struct flight{
        int flight_no;
        char departure_city[20];
        char destination_city[20];
        char date[30];
        int available_seats;
    }flight1;
    srand(time(NULL));
    printf("Book a seat\n");
    printf("Traveling from city: ");
    scanf("%[^\n]s",flight1.departure_city);
    printf("Traveling to city: ");
    getchar();
    scanf("%[^\n]s",flight1.destination_city);
    printf("Flight date: ");
    getchar();
    scanf("%s",flight1.date);
    
    int seats=rand()%25;

    printf("Available seats: %d ",seats);
    int flight_no=rand()%20;
    printf("\nFlight number %d",flight_no);
    
    printf("\n\n......Flight details......");
    
    printf("\nTraveling from city: %s ",flight1.departure_city);
    printf("\nTraveling to city: %s ",flight1.destination_city);
    printf("\nFlight Date: %s ",flight1.date);
    printf("\nAvailable seats: %d ",seats);
    printf("\nFlight number: %d ",flight_no);
}