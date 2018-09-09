#include <stdio.h>
#include <math.h>
#include <time.h>

int main( void ){

	banner();					//title banner for assignment submission

	double weight, height;		//variables weight (lbs) and height (inches)
	double BMI;					//Body Mass Index
	
	do{
		printf ("This program will compute the Body Mass Index (BMI) of an individual.\n\n"
				"Input weight of the individual in pounds:\n" );
		scanf ( "%lg", &weight );
		if(weight > 1000){
			printf ( "Error: Weight should not exceed 1000lbs.\n"
					"Input individual's weight in pounds again: \n" );
		}
		else if (weight < 0.0){
			printf ( "Error: Weight cannot be less than 0.0lbs.\n"
					"Input individual's weight in pounds again: \n" );
		}
	}while (weight < 0.0 || weight > 1000);
			
	do{
		printf ( "Input height of the individual in inches:\n" );
		scanf ( "%lg", &height );
		if (height > 120.00){
			printf ( "Error: Height should not exceed 120.00 inches. \n"
					"Input individual's height in inches again:\n" );
		}
		else if (height < 0.0){
			printf ( "Error: Height cannot be less than 0.0 inches.\n"
					"Input individual's height in inches again:\n" );
		}
	}while (height < 0.0 || height > 120.00);
			
	BMI = (weight) / pow(height, 2) * 703;
	printf ( "\n\n This individual's BMI is %g\n", BMI);
	
	if(BMI < 18.5){
		printf( "According to this BMI output, this individual is underweight." );
	}
	else if(BMI >= 18.5 && BMI <= 24.9){
		printf( "According to this BMI output, this individual is of normal weight." );
	}
	else if(BMI >=25.0 && BMI <= 29.9){
		printf( "According to this BMI output, this individual is overweight." );
	}
	else{
		printf( "According to this BMI output, this individual is obese." );
	}	
return 0;
}
//------------------------------------------------------------
void banner(void){
	time_t now = time(NULL);
	printf( "\n _____________________________________________\n\n"
			"Cytisus A. N. Eurydice\n"
			"CSCI 6604\n" );
	printf( ctime( &now) );
	printf( "\n _____________________________________________\n\n");
}

