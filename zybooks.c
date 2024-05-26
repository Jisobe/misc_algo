// #include <stdio.h>

// int main(void) {
  
//   // Establish variables
//   int inputInt1 = 0;
//   int inputInt2 = 0;
//   int inputInt3 = 0;
//   int maxInt = 0;
  
//   // Get user input for variables
//   scanf("%d", &inputInt1);
//   scanf("%d", &inputInt2);
//   scanf("%d", &inputInt3);


//   if (inputInt1 < inputInt2) {
//     maxInt = inputInt2;
//   }
//   else {
//     maxInt = inputInt1;
//   }

//   if (maxInt < inputInt3) {
//     maxInt = inputInt3;
//   }

//   printf("Max of [%d, %d, %d] is %d\n", inputInt1, inputInt2, inputInt3, maxInt);


//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {
  
//   // Establish variables
//   int inputInt1 = 0;
//   int inputInt2 = 0;
//   int inputInt3 = 0;
//   int minInt = 0;
  
//   // Get user input for variables
//   scanf("%d", &inputInt1);
//   scanf("%d", &inputInt2);
//   scanf("%d", &inputInt3);


//   if (inputInt1 < inputInt2) {
//     minInt = inputInt1;
//   }
//   else {
//     minInt = inputInt2;
//   }

//   if (minInt > inputInt3) {
//     minInt = inputInt3;
//   }

//   printf("%d\n", minInt);


//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {
  
//   // Establish variables
//   int inputInt1 = 0;
//   int inputInt2 = 0;
//   int maxInt = 0;
  
//   // Get user input for variables
//   scanf("%d", &inputInt1);
//   scanf("%d", &inputInt2);


//   if (inputInt1 < inputInt2) {
//     maxInt = inputInt2;
//   }
//   else {
//     maxInt = inputInt1;
//   }

//   printf("Max if %d and %d is %d\n", inputInt1, inputInt2, maxInt);


//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {
  
// // Establish variables
//   int inputInt1 = 0;
//   int inputInt2 = 0;
//   int inputInt3 = 0;
//   int medianInt = 0;
  
// // Get user input for variables
//   scanf("%d", &inputInt1);
//   scanf("%d", &inputInt2);
//   scanf("%d", &inputInt3);

// // check if input 1 is median
//   if (((inputInt1 < inputInt2) && (inputInt1 > inputInt3)) || ((inputInt1 > inputInt2) && (inputInt1 < inputInt3))){
//     medianInt = inputInt1;
//   }
// // check if input 2 is median
//   else if (((inputInt1 > inputInt2) && (inputInt2 > inputInt3)) || ((inputInt1 < inputInt2) && (inputInt2 < inputInt3))) {
//     medianInt = inputInt2;
//   }
// // else input 3 is median
//   else {
//     medianInt = inputInt3;
//   }

//   printf("%d\n", medianInt);


//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {
//   int highwayNumber;
//   int auxHighwayNumber;
  
//   scanf("%d", &highwayNumber); 

//   if ((highwayNumber > 0) && (highwayNumber < 100)) {
//     if (highwayNumber % 2 == 0){
//       printf("I-%d is primary, going east/west.\n", highwayNumber);
//     }
//     else{
//       printf("I-%d is primary, going north/south.\n", highwayNumber);
//     }
//   }
//   else if (((highwayNumber > 99) && (highwayNumber < 200)) || ((highwayNumber > 200) && (highwayNumber < 1000))) {
//     auxHighwayNumber = highwayNumber;
//     highwayNumber = highwayNumber % 100;

//     if (highwayNumber % 2 == 0){
//       printf("I-%d is auxiliary, serving I-%d, going east/west.\n", auxHighwayNumber, highwayNumber);
//     }
//     else{
//       printf("I-%d is auxiliary, serving I-%d, going north/south.\n", auxHighwayNumber, highwayNumber);
//     }
//   }
//   else{
//     printf("%d is not a valid interstate highway number.\n", highwayNumber);
//   }


//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   char inputMonth[50];
//   int inputDay;
  
//   scanf("%s", inputMonth); 
//   scanf("%d", &inputDay); 
  
