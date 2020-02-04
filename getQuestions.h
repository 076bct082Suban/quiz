#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct question {
	char q[128];
	char a[30];
	char b[30];
	char c[30];
	char d[30];
	char correct;
};


/*
int main(){
	FILE *linePointer;
	struct question q1;
	char line[256];

	linePointer = fopen("questionCollection.txt", "r");


	// Reads the question from the file
	fscanf(linePointer, "%[^,], %[^,], %[^,], %[^,], %[^,], %c", q1.q, q1.a, q1.b, q1.c, q1.d, &q1.correct);

	// Displays the question from the file
	printf("%s\n", q1.q);
	printf(" a)%s\n b)%s\n c)%s\n d)%s\n", q1.a, q1.b, q1.c, q1.d);
	printf("%c", q1.correct);  // The answer
	/*
	char stuff[50];
	scanf("%[^\n]", stuff);
	char c[2] = ",";
	char *token;

	token = strtok(stuff, c);
	printf("%s", token);

	return 0;
}
*/
