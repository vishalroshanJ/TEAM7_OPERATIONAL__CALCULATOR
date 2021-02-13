#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "addition.h"
#include "cos.h"
#include "division.h"
#include "exponential.h"
#include "Log_Funtion.h"
#include "multiplication.h"
#include "sin.h"
#include "subtraction.h"
#include "Square_Root"
#include "tan.h"
#include "Ten_power_X.h"
#include "X_p.h"
#include "absolutevalue.h"
#include "ceilval.h"
#include "exponential.h"
#include "floorval.h"


void addition();
void cos();
void division();
void Log_Funtion();
void modulus();
void multiplication();
void Reciprocal_of_value();
void sin();
void Square_Root();
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

void cal()
{
	printf("\n             Welcome to C calculator \n\n");
	calc_inst();
	printf("Enter A or a for Addition \n");
	printf("Enter S or s for Subtraction \n");
	printf("Enter M or m for Multiplication \n");
	printf("Enter D or d for Division \n");
	printf("Enter L or l for Modulus \n");
	printf("Enter F or f for Factorial \n");
	printf("Enter E or e for Exponential \n");
	printf("Enter C or c for Ceil\n");
	printf("Enter MO or mo for Modulus\n");
	printf("Enter LOG or log for LOG \n");
	printf("Enter RP or rp for Recipotal\n");
	printf("Enter FL or fl for Floor \n");
	printf("Enter AB or ab for Abs value\n");
	printf("Enter TP or tp for Ten power\n");
	printf("Enter SIN or sin for Sin \n");
	printf("Enter cos or COS for Cos\n");
	printf("Enter TAN or tan for Tan \n");
	printf("Enter SP or sp for square root\n");
}
}

int main(void)
{
	int X = 1;
	char Calc_input;
	char respo;

	cal();
	scanf("%c", &Calc_input;);
	switch(Calc_input;)
	{
		case 'A': 
		case 'a':  addition();
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
		case 'MO':
		case 'mo':
			 modulus();
			break;
		case 'LOG':
		case 'log':
			Log_Funtion();
			break;
		case 'D': 
		case 'd': division()
				break;
		case 'F': 
		case 'f': factorial()
				break;
		case 'E': 
		case 'e': expval();
				break;
		case 'Q': 
		case 'q': exit(0);
				break;
		case 'H':
		case 'h': calc_opr();
			        break;
		case 'RP';
		case 'rp':
			 Reciprocal_of_value();
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
		case 'SIN':
		case 'sin':
			sin();
			break;
		case 'TAN':
		case 'tan':
			tan();
			break;
		case 'COS':
		case 'cos':
			cos();
			break;
		case 'SP':
		case 'sp':
			Square_Root();
			break;
		default : 
			printf("\n**********You have entered unavailable option");
    		printf("***********\n");
    		printf("\n*****Please Enter any one of below available ");
    		printf("options****\n");
			calc_opr();

	}

}