//   if ((inputDay > 0) && (inputDay < 32)){
//     if (strcmp(inputMonth, "March") == 0){
//       if (inputDay >= 20){
//         printf("Spring\n");
//       }
//       else {
//         printf("Winter\n");
//       }
//     }
//     else if (strcmp(inputMonth, "April") == 0 || strcmp(inputMonth, "May") == 0){
//       printf("Spring\n");
//     }
//     else if (strcmp(inputMonth, "June") == 0){
//       if (inputDay >= 21){
//         printf("Summer\n");
//       }
//       else {
//         printf("Spring\n");
//       }
//     }
//     else if (strcmp(inputMonth, "July") == 0 || strcmp(inputMonth, "August") == 0){
//       printf("Summer\n");
//     }
//     else if (strcmp(inputMonth, "September") == 0){
//       if (inputDay >= 22){
//         printf("Autumn\n");
//       }
//       else {
//         printf("Summer\n");
//       }
//     }
//     else if (strcmp(inputMonth, "October") == 0 || strcmp(inputMonth, "November") == 0){
//       printf("Autumn\n");
//     }
//     else if (strcmp(inputMonth, "December") == 0){
//       if (inputDay >= 21){
//         printf("Winter\n");
//       }
//       else {
//         printf("Autumn\n");
//       }
//     }
//     else if (strcmp(inputMonth, "January") == 0 || strcmp(inputMonth, "February") == 0){
//       printf("Winter\n");
//     }
//     else{
//       printf("Invalid\n");
//     }
//   }
//   else{
//     printf("Invalid\n");
//   }

//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {

//   int totalChange = 0;
//   int totalDollars = 0;
//   int totalQuarters = 0;
//   int totalDimes = 0;
//   int totalNickels = 0;
//   int totalPennies = 0;

//   scanf("%d", &totalChange);

//   if (totalChange < 1){
//     printf("No change\n");
//   }
//   else{
//     // get dollars
//     totalDollars = totalChange / 100;
//     totalChange = totalChange - (totalDollars * 100);
//     // get quarters
//     totalQuarters = totalChange / 25;
//     totalChange = totalChange - (totalQuarters * 25);
//     // get dimes
//     totalDimes = totalChange / 10;
//     totalChange = totalChange - (totalDimes * 10);
//     // get nickles
//     totalNickels = totalChange / 5;
//     totalChange = totalChange - (totalNickels * 5);
//     // get pennies
//     totalPennies = totalChange / 1;
//     totalChange = totalChange - (totalPennies * 1);

//     if (totalDollars == 1){
//       printf("%d Dollar\n", totalDollars);
//     }
//     else if (totalDollars > 1){
//       printf("%d Dollars\n", totalDollars);
//     }

//     if (totalQuarters == 1){
//       printf("%d Quarter\n", totalQuarters);
//     }
//     else if (totalQuarters > 1){
//       printf("%d Quarters\n", totalQuarters);
//     }

//     if (totalDimes == 1){
//       printf("%d Dime\n", totalDimes);
//     }
//     else if (totalDimes > 1){
//       printf("%d Dimes\n", totalDimes);
//     }

//     if (totalNickels == 1){
//       printf("%d Nickel\n", totalNickels);
//     }
//     else if (totalNickels > 1){
//       printf("%d Nickels\n", totalNickels);
//     }

//     if (totalPennies == 1){
//       printf("%d Penny\n", totalPennies);
//     }
//     else if (totalPennies > 1){
//       printf("%d Pennies\n", totalPennies);
//     }
//   }

//    return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>
// #include <stdbool.h>

// int main(void) {
//   int inputYear;
//   bool isLeapYear = false;
  
//   scanf("%d", &inputYear);

//   if ((inputYear % 400 == 0) || ((inputYear % 100 != 0) && (inputYear % 4 == 0))) {
//     printf("%d - leap year\n", inputYear);
//   }
//   else{
//     printf("%d - not a leap year\n", inputYear);
//   }

//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {

//   int j;
//   int k = 0;

//   for (int i = 0; i < 3; ++i){
//     j = i + 1;
//     printf("%d, %d\n", i, j);
//   }

//   j = ++k;

//   printf("%d, %d\n", k, j);

//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {

//   for (int i = 0; i < 5; ++i){
//     printf("%d\n", i);
//   }

//   return 0;
// }
// ----------------------------------------------------------------



// CHAPTER 4




// #include <stdio.h>

// int main(void) {

//     int inputInt;

