// C_ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    double num1;
//    double num2;
//    printf("enter first number: ");
//    scanf_s("%lf", &num1);
//
//    printf("enter 2nd number: ");
//    scanf_s("%lf", &num2);
//
//    printf("Answer: %f", num1 + num2);
//
//    return 0;
//}

//int main()
//{

//char color[20];
	//char pluralNoun[20];
	//char celebrityF[20];
	//char celebrityL[20];

//printf("enter a color: ");
	//scanf_s("%s", color, 20);
	//printf("enter a plural noun: ");
	//scanf_s("%s", pluralNoun, 20);
	//printf("enter a celebrity: ");
	//scanf_s("%s %s", celebrityF, celebrityL, 20, 20);


//printf("Roses are %s\n", color);
	//printf("%s are blue\n", pluralNoun);
	//printf("I love %s %s\n", celebrityF, celebrityL);


//return 0;
//}

//*************************************
//arrays
//int main()
//{
//	int luckyNumbers[10] ;
//	luckyNumbers[1] = 200; 
//	printf("%d", luckyNumbers[1]);
//
//
//
//
//
//	return 0;
//}

//int main()
//
//{
//	printf("Column A\tColumn B\tColumn C");
//	printf("\nMy Computer\'s Beep Sounds Like this: \a!\n");
//	printf("\"Letz\bs fix that typo and then show this backslash ");
//	printf("character \\\" she said\n");
//
//	return 0;
//}

/*Chapter 4-prinf()*/
//int main()
//
//{
//	/* printf examples*/
//
//	printf("Quantity\tCost\tTotal\n");
//	printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
//	printf("Too many spaces    \b\b\b\b can be fixed with the ");
//	printf("\\%c Escape character\n", 'b');
//	printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");
//	printf("a few beeps. \n\n\n");
//	printf("%s %c. ", "You are kicking butt learning", 'C');
//	printf("You just finished chapter %d. \nYou have finished ", 4);
//	printf("%.1f%c of the book. \n", 12.500, '%');
//	printf("\n\n One third equals %.2f or ", 0.333333);
//	printf("%.3f or %.4f or ", 0.333333, 0.333333);
//	printf("%.5f or %.6f\n\n\n", 0.333333, 0.3333333);
//
//
//
//
//	return 0;
//}

/*Chapter 5-Variables*/
//int main()
//{
//Setup variables and define a few
//	char firstInitial, middleInitial;
//	int number_of_pencils;
//	int number_of_notebooks;
//	float pencils = 0.23;
//	float notebooks = 2.89;
//	float lunchbox = 4.99;
//
//// info for the first child
//	firstInitial = 'J';
//	middleInitial = 'R';
//
//	number_of_pencils = 7;
//	number_of_notebooks = 4;
//
//	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
//	printf("The toal cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
//
//// info for the 2nd child
//
//	firstInitial = 'A';
//	middleInitial = 'J';
//
//	number_of_pencils = 10;
//	number_of_notebooks = 3;
//
//	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
//	printf(" The total cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
//
//// info for 3rd chld
//	firstInitial = 'M';
//	middleInitial = 'T';
//
//	number_of_pencils = 9;
//	number_of_notebooks = 2;
//
//	printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", firstInitial, middleInitial, number_of_pencils, number_of_notebooks);
//	printf(" The total cost is $%.2f\n\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);
//
//
//
//	return 0;
//}


// Chapter 6-Adding words to programs

//int main()
//{
//	//Initializing strings
//
//	char kid1[12];
//	// Kid1 can hold an 11-character name
//	// kid2 will be 7 characters (maddie plus null 0
//	char kid2[] = "Maddie";
//	// kid3 is also 7 characters but specifically defined
//	char kid3[7] = "Andrew";
//	// Hero1 will be 7 characters (adding null 0)
//	char hero1[] = "Batman";
//	// Hero2 wll have extra room for future strings
//	char hero2[34] = "Spiderman";
//	char hero3[25];
//
//	kid1[0] = 'K'; //Kid1 is being defined char by char
//	kid1[1] = 'a'; //not efficient, but it does work
//	kid1[2] = 't';
//	kid1[3] = 'i';
//	kid1[4] = 'e';
//	kid1[5] = '\0'; // must add null 0 so C knows where string ends
//
//	strcpy_s(hero3, "The incredible hulk!");
//
//	printf("%s\'s favorite hero is %s.\n", kid1, hero1);
//	printf("%s\'s favorite hero is %s.\n", kid2, hero2);
//	printf("%s\'s favorite hero is %s.\n", kid3, hero3);
//
//
//	return 0;
//}

// Chapter 7-#include and #define

