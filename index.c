#include <stdio.h>

int main() {
    printf("Welcome to our car showroom\n");
    printf("Which company of car would you prefer\n");

    
    char *car_brands[] = {
       "1) Toyota",
        "2) Honda",
        "3) Ford",
        "4) Volkswagen",
        "5) BMW",
        "6) Mercedes-Benz",
        "7) General Motors (GM)",
        "8) Nissan",
        "9) Audi",
        "10) Hyundai",
        
    };

char *Suzuki[20] = {"1)Mehran", "2)Cultus", "3)Swift", "4)Wagon-R", "5)Alto", "6)Bolan"};

      for(int i = 0; i < sizeof(car_brands) / sizeof(car_brands[0]) ; i++){
        printf(" %s\n",car_brands[i]);
    }

    
    int choice;
    printf("Use 1 to 20 numbering to select car brand: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 10) {
        printf("You choose: %s\n", car_brands[choice - 1]);
    } else {
        printf("Invalid choice\n");
    }

printf("Available cars\n");

for(int i = 0 ; i < sizeof(Suzuki)/sizeof(car_brands[0]);i++){
    printf("%s\n",Suzuki[i]);
}

int car_choice;
printf("Enter 1 to 6 numbering to select a car\n");
scanf("%d",&car_choice);
if (car_choice>=1 &&car_choice <=6)
{
       printf("You choice this car %s\n",Suzuki[car_choice -1]);
       printf("Which model would you like to see for %s?\n", Suzuki[car_choice - 1]);
}
else
{
printf("Invalid Choice!\n");
    
}


//      int choice;
//     printf("Use 1 to 20 numbering to select car brand: ");
//     scanf("%d", &choice);

//     if (choice >= 1 && choice <= 20) {
//         printf("You choose: %s\n", car_brands[choice - 1]);
//     } else {
//         printf("Invalid choice\n");
//     return 0;
// }
//     };



// int CarBrandList  = 1;
// int exit = 0;
// printf("Press 1 to see the car brands  or 0 to exit : ");
// scanf("%d",&CarBrandList);

// if (CarBrandList==1)
// {
//  printf("%s",CarBrandList)
// }
// else if (/* condition */)
// {
//     /* code */
// }
// else
// {
//     /* code */
// }



 
    
 



 
    

    return 0; 
}




 


