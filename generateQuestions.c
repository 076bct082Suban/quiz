#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	FILE *linePointer;
	long length; // Length of life
	// linePointer = fopen("questionCollection.txt", "r");
	int count = 0;
	int i, j; // For, for loop
	int num; // For random line number
	FILE *tempPointer;
	FILE *questionset = fopen("questionset.txt", "w");
	/*
	Some interesting code, not gonna lie
	char *buffer = 0; // Stores the location fo string
	char *token; // for use later
	char n[2] = ","; // for use with token

	// File to string (from stackoverflow)
	if (linePointer){
  		fseek (linePointer, 0, SEEK_END);
  		length = ftell (linePointer);
  		fseek (linePointer, 0, SEEK_SET);
  		buffer = malloc (length);
  		if (buffer){
    		fread (buffer, 1, length, linePointer);
  		}
  			fclose (linePointer);
	}
	// printf("%d", buffer);
	// printf("\n%ld", length);
	if (buffer)
	{
  		// start to process your data / extract strings here...
		// This is actually bullshit
		for( i = 0; i < 2; i++){
			srand(time(0));
			num = rand();
				for(j = 0; j < num- 1; j++){
					token = strtok(buffer, n);
				}
				printf("%s\n",token );



		}
	}
	*/
	char temp[256]; // a temporary place to hold the line
	srand(time(0));
	int pastCounter[4]; // Makes sure same question is not repeated.

	for(i = 0; i < 4; i++){
		num = rand() % 4 + 1;


		// Check if the line is already used.
		linePointer = fopen("questionCollection.txt", "r");
		count = 0;
		for(j = 0; j < i; j++){
			if(pastCounter[j] == num){
				count = 1;
				break;
			}
		}
		if(count == 1){
			i--;
			continue;
		}
		pastCounter[i] = num;
		printf("%d) ", num);
		while(num--){
			fgets(temp, 256, linePointer);
		}

		fputs(temp, questionset);
		printf("%s", temp);

		fclose(linePointer);
	}

	return 0;


}