//Uses Chapter7ex1.h header file
//#include "Chapter7ex1.h"
//int main()
//{
//	int age;
//	char childname[14] = "Thomas";
//
//	printf("\n%s have %d kids.\n", FAMILY, KIDS); //uses constants from Chapter7ex1.h header file
//
//	age = 11;
//	printf("The oldest, %s, is %d.\n", childname, age);
//
//	strcpy_s(childname, "Christopher");
//	age = 6;
//	printf("The middle boy, %s, is %d.\n", childname, age);
//
//	age = 3;
//	strcpy_s(childname, "Benjamin");
//	printf("The youngest boy, %s, is %d.\n", childname, age);
//
//
//	return 0;
//}

// Chapter 8-Interacting with users
//Sample program using scanf()

/*int main()
{
	/*set up the variables that scanf will fill
	/*char firstInitial;
	char lastInitial;
	int age;
	int favoriteNumber;

	printf("What letter does your first name begin with?\n");
	scanf_s(" %c", &firstInitial);

	printf("What letter does your last name begin with?\n");
	scanf_s(" %c", &lastInitial);

	printf("How old are you?\n");
	scanf_s(" %d", &age);

	printf("What is your favorite number?\n");
	scanf_s(" %d", &favoriteNumber);

	printf("\nYour initials are %c.%c. and you are %d years old", firstInitial, lastInitial, age);
	printf("\nyour favorite number is %d. \n\n", favoriteNumber);*/

//	char topping[24];
//	int slices;
//	int month, day, year;
//	float cost;
//
//	//Floating point needs & before variable e.g. &cost
//	printf("How much does pizza cost in your area?");
//	printf(" Enter as $XX.XX\n");
//	scanf_s(" $%f", &cost);
//
//	//Pizza topping is a string so doesn't need &
//	printf("What is your favorite one-word pizza topping? \n");
//	scanf_s(" %s", topping, 23);
//
//	printf("How many slices of %s pizza", topping);
//	printf(" can you eat in one sitting?\n");
//	scanf_s(" %d", &slices);
//
//	printf("What is today's date (enter it in XX/XX/XX format).\n");
//	scanf_s(" %d/%d/%d", &month, &day, &year);
//
//	printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
//	printf("\nand have %d slices of %s pizza!\n", slices, topping);
//	printf("It will only cost you $%.2f!\n\n\n", cost);
//
//	return 0;
//}

// Chapter 9-Crunching the numbers

// Chapter 10-Powering up variables with assignments and expressions

//int main()
//{
//	int ctr = 0;
	//ctr = ctr + 1; 
	//printf("Counter is at %d\n", ctr);
	//ctr = ctr + 1;
	//printf("Counter is at %d\n", ctr);
	//ctr = ctr + 1;
	//printf("Counter is at %d\n", ctr);
	//ctr = ctr + 1;
	//printf("Counter is at %d\n", ctr);
	//ctr = ctr + 1;
	//printf("Counter is at %d\n", ctr);
	//ctr = ctr - 1;
	//printf("Counter is at %d\n", ctr);
	//ctr = ctr - 1;
	//printf("Counter is at %d\n", ctr);
	//ctr = ctr - 1;
	//printf("Counter is at %d\n", ctr);
	//ctr = ctr - 1;
	//printf("Counter is at %d\n", ctr);

//use compund operators and place in print fuction for less code
//	printf("Counter is at %d.\n", ctr += 1);
//	printf("Counter is at %d.\n", ctr += 1);
//	printf("Counter is at %d.\n", ctr += 1);
//	printf("Counter is at %d.\n", ctr += 1);
//	printf("Counter is at %d.\n", ctr += 1);
//	printf("Counter is at %d.\n", ctr -= 1);
//	printf("Counter is at %d.\n", ctr -= 1);
//	printf("Counter is at %d.\n", ctr -= 1);
//	printf("Counter is at %d.\n", ctr -= 1);
//
//	return 0;
//}

// Chapter 11- Testing data to pick a path Else if
// if format:
// if (condition) { code block }

