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