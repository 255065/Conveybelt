#include <stdio.h> // Corrected header file name


int ConveyorBeltCapacityCheck(int num_motors, int package_weight) {
    

    const double MOTOR_CAPACITY = 5.6; 
    

    double total_capacity = MOTOR_CAPACITY * num_motors;

    if (total_capacity >= package_weight) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    }
    else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }
    
    return 0; 
}


int main(void) {
    int num_motors;
    int package_weight;
    
 
    printf("How many motors are carrying the packages?: ");
  
    scanf("%d", &num_motors);
  
    
    printf("How many kg of packages do we expect?: ");
    scanf("%d", &package_weight);
    
    
    ConveyorBeltCapacityCheck(num_motors, package_weight);
    
    return 0;
}