#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   //food #1 constants
   const string FOOD_1_NAME = "romaine lettuce";
   const int FOOD_1_CALORIES_P100G = 17;
   const double FOOD_1_TOTALFAT_P100G = 0.3;
   const double FOOD_1_PROTEIN_P100G = 1.2;
   const double FOOD_1_TOTALCARB_P100G = 3.3;
   const double FOOD_1_SUGARS_P100G = 1.2;

   //food #2 constants
   const string FOOD_2_NAME = "beef patty";
   const int FOOD_2_CALORIES_P100G = 273;
   const double FOOD_2_TOTALFAT_P100G = 18.2;
   const double FOOD_2_PROTEIN_P100G = 25.4;
   const double FOOD_2_TOTALCARB_P100G = 0.0;
   const double FOOD_2_SUGARS_P100G = 0.0;

   //food #3 constants
   const string FOOD_3_NAME = "tomato";
   const int FOOD_3_CALORIES_P100G = 27;
   const double FOOD_3_TOTALFAT_P100G = 0.3;
   const double FOOD_3_PROTEIN_P100G = 1.3;
   const double FOOD_3_TOTALCARB_P100G = 5.8;
   const double FOOD_3_SUGARS_P100G = 3.9;

   //food #4 constants
   const string FOOD_4_NAME = "pickles";
   const int FOOD_4_CALORIES_P100G = 18;
   const double FOOD_4_TOTALFAT_P100G = 0.2;
   const double FOOD_4_PROTEIN_P100G = 0.6;
   const double FOOD_4_TOTALCARB_P100G = 4.1;
   const double FOOD_4_SUGARS_P100G = 1.9;

   //food #5 constants
   const string FOOD_5_NAME = "american cheese";
   const int FOOD_5_CALORIES_P100G = 180;
   const double FOOD_5_TOTALFAT_P100G = 7.0;
   const double FOOD_5_PROTEIN_P100G = 24.6;
   const double FOOD_5_TOTALCARB_P100G = 3.5;
   const double FOOD_5_SUGARS_P100G = 0.6;

   //food #6 constants
   const string FOOD_6_NAME = "onions";
   const int FOOD_6_CALORIES_P100G = 40;
   const double FOOD_6_TOTALFAT_P100G = 0.1;
   const double FOOD_6_PROTEIN_P100G = 1.1;
   const double FOOD_6_TOTALCARB_P100G = 9.3;
   const double FOOD_6_SUGARS_P100G = 4.2;

   const string AESTHETICSPACING = " -------- ";
   const string INDENT = "       ";

   //constant limits for error checking
   const int MAX_GRAMS = 1500;
   const int MIN_GRAMS = 0;
   const int MAX_SERVINGS = 15;
   const int MIN_SERVINGS = 1;

   //declare variables
   string recipeName, userInputStr;
   int userInputInt, inputServings;
   double totalCal, totalFat, totalCarb, totalSugars, totalProtein;
   
   //initialize accumulator variables 
   totalCal = 0;
   totalFat = 0;
   totalCarb = 0;
   totalSugars = 0;
   totalProtein = 0;

   //Menu
   cout << AESTHETICSPACING << "List of ingredients" << AESTHETICSPACING << endl << endl;
   cout << INDENT << "Ingredient #1: " << FOOD_1_NAME << INDENT << endl;
   cout << INDENT << "Ingredient #2: " << FOOD_2_NAME << INDENT << endl;
   cout << INDENT << "Ingredient #3: " << FOOD_3_NAME << INDENT << endl;
   cout << INDENT << "Ingredient #4: " << FOOD_4_NAME << INDENT << endl;
   cout << INDENT << "Ingredient #5: " << FOOD_5_NAME << INDENT << endl;
   cout << INDENT << "Ingredient #6: " << FOOD_6_NAME << INDENT << endl << endl;

   //recipe name input
   cout << "Input recipe name: ";
   getline(cin, recipeName);

   //# of servings input
   cout << "Input # of servings: ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> inputServings;

   //error check for servings 
   if (inputServings > MAX_SERVINGS || inputServings < MIN_SERVINGS)
   {
      cout << "Next time, enter a value between 1 and 15." << endl;
      return 1;
   }
   else
      istringstream(userInputStr) >> userInputInt;
     
   //Food #1 ------------------------------------------------------------
   cout << "Input grams of " << FOOD_1_NAME << " used: ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   //error check
   if (userInputInt < MIN_GRAMS || userInputInt > MAX_GRAMS)
   {
      cout << "Next time, enter a value between 0 and 1500." << endl;
      return 1;
   }
   else
      istringstream(userInputStr) >> userInputInt;

   //update accumulator variables
   totalCal += userInputInt * (FOOD_1_CALORIES_P100G / 100.);
   totalCarb += userInputInt * (FOOD_1_TOTALCARB_P100G / 100.);
   totalFat += userInputInt * (FOOD_1_TOTALFAT_P100G / 100.);
   totalProtein += userInputInt * (FOOD_1_TOTALCARB_P100G / 100.);
   totalSugars += userInputInt * (FOOD_1_SUGARS_P100G / 100.);

   //Food #2 -----------------------------------------------------------------
   cout << "Input grams of " << FOOD_2_NAME << " used: ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   //error check
   if (userInputInt < MIN_GRAMS || userInputInt > MAX_GRAMS)
   {
      cout << "Next time, enter a value between 0 and 1500." << endl;
      return 1;
   }
   else
      istringstream(userInputStr) >> userInputInt;

   //update accumulator variables
   totalCal += userInputInt * (FOOD_2_CALORIES_P100G / 100.);
   totalCarb += userInputInt * (FOOD_2_TOTALCARB_P100G / 100.);
   totalFat += userInputInt * (FOOD_2_TOTALFAT_P100G / 100.);
   totalProtein += userInputInt * (FOOD_2_TOTALCARB_P100G / 100.);
   totalSugars += userInputInt * (FOOD_2_SUGARS_P100G / 100.);

   //Food #3 -----------------------------------------------------------------
   cout << "Input grams of " << FOOD_3_NAME << " used: ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   
   //error check
   if (userInputInt < MIN_GRAMS || userInputInt > MAX_GRAMS)
   {
      cout << "Next time, enter a value between 0 and 1500." << endl;
      return 1;
   }
   else
      istringstream(userInputStr) >> userInputInt;

   //update accumulator variables
   totalCal += userInputInt * (FOOD_3_CALORIES_P100G / 100.);
   totalCarb += userInputInt * (FOOD_3_TOTALCARB_P100G / 100.);
   totalFat += userInputInt * (FOOD_3_TOTALFAT_P100G / 100.);
   totalProtein += userInputInt * (FOOD_3_TOTALCARB_P100G / 100.);
   totalSugars += userInputInt * (FOOD_3_SUGARS_P100G / 100.);

   //Food #4 -----------------------------------------------------------------
   cout << "Input grams of " << FOOD_4_NAME << " used: ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   
   //error check 
   if (userInputInt < MIN_GRAMS || userInputInt > MAX_GRAMS)
   {
      cout << "Next time, enter a value between 0 and 1500." << endl;
      return 1;
   }
   else
      istringstream(userInputStr) >> userInputInt;

   //update accumulator variables
   totalCal += userInputInt * (FOOD_4_CALORIES_P100G / 100.);
   totalCarb += userInputInt * (FOOD_4_TOTALCARB_P100G / 100.);
   totalFat += userInputInt * (FOOD_4_TOTALFAT_P100G / 100.);
   totalProtein += userInputInt * (FOOD_4_TOTALCARB_P100G / 100.);
   totalSugars += userInputInt * (FOOD_4_SUGARS_P100G / 100.);

   //Food #5 ----------------------------------------------------------------- 
   cout << "Input grams of " << FOOD_5_NAME << " used: ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   //error check
   if (userInputInt < MIN_GRAMS || userInputInt > MAX_GRAMS)
   {
      cout << "Next time, enter a value between 0 and 1500." << endl;
      return 1;
   }
   else
      istringstream(userInputStr) >> userInputInt;

   //update accumulator variables
   totalCal += userInputInt * (FOOD_5_CALORIES_P100G / 100.);
   totalCarb += userInputInt * (FOOD_5_TOTALCARB_P100G / 100.);
   totalFat += userInputInt * (FOOD_5_TOTALFAT_P100G / 100.);
   totalProtein += userInputInt * (FOOD_5_TOTALCARB_P100G / 100.);
   totalSugars += userInputInt * (FOOD_5_SUGARS_P100G / 100.);

   //Food #6 -----------------------------------------------------------------
   cout << "Input grams of " << FOOD_6_NAME << " used: ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   //error check 
   if (userInputInt < MIN_GRAMS || userInputInt > MAX_GRAMS)
   {
      cout << "Next time, enter a value between 0 and 1500." << endl;
      return 1;
   }
   else
      istringstream(userInputStr) >> userInputInt;

   //update accumulator variables
   totalCal += userInputInt * (FOOD_6_CALORIES_P100G / 100.);
   totalCarb += userInputInt * (FOOD_6_TOTALCARB_P100G / 100.);
   totalFat += userInputInt * (FOOD_6_TOTALFAT_P100G / 100.);
   totalProtein += userInputInt * (FOOD_6_TOTALCARB_P100G / 100.);
   totalSugars += userInputInt * (FOOD_6_SUGARS_P100G / 100.);

   //recalculate based on # of servings
   totalCal = totalCal / inputServings;
   totalFat = totalFat / inputServings;
   totalCarb = totalCarb / inputServings;
   totalSugars = totalSugars / inputServings;
   totalProtein = totalProtein / inputServings;

   //results!
   cout << "\n" << AESTHETICSPACING << "Nutrition value per serving for " 
        << recipeName << AESTHETICSPACING << endl << endl;
   cout << INDENT << "Calories: " << totalCal << "J" << endl;
   cout << INDENT << "Total Fat: " << totalFat << "g" << endl;
   cout << INDENT << "Protein: " << totalProtein << "g" << endl;
   cout << INDENT << "Total Carbohydrates: " << totalCarb << "g" << endl;
   cout << INDENT << "Sugars: " << totalSugars << "g" << endl;

   return 0;
}