//#define CURRENTYEAR 2020
//
//int main()
//{
//	int yearBorn, age;
//
//	printf("What year were you born?\n");
//	scanf_s(" %d", &yearBorn);
//
//	if (yearBorn > CURRENTYEAR)
//
//	{
//		printf("Really?, You haven't been born yet?\n");
//		printf("congratulations on time travel!\n");
//		/*printf("Want to try again with a different year?\n");
//		printf("What year were you born?\n");
//		scanf_s(" %d", &yearBorn);*/
//	}
//
//	age = CURRENTYEAR - yearBorn;
//
//	printf("\nSo this year you will turn %d on your birthday!\n", age);
//
//	if ((yearBorn % 4) == 0)
//	
//	{
//		printf("\nYou were born in a leap year--cool!\n");
//
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int prefer;
//	
//	printf("on a scale of 1-10, how happy are you?\n");
//	scanf_s(" %d", &prefer);
//
//	if (prefer >= 8)
//	{
//		printf("Feeling good that's awesome!\n");
//	}
//	else if (prefer >= 5)
//	{
//		printf("Better than average!\n");
//		printf("Focus on the positive and tomorrow will get better\n");
//	}
//
//	else if (prefer >= 3)
//	{
//		printf("Sorry you're nto feeling so great.\n");
//
//	}
//	else
//	{
//		printf("Remember it's always darkest before the dawn\n");
//	}
//
//	return 0;
//}
// Chapter 12-

//Chapter 12-Juggling Several Choices with Logical Operators

//int main()
//{
//	int planets = 8;
//	int friends = 6;
//	int potterBooks = 7;
//	int starWars = 6;
//	int months = 12;
//	int beatles = 4;
//	int avengers = 6;
//	int baseball = 9;
//	int basketball = 5;
//	int football = 11;
//	// first logical statement uses AND (&&) operator to test
//	if ((friends + beatles >= baseball) &&
//		(friends + avengers >= football))
//	{
//		printf("The cast of Friends and the Beatles could make a baseball team, \n");
//		printf("AND the cast of Friends plus the Avengers could make a football team.\n");
//	}
//	else
//	{
//		printf("either the Friends cannot make a baseball team with the Fab Four, \n");
//		printf("OR they can't make Football team with the Avengers (or both!)\n");
//	}
//
//	// second operator uses OR (||) to test
//	if ((starWars <= months) || potterBooks <= months)
//	{
//		printf("\nYou could read one HP book a month, and finish them all in less than a year,\n");
//		printf("OR you could see one Star Wars movie a month,\n");
//		printf("and finish them all in less than a year.\n");
//		
//	}
//	else
//	{
//		printf("Neither can happen--too many books or movies,\n");
//		printf("Not enough time!\n\n");
//	}
//
//	// final logical statement uses the NOT (!) operator
//
//	if (!(baseball + basketball > football))
//	{
//		printf("\nThere are fewer baseball and basketball players\n");
//		printf("combined than football players.");
//		
//	return 0;
//}

//int main()
//
//{
//	
//	char name[25];
//	
//	
//
//	printf("what is your last name? ");
//	printf("(Please capitalize the first letter!)\n");
//		
//	int n = scanf_s(" %s", name, (unsigned)_countof(name));//use countof macro to use actual size for buffer
//
//	
//	printf("Items read = %d; Name given is: %s....\n", n, name); //check return value from scanf_s
//
//	if ((name[0] >= 'P') && (name[0] <= 'S'))
//
//	{
//		printf("You must go to room 232 for your tickets\n ");
//	}
//	else
//	{
//		printf("You can get your tickets in the lobby\n");
//
//	}
//	return 0;
//}

//Chapter 13-more operators

//Conditional operator replacing if else
// relation ? trueStatement : falseStatement;

//int main()
//
//{
//	int numPick;
//
//	printf("Pick an Integer between 1 and 100, ");
//	printf("The higher the better!\n");
//
//	int n = scanf_s(" %d", &numPick); //for int you do need &
//	printf("Items read = %d; Number picked = %d\n", n, numPick); //check return value from scanf_s
//
//	printf("%d %s divisible by 2.", numPick, (numPick % 2 == 0) ? ("is") : ("Is not"));
//	printf("\n%d %s divisible by 3.", numPick, (numPick % 3 == 0) ? ("is") : ("Is not"));
//	printf("\n%d %s divisible by 4.", numPick, (numPick % 4 == 0) ? ("is") : ("Is not"));
//	printf("\n%d %s divisible by 5.", numPick, (numPick % 5 == 0) ? ("is") : ("Is not"));
//	printf("\n%d %s divisible by 6.", numPick, (numPick % 6 == 0) ? ("is") : ("Is not"));
//	printf("\n%d %s divisible by 7.", numPick, (numPick % 7 == 0) ? ("is") : ("Is not"));
//	printf("\n%d %s divisible by 8.", numPick, (numPick % 8 == 0) ? ("is") : ("Is not"));
//	printf("\n%d %s divisible by 9.", numPick, (numPick % 9 == 0) ? ("is") : ("Is not"));
//
//
//	return 0;
//}

