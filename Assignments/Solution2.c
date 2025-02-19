#include <stdio.h>
#include <string.h>
int main()
{
    int n, total_tax = 0;
    char vehicle[10];
    printf("Enter number of vehicles: ");
    scanf("%d", &n);
    printf("Enter vehicle types (Car, Truck, Bike, Bus): ");
    for (int i = 0; i < n; i++)
    {
        int valid =1;
        scanf("%s", vehicle);
        switch (vehicle[0])
        {
            case 'C': 
                if (strcmp(vehicle, "Car") == 0)
                    total_tax += 50;
                else
                    valid=0;
                break;
            case 'T': 
                if (strcmp(vehicle, "Truck") == 0)
                    total_tax += 100;
                else
                    valid=0;
                break;
            case 'B': 
                if (strcmp(vehicle, "Bike") == 0)
                    total_tax += 20;
                else if (strcmp(vehicle, "Bus") == 0)
                    total_tax += 80;
                else
                    valid=0;
                break;
            default:
                valid = 0;
            }
            if (valid == 0)
            {
                printf ("Invalid vehicle type entered! Please enter again.\n");
                i--;
        }
    }
    printf("Total Toll Tax: ₹%d\n", total_tax);
    return 0;
}
