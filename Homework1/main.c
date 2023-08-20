/*
 * main.c
 *
 *  Created on: Aug 19, 2023
 *      Author: Youssef Elsheheimy
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	char choice;
Start:
	printf("Welcome Homework1 by: Youssef Elsheheimy");
	printf("\n****************************************");
	printf("\nChoice which exercise you want to see:");
	printf("\nA)Exercise1:Write C Program to Print a Sentence."
			"\nB)Exercise2:Write C Program to Print a Integer Entered by a User."
			"\nC)Exercise3:Write C Program to Add Two Integers."
			"\nD)Exercise4:Write C Program to Multiply two Floating Point Numbers."
			"\nE)Exercise5:Write C Program to Find ASCII Value of a Character."
			"\nF)Exercise6:Write Source Code to Swap Two Numbers."
			"\nG)Exercise7:Write Source Code to Swap Two Numbers without temp variable."
			"\n");
	printf("Enter your choice:");
	fflush(stdout);	fflush(stdin);
	scanf("%c",&choice);

		switch(choice)
		{
		case 'A':	case 'a':
		{
			printf("C Programming\n\n");
		}break;

		case'B': case 'b':
		{
			int Number;
			printf("\nEnter a integer: ");
			fflush(stdout);	fflush(stdin);
			scanf("%d",&Number);
			printf("You entered: %d\n\n",Number);
		} break;
		case 'C': case 'c':
		{
			fflush(stdout);	fflush(stdin);
			int n1,n2;
			printf("Enter Two integers:");
			fflush(stdout);	fflush(stdin);
			scanf("%d%d",&n1,&n2);
			printf("sum: %d\n\n",n1 + n2);
		}break;
		case 'D': case 'd':
				{
					fflush(stdout);
					float n1,n2;
					printf("Enter Two numbers :");
					fflush(stdout);	fflush(stdin);
					scanf("%f%f",&n1,&n2);
					printf("Product: %f\n\n",n1*n2);
				}break;
		case'E': case 'e':
				{
					char c;
					printf("Enter a character: ");
					fflush(stdout);	fflush(stdin);
					scanf("%c",&c);
					printf("You entered: %d\n\n",c);
				} break;
		case'F': case 'f':
				{
					float a,b;
					printf("Enter value of a: ");
					fflush(stdout);	fflush(stdin);
					scanf("%f",&a);
					printf("Enter value of b: ");
					fflush(stdout);	fflush(stdin);
					scanf("%f",&b);
					fflush(stdout);	fflush(stdin);
					float temp = a;
					a=b;
					b=temp;
					printf("After swapping, value of a = %f\nAfter swapping, value of b = %f\n\n",a,b);
				} break;
		case'G': case 'g':
				{
					float a,b;
					printf("Enter value of a: ");
					fflush(stdout);	fflush(stdin);
					scanf("%f",&a);
					printf("Enter value of b: ");
					fflush(stdout);	fflush(stdin);
					scanf("%f",&b);
					fflush(stdout);	fflush(stdin);
					a = a+b;
					b=a-b;
					a=a-b;
					printf("After swapping, value of a = %f\nAfter swapping, value of b = %f\n\n",a,b);
				} break;
		default:
		{
			system("cls");
			printf(">>>>>Enter valid choice<<<<<\n\n");
			goto Start;
		}
		}
		goto Start;
	}
