//average scores for rugby team

#include <stdio.h>
#define num_score 3

int main(void) {
	double score1, score2, score3; //three inputs
	double average; //average of inputs
	printf( "What follows is the average of CSCI 6604 Quiz Scores\n"
        "___________________________________\n\n");
        
    do{
		printf ("Input Score for Student 1: ");
		scanf( "%lg", &score1 );
		if(score1 > 100){
			printf( "Error: Score cannot exceed 100 points.\n" );
		}
		else if(score1 < 0){
			printf( "Error: Score cannot be less than 0 points.\n" );
		}
	}while(score1 > 100 || score1 < 0);
	
	do{
		printf( "Input Score for Student 2: " );
		scanf( "%lg", &score2 );
		if(score2 > 100){
			printf( "Error: Score cannot exceed 100 points.\n" );
		}
		else if(score2 < 0){
			printf( "Error: Score cannot be less than 0 points.\n" );
		}
	}while(score2 > 100 || score2 < 0);
	
	do{
		printf( "Input Score for Student 3: " );
		scanf( "%lg", &score3 );
		if(score3 > 100){
			printf( "Error: Score cannot exceed 100 points.\n" );
		}
		else if(score3 < 0){
			printf( "Error: Score cannot be less than 0 points.\n" );
		}
	}while(score3 > 100 || score3 < 0);
		
	average = (score1 + score2 + score3) / num_score;
	printf( "\n\nThe average of %g, %g, and %g = %g \n\n", score1, score2, score3, average); //no ampersands please.
	printf( "Goodbye");
return 0;
}