//     scanf("%d", &inputInt);

//     while (inputInt > 0){
//         printf("%d", inputInt % 2);
//         inputInt = inputInt / 2;
//     }

//     printf("\n");
    
//    return 0;
// }
// ----------------------------------------------------------------
// #include <stdio.h>

// int main(void) {

//    int userInput;
//    double sum = 0;
//    int count = 0;
//    int max;
//    double average = 0;

//    scanf("%d", &userInput);

//    while (userInput >= 0){
//        if (userInput > max){
//            max = userInput;
//        }
//        sum = sum + userInput;
//        count++;
//        scanf("%d", &userInput);
//    }

//    average = sum / count;

//    printf("%d ", max);
//    printf("%0.2lf\n", average);

//    return 0;
// }
// ----------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>

// int main(void) {

//    char inputChar;
//    char intputString [50];
//    int count = 0;

//    scanf("%c", &inputChar);
//    scanf("%s", intputString);

//    for (int i = 0; i < strlen(intputString); i++){
//        if (intputString[i] == inputChar){    
//            count++;
//        }
//    }

//    if (count == 1){
//        printf("%d %c\n", count, inputChar);       
//    }
//    else{
//         printf("%d %c's\n", count, inputChar);   
//    }


//    return 0;
// }
// ----------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>

// int main(void) {

//    char userPassword[50];
//    char endChar = '!';

//    scanf("%s", userPassword);

//     for (int i = 0; i < strlen(userPassword); i++){
//         if (userPassword[i] == 'i'){
//             userPassword[i] = '1';
//         }
//         else if (userPassword[i] == 'a'){
//             userPassword[i] = '@';
//         }
//         else if (userPassword[i] == 'm'){
//             userPassword[i] = 'M';
//         }
//         else if (userPassword[i] == 'B'){
//             userPassword[i] = '8';
//         }
//         else if (userPassword[i] == 's'){
//             userPassword[i] = '$';      
//         }  
//     }

//     strncat(userPassword, &endChar, 1);

//     printf("%s\n", userPassword);

//    return 0;
// }
// ----------------------------------------------------------------
// #include <stdio.h>

// int main(void) {

//    int startValue;
//    int endValue;

//    scanf("%d", &startValue);
//    scanf("%d", &endValue);

//     if(startValue > endValue){
//         printf("Second integer can't be less than the first.");
//     }else{
//         while (startValue <= endValue){
//             printf("%d ", startValue);
//             startValue += 5;
//         }
//    }

//    printf("\n");

//    return 0;
// }
// ----------------------------------------------------------------
// #include <stdio.h>
// #include <stdbool.h>

// int main(void) {

   
//    int xValue1;
//    int yValue1;
//    int solution1;
//    int xValue2;
//    int yValue2;
//    int solution2;
//    bool isSolution = false;

//     scanf("%d", &xValue1);
//     scanf("%d", &yValue1);
//     scanf("%d", &solution1);
//     scanf("%d", &xValue2);
//     scanf("%d", &yValue2);
//     scanf("%d", &solution2);

//     for (int x = -10; x <= 10; x++){
//         for (int y = -10; y <= 10; y++){
//             if ( ((x*xValue1) + (y*yValue1)) == solution1 && ((x*xValue2) + (y*yValue2)) == solution2 ){
//                 printf("x = %d, y = %d\n", x, y);
//                 isSolution = true;
//                 break;
//             }
//         }
//     }

//     if (isSolution == false){
//         printf("There is no solution\n");        
//     }


//    return 0;
// }
// ----------------------------------------------------------------
// #include <stdio.h>

// int main(void) {

//    int userInput = 0;
//    int max = 0;

//    scanf("%d", &userInput);

//    while (userInput >= 0){
//        if (userInput > max){
//            max = userInput;
//        }
//        scanf("%d", &userInput);
//    }

//    printf("Largest integer: %d\n", max);

//    return 0;
// }
// ----------------------------------------------------------------
// #include <stdio.h>

// int main(void) {

//    int low;
//    int high;
//    int x;

//    scanf("%d", &low);
//    scanf("%d", &high);
//    scanf("%d", &x);

//     printf("Multiples of %d: ", x);

//     for (int i = low + 1; i < high; i++){
//         if (i % x == 0){
//             printf("%d,", i);  
//         }
//     }

//    printf("\n");

