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
        "11) Fiat Chrysler Automobiles (FCA)",
        "12) Tesla",
        "13) Subaru",
        "14) Kia",
        "15) Mazda",
        "16) Volvo",
        "17) Jaguar",
        "18) Land Rover",
        "19) Porsche",
        "20) Mitsubishi"
    };

      for(int i = 0; i < sizeof(car_brands) / sizeof(car_brands[0]) ; i++){
        printf(" %s\n",car_brands[i]);
    }

    
    int choice;
    printf("Use 1 to 20 numbering to select car brand: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 20) {
        printf("You choose: %s\n", car_brands[choice - 1]);
    } else {
        printf("Invalid choice\n");
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




 