// ++ and -- operator to increase/decrease variable. Prefix comes first, postfix comes after everything else is calculated
//int main()
//
//{
//	int ctr = 0;
//
//	printf("Counter is at %d.\n", ++ctr);
//	printf("Counter is at %d.\n", ++ctr);
//	printf("Counter is at %d.\n", ++ctr);
//	printf("Counter is at %d.\n", ++ctr);
//	printf("Counter is at %d.\n", ++ctr);
//
//	printf("Counter is at %d.\n", --ctr);
//	printf("Counter is at %d.\n", --ctr);
//	printf("Counter is at %d.\n", --ctr);
//	printf("Counter is at %d.\n", --ctr);
//	printf("Counter is at %d.\n", --ctr);
//
//	return 0;
//}

//Chapter 14-Using loops to save time and effort. 
//Use while loop on counter example to reduce code.
//int main()
//
//{
//	int ctr = 0;
//
//	while (ctr < 5)
//	{
//		printf("Counter is at %d. \n", ctr++);
//	}
//
//	while (ctr > 1)
//	{
//		printf("Counter is at %d. \n", ctr--);
//	}
//
//
//	return 0;
//}

//using do while loop

//int main()
//
//{
//	float num1, num2, result;
//	char choice;
//
//	do {
//		printf("Enter first number to multiply: ");
//		int n = scanf_s(" %f", &num1);
//		printf("Items read: %d. Number Chosen %.2f \n", n, num1); //check input from scanf
//
//		printf("Enter your second number to multiply: ");
//		int n2 = scanf_s(" %f", &num2);
//		printf("Items read: %d. Number Chosen %.2f \n", n2, num2); //check input from scanf
//
//		result = num1 * num2;
//		printf("%.2f time %.2f equals %.2f\n\n", num1, num2, result);
//
//		printf("Do you want another pair of numbers to multiply (Y/N)?\n");
//		char c = scanf_s(" %c", &choice);
//		printf("Items read: %d. Letter chosen: %c\n", c, choice); //check input from scanf
//
//		//If user enters lower case y/n, this if statement will convert to Y/N
//
//		if (choice == 'n')
//			{
//				choice == 'N';
//				printf("Goodbye!");
//			}
//
//	} while (choice != 'N' && choice != 'n');
//
//
//	return 0;
//}

//Chapter 15-Looking for another way to create loops
//Use for loop to give more control over while or do-while loops. 
//Use for loop when you want to ++ or -- a variable through a loop

//int main()
//{
//	int ctr, numMovies, rating, favRating, leastRating;
//	char movieName[40], favorite[40], least[40];
//
//	//Initialize the favRating to 0 so any movie with any rating of
//	//1 or higher will replace it and the leastRating to 10 so any
//	//movie rated 9 or lower will replace it
//
//	favRating = 0;
//	leastRating = 10;
//
//	//find out how many movies the user has seen and can rate
//	//The loop will continue until they enter a number more than 0
//
//	do
//	{
//		printf("How many movies have you seen this year? ");
//		int n = scanf_s(" %d", &numMovies );
//		printf("items read: %d, number of movies entered: %d", n, numMovies ); //capture scanf input
//
//		if (numMovies < 1)
//		{
//			printf("No Movies!?\n Let's try again");
//		}
//
//	} while (numMovies < 1);
//
//	for (ctr = 1; ctr <= numMovies; ctr++)
//	{
//		//Get the name of the movies and the rating
//		printf("\nWhat was the name of the movie? 1 word titles only.");
//		scanf_s(" %s", movieName, (unsigned)_countof(movieName));
//		printf("On a scale of 1-10, what would you rate it? ");
//		scanf_s(" %d", &rating);
//
//		//Check whether it's their best-rated movie so far
//
//		if (rating > favRating)
//		{
//			strcpy_s(favorite, movieName);
//			favRating = rating;
//		}
//
//		//check whether it's their worst-rated movie so far
//
//		if (rating < leastRating)
//
//		{
//			strcpy_s(least, movieName);
//			leastRating = rating;
//		}
//	}
//
//			printf("\nYour favorite movie was %s. \n", favorite);
//			printf("\nYour least favorite movie was %s. \n", least);
//
//		
//
//
//	return 0;
//}

//Chapter 16-Breaking in and out of looped code
//Break terminates while,do-while, and for loops
//continue forces a new cycle of a loop

int main()
{
	int numTest;
	float stTest, avg, total = 0.0;
	
	//asks for up to 25v tests

	for (numTest = 0; numTest, 25; numTest++)
		{
			//get test scores and check if -1 was entered

			printf("\nWhat is the next student's test score? ");
			scanf_s(" %f", &stTest);
			if (stTest < 0.0) //if teacher enters -1 loop breaks

			{
				break;
			}
			total += stTest;

		}
	avg = total / numTest;
	printf("\nThe average is %.1f%%.\n", avg);

	return 0;
}

//Chapter 17- Making the case for the switch statement