//    return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {
//   const int NUM_ELEMENTS = 20;        // Number of input integers
//   int userVals[NUM_ELEMENTS];         // Array to hold the user's input integers
//   int userNumElements = 0;
//   int i; 

//   scanf("%d", &userNumElements);

//   for (i = 0; i < userNumElements; i++){
//     scanf("%d", &userVals[i]);
//   }

//   for (i = (userNumElements - 1); i >= 0; i--){
//     printf("%d,", userVals[i]);
//   }



//    return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(void) {
   
//   char userInputString[50];
//   int charCount = 0;

//   fgets(userInputString, 50, stdin);


//   for(int i = 0; userInputString[i] != '\0'; i++){
//     if (isalnum(userInputString[i]) != 0){
//       charCount++;
//     }
//     else if (ispunct(userInputString[i]) != 0){
//       if (userInputString[i] != '.' && userInputString[i] != ',' && userInputString[i] != '!'){
//         charCount++;
//       }
//     }

//   }

//   printf("%d\n", charCount);
   
//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {
//   const int NUM_ELEMENTS = 9;
//   int userValues[NUM_ELEMENTS];    // Set of data specified by the user
//   int userInput = 0;
//   int index = 0;

//   while (userInput >= 0){

//     scanf("%d", &userInput);

//     if(userInput >= 0){
//       userValues[index] = userInput;   
//       index++;       
//     }
//   }

//   if (index > NUM_ELEMENTS){
//     printf("Too many numbers\n");
//   }
//   else {
//       printf("Middle item: %d\n", userValues[index/2]); 
//   }


//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// double JiffiesToSeconds(double userJiffies){

//   return userJiffies * (.01);

// }

// int main(void) {

//   double inputJiffies;

//   scanf("%lf", &inputJiffies);

//   printf("%0.3lf\n", JiffiesToSeconds(inputJiffies));

//   return 0;
// }
// ----------------------------------------------------------------
// #include <stdio.h>

// int FeetToSteps(double userFeet){
//   return (int)(userFeet / 2.5);
// }

// int main(void) {
//   double inputFeet;

//   scanf("%lf", &inputFeet);

//   printf("%d", FeetToSteps(inputFeet));

//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// double LapsToMiles(double userLaps){
//   return userLaps * .25;
// }

// int main(void){
//   double inputLaps;

//   scanf("%lf", &inputLaps);

//   printf("%0.2lf", LapsToMiles(inputLaps));

//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven){
//   return (milesDriven / milesPerGallon) * dollarsPerGallon;
// }

// int main(void){
//   double inputMlesPerGallon;
//   double inputGasCost;
//   double inputMilesDriven;

//   scanf("%lf", &inputMlesPerGallon);
//   scanf("%lf", &inputGasCost);
//   scanf("%lf", &inputMilesDriven);

//   printf("%0.2lf\n", DrivingCost(inputMlesPerGallon, inputGasCost, inputMilesDriven));

//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// void SwapValues(int* userVal1, int* userVal2, int* userVal3, int* userVal4){

//   int tempVal;

//   tempVal = *userVal1;
//   *userVal1 = *userVal2;
//   *userVal2 = tempVal;

//   tempVal = *userVal3;
//   *userVal3 = *userVal4;
//   *userVal4 = tempVal;
// }

// int main(void){

//   int userVal1;
//   int userVal2;
//   int userVal3;
//   int userVal4;

//   scanf("%d", &userVal1);
//   scanf("%d", &userVal2);
//   scanf("%d", &userVal3);
//   scanf("%d", &userVal4);

//   SwapValues(&userVal1, &userVal2, &userVal3, &userVal4);

//   printf("%d %d %d %d \n", userVal1, userVal2, userVal3, userVal4);

//   return 0;
// }
// ----------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void CoinFlip(char* decisionString){
//   int headOrTail;

//   headOrTail = rand() % 2;

//   if(headOrTail == 0){
//     strcpy(decisionString, "Tails");
//   }
//   else{
//     strcpy(decisionString, "Heads");
//   }
// }

// int main(void) {

//   int desiredFlip;
//   char decisionString[5];

//   srand(2);

//   scanf("%d", &desiredFlip);

//   for(int currentFlip = 0; currentFlip < desiredFlip; currentFlip++){
//     CoinFlip(decisionString);
//     printf("%s\n", decisionString);
//   }
   