/*------------------------------ RUN #1 (No errors) --------------------------

 -------- List of ingredients --------

       Ingredient #1: romaine lettuce
       Ingredient #2: beef patty
       Ingredient #3: tomato
       Ingredient #4: pickles
       Ingredient #5: american cheese
       Ingredient #6: onions

Input recipe name: Small Veggie Burger
Input # of servings: 3
Input grams of romaine lettuce used: 113
Input grams of beef patty used: 234
Input grams of tomato used: 98
Input grams of pickles used: 103
Input grams of american cheese used: 139
Input grams of onions used: 87

 -------- Nutrition value per serving for Small Veggie Burger --------

       Calories: 329.343J
       Total Fat: 17.748g
       Protein: 8.864g
       Total Carbohydrates: 8.864g
       Sugars: 3.87433g

C:\Users\Philip\source\repos\Assignment_3\Debug\Assignment_3.exe (process 56744) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

--------------------- RUN #2 (Servings < 1 error) ----------------------------

 -------- List of ingredients --------

       Ingredient #1: romaine lettuce
       Ingredient #2: beef patty
       Ingredient #3: tomato
       Ingredient #4: pickles
       Ingredient #5: american cheese
       Ingredient #6: onions

Input recipe name: Medium Veggie Burger
Input # of servings: -2
Next time, enter a value between 1 and 15.

C:\Users\Philip\source\repos\Assignment_3\Debug\Assignment_3.exe (process 16324) exited with code 1.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

-------------------- RUN #3 (Servings > 15 error) ----------------------------

 -------- List of ingredients --------

       Ingredient #1: romaine lettuce
       Ingredient #2: beef patty
       Ingredient #3: tomato
       Ingredient #4: pickles
       Ingredient #5: american cheese
       Ingredient #6: onions

Input recipe name: Large Veggie Burger
Input # of servings: 18
Next time, enter a value between 1 and 15.

C:\Users\Philip\source\repos\Assignment_3\Debug\Assignment_3.exe (process 45256) exited with code 1.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

------------------- RUN #4 (Grams < 0 error) ---------------------------------
 -------- List of ingredients --------

       Ingredient #1: romaine lettuce
       Ingredient #2: beef patty
       Ingredient #3: tomato
       Ingredient #4: pickles
       Ingredient #5: american cheese
       Ingredient #6: onions

Input recipe name: X Large Veggie Burger
Input # of servings: 4
Input grams of romaine lettuce used: 1302
Input grams of beef patty used: 1203
Input grams of tomato used: 586
Input grams of pickles used: 678
Input grams of american cheese used: 279
Input grams of onions used: -145
Next time, enter a value between 0 and 1500.

C:\Users\Philip\source\repos\Assignment_3\Debug\Assignment_3.exe (process 49092) exited with code 1.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

-------------------RUN #5 (Grams > 1500 error) -------------------------------

 -------- List of ingredients --------

       Ingredient #1: romaine lettuce
       Ingredient #2: beef patty
       Ingredient #3: tomato
       Ingredient #4: pickles
       Ingredient #5: american cheese
       Ingredient #6: onions

Input recipe name: XXLarge Veggie Burger
Input # of servings: 5
Input grams of romaine lettuce used: 233
Input grams of beef patty used: 1493
Input grams of tomato used: 902
Input grams of pickles used: 1605
Next time, enter a value between 0 and 1500.

C:\Users\Philip\source\repos\Assignment_3\Debug\Assignment_3.exe (process 29308) exited with code 1.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

-------------------- END OF SUBMISSION --------------------------------------*/
