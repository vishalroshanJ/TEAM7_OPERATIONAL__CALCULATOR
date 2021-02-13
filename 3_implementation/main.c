#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "addition.h"
#include "cos.h"
#include "division.h"
#include "logFunction.h"
#include "multiplication.h"
#include "sin.h"
#include "subtraction.h"
#include "sqrtin.h"
#include "tan.h"
#include "xy.h"
#include "ceilval.h"
#include "floorval.h"
#include "factorial.h"


void addition();
void cos();
void division();
void logFunction();
void multiplication();
void sin();
void sqrtin();
void tan();
void xy();
void ceilval();
void factorial();
void floorval();

void cal()
{
	printf("\n             Welcome to C calculator \n\n");
	calc_inst();
	printf("Enter 1 for Addition \n");
	printf("Enter 2 for Subtraction \n");
	printf("Enter 3 for Divison\n");
	printf("Enter 4 for Multiplication \n");
	printf("Enter 5 for Tan \n");
	printf("Enter 6 for Sin \n");
	printf("Enter 7 for Cos \n");
	printf("Enter 8 for Ceil\n");
	printf("Enter 9 for Log\n");
	printf("Enter 10 for Squareroot \n");
	printf("Enter 11 for Floor\n");
	printf("Enter 12 for Flactorial\n");
	printf("Enter 13 for power\n");
	printf("Enter 14 for Exit\n");
}

int main(void)
{
	int X = 1;
	int Calc_input;
	char respo;
	cal();
	scanf("%d",&Calc_input);
	switch(Calc_input)
	{
		case '1':addition();
				break;
	    case '2': subtraction();
				break;	
		case '3': division();
				break;	
		case '4': multiplication();
				break;	
		case '5': tan();
			        break;
		case '6': sin();
			        break;
		case '7': cos();
			       break;	
		case '8': ceilval();
		        	break;
		case '9': logFunction();
			       break;
		case '10': sqrtin();
			       break;	
		case '11': floorval();
			        break;	
		case '12': factorial();
				 break;
		case '13': xy();
				break;	
		case '14': exit(0);
				break;	
		default : 
		printf("\n**********You have entered unavailable option");
    		printf("***********\n");
    		printf("\n*****Please Enter any one of below available ");
    		printf("options****\n");
		    cal();

	}

}