//   return 0;
// }

// ----------------------------------------------------------------

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void CreateAcronym(char userPhrase[], char userAcronym[]){

//   char firstLetter;
//   char secondLetter;
//   int acronymIndex = 0;
//   int currentIndex;
//   int length = 0;

//   length = strlen(userPhrase);

//   firstLetter = userPhrase[0];

//   if(isupper(firstLetter)){
//     userAcronym[acronymIndex] = firstLetter;
//     acronymIndex++;
//     userAcronym[acronymIndex] = '.';
//     acronymIndex++;
//   }

//   for (currentIndex = 1; currentIndex < length; ++currentIndex)
//   {
//     firstLetter = userPhrase[currentIndex];
//     secondLetter = userPhrase[currentIndex + 1];
//     if(firstLetter== ' ' && isupper(secondLetter)){
//       userAcronym[acronymIndex] = secondLetter;
//       acronymIndex++;
//       userAcronym[acronymIndex] = '.';
//       acronymIndex++;
//     }
//   }

//   userAcronym[acronymIndex] = '\0';
// }

// int main(void) {

//   char userPhrase[50];
//   char userAcronym[50];

//   fgets(userPhrase, 50, stdin);

//   CreateAcronym(userPhrase, userAcronym);

//   printf("%s", userAcronym);

//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int Fibonacci(int n) {
//   int iterations;
//   int sum;
//   int numberOne = 0;
//   int numberTwo = 1;

//   if (n < 0){
//     sum = -1;
//   }
//   else if(n == 0){
//     sum = 0;
//   }
//   else{
//     for (iterations = 1; iterations < n; iterations++) {
//       sum = numberOne + numberTwo;
//       numberOne = numberTwo;
//       numberTwo = sum;
//     }
//   }
//   return sum;
// }

// int main(void) {
//   int startNum;
//   scanf("%d", &startNum);
  
//   printf("Fibonacci(%d) is %d", startNum, Fibonacci(startNum));

//   return 0;
// }
// ----------------------------------------------------------------

// #include <stdio.h>

// int main(void) {

//   int desiredConversion;
//   double amountToConvert;

//   while(desiredConversion && amountToConvert){
//     printf("Welcome to the European Euro to US Dollar converter!\nPlease enter either(without quotes):\n'1' for Euro to Dollar or\n'2' for Dollar to Euro\n");

//     scanf("%d", &desiredConversion);

//     // Get amount to convert
//     printf("Please enter amount to convert:\n");

//     scanf("%lf", &amountToConvert);

//     printf("%d\n", desiredConversion);
//     printf("%lf\n", amountToConvert);    
//   }


//   return 0;
// }

// ----------------------------------------------------------------
// #include <stdio.h>

// typedef struct MonetaryChange_struct {
//    int quarters;
//    int dimes;
//    int nickles;
//    int pennies;
// } MonetaryChange;

// MonetaryChange ComputeChange(int cents) {
//    MonetaryChange change;

//    change.quarters = cents / 25;
//    cents = cents % 25;
//    change.dimes = cents / 10;
//    cents = cents % 10;
//    change.nickles = cents / 5;
//    cents = cents % 5;
//    change.pennies = cents;

//    return change;
// }

// int main(void) {
//    int userCents;
//    MonetaryChange change;

//    printf("Enter cents: \n");
//    scanf("%d", &userCents);

//    change = ComputeChange(userCents);

//    printf("Quarters: %d\n", change.quarters);
//    printf("Dimes: %d\n", change.dimes);
//    printf("Nickles: %d\n", change.nickles);
//    printf("Pennies: %d\n", change.pennies);

//    return 0;
// }

// ----------------------------------------------------------------
// #include <stdio.h>

// int Fibonacci(int n) {
   
//    if(n<0){
//      return -1; 
//    } 
//    else if(n == 0){
//       return 0;
//    }
//    else if (n == 1 || n == 2){
//       return 1;
//    }
//    else{
//       return Fibonacci(n-1) + Fibonacci(n-2);
//    }
      
// }

// int main() {
//    int startNum;
      
//    scanf("%d", &startNum);
//    printf("Fibonacci(%d) is %d\n", startNum, Fibonacci(startNum));

//    return 0;
// }
// ----------------------------------------------------------------
