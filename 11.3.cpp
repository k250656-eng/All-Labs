#include <stdio.h>
#include <string.h>

struct Flight {
    char flight_number[10];
    char departure_city[30];
    char destination_city[30];
    char date[15];
    int available_seats;
};

void bookSeat(struct Flight *f) {
    if(f->available_seats > 0) {
        f->available_seats--;
        printf("Seat booked successfully. Remaining seats: %d\n", f->available_seats);
    } else {
        printf("No seats available on this flight.\n");
    }
}

void displayDetails(struct Flight f) {
    printf("Flight Number: %s\n", f.flight_number);
    printf("Departure City: %s\n", f.departure_city);
    printf("Destination City: %s\n", f.destination_city);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n\n", f.available_seats);
}

int main() {
    struct Flight flights[5];
    int flight_count = 0;
    int choice;

    do {
        printf("1. Add Flight\n");
        printf("2. Book Seat\n");
        printf("3. Show All Flights\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(flight_count < 5) {
                    printf("Enter flight number: ");
                    scanf("%s", flights[flight_count].flight_number);
                    printf("Enter departure city: ");
                    scanf("%s", flights[flight_count].departure_city);
                    printf("Enter destination city: ");
                    scanf("%s", flights[flight_count].destination_city);
                    printf("Enter date (DD/MM/YYYY): ");
                    scanf("%s", flights[flight_count].date);
                    printf("Enter available seats: ");
                    scanf("%d", &flights[flight_count].available_seats);
                    flight_count++;
                } else {
                    printf("Flight limit reached (5 flights).\n");
                }
                break;

            case 2:
                if(flight_count == 0) {
                    printf("No flights available.\n");
                    break;
                }
                {
                    char fnum[10];
                    printf("Enter flight number to book seat: ");
                    scanf("%s", fnum);
                    int found = 0;
                    for(int i=0; i<flight_count; i++) {
                        if(strcmp(flights[i].flight_number, fnum) == 0) {
                            bookSeat(&flights[i]);
                            found = 1;
                            break;
                        }
                    }
                    if(!found) printf("Flight not found.\n");
                }
                break;

            case 3:
                if(flight_count == 0) {
                    printf("No flights available.\n");
                } else {
                    for(int i=0; i<flight_count; i++) {
                        displayDetails(flights[i]);
                    }
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}

