#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "addition.h"
#include "cos.h"
#include "division.h"
#include "exponential.h"
#include "Log_Funtion.h"
#include "modulus.h"
#include "multiplication.h"
#include "Reciprocal_of_value.h"
#include "sin.h"
#include "subtraction.h"
#include "Square_Root"
#include "tan.h"
#include "Ten_power_X.h"
#include "X_p.h"
#include "X_Y.h"
#include "absolutevalue.h"
#include "ceilval.h"
#include "exponential.h"
#include "factorial.h"
#include "floorval.h"






void addition();
void division();
void exponential();

void modulus();
void multiplication();
void percentage();
void subtraction();
void prime();

void tan();
void Ten_power_X();
void X_p();
void X_Y();
void absval();
void ceilval();
void expval();
void factorial();
void floorval();

void calc_inst()
{
	
	printf("******* Press 'Q' or 'q' to quit ");
	printf("the program ********\n");
	printf("***** Press 'H' or 'h' to display ");
	printf("below options *****\n\n");
	printf("Enter 'C' or 'c' to clear the screen and");
	printf(" display available option \n\n");
}

void calc_opr()
{
	printf("\n             Welcome to C calculator \n\n");
	calc_inst();

	printf("Enter A or a for Addition \n");
	printf("Enter S or s for Subtraction \n");
	printf("Enter M or m for Multiplication \n");
	printf("Enter D or d for Division \n");
	printf("Enter P or p for Percentage \n");
	printf("Enter L or l for Modulus \n");
	printf("Enter F or f for Factorial \n");
	printf("Enter E or e for Exponential \n");
	printf("Enter P or p for Checking prime \n");
}

int main(void)
{
	int X = 1;
	char Calc_opr_input;
	char respo;

	calc_opr();
	scanf("%c", &Calc_opr_input);
	switch(Calc_opr_input)
	{
		case 'A': 
		case 'a': addition();
				break;
		case 'c':
		case 'C':
			 ceilval();
		        	break;
		case 'S': 
		case 's': subtraction();
				break;
		case 'M': 
		case 'm': multiplication();
				break;
		case 'D': 
		case 'd': division();
				break;
		case '%': percentage();
				break;
		case 'L':
		case 'l': modulus();
				break;
		case 'F': 
		case 'f': factorial()
				break;
		case 'E': 
		case 'e': expval();
				break;
		case 'P': 
		case 'p': prime();
				break;					
		case 'Q': 
		case 'q': exit(0);
				break;
		case 'H':
		case 'h': calc_opr();
			        break;
		case 'FL':
		case 'fl':
			 floorval();
			        break;
		case 'AB':
		case 'ab':
			 absval();
			        break;
		case 'TP':
		case 'tp':
		       Ten_power_X();
			break;
		case 'TAN':
		case 'tan':
			tan();
			break;
		default : 
			printf("\n**********You have entered unavailable option");
    		printf("***********\n");
    		printf("\n*****Please Enter any one of below available ");
    		printf("options****\n");
			calc_opr();

	}

}
