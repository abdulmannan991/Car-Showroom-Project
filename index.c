#include <stdio.h>

int main() {
    printf("Welcome to our car showroom\n");
    printf("Which company of car would you prefer\n");

    
    char *car_brands[] = {
       "1) Toyota",
        "2) Honda",
        "3) Suzuki",
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

printf("model No:- 20,21,22\n");
 int model[] = {20, 21, 22};
    int choices;

    printf("Enter a model number: ");
    scanf("%d", &choices);

    int num_models = sizeof(model) / sizeof(model[0]); 

    int i;
    for (i = 0; i < num_models; i++) {
        if (model[i] == choices) {
            printf("Great choice! You chose model: %d\n", choices);
            break;
        }
    }

    if (i == num_models) {
        printf("Invalid model\n");
    }

    
printf("Do you want to see the specifications? (Y/N): ");
    char spec_choice;
    scanf(" %c", &spec_choice);
    if (spec_choice == 'Y' || spec_choice == 'y') {
        printf("Specifications for %s:\n", Suzuki[car_choice - 1]);
        // Print specifications here
    } else {
        printf("Alright, moving on...\n");
    }
  
}




 


