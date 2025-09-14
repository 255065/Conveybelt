# Conveyor Belt Capacity Check

This project contains a simple C program to check if a conveyor belt with a given number of motors can carry a specified weight of packages.

## How it works
- The program asks for the number of motors and the expected package weight.
- Each motor has a fixed capacity (5.6 kg).
- It calculates the total capacity and checks if it is sufficient for the packages.

## Usage
1. Build the program:
   ```sh
   clang ConveyorBeltCapacityCheck.c -o ConveyorBeltCapacityCheck
   ```
2. Run the program:
   ```sh
   ./ConveyorBeltCapacityCheck
   ```
3. Follow the prompts to enter the number of motors and package weight.

## Example
```
How many motors are carrying the packages?: 3
How many kg of packages do we expect?: 15
Yes! The conveyor belt can carry the packages.
```

## License
MIT
