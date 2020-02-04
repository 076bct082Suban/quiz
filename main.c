#include "getQuestions.h"

int main() {
	int i;
	int score = 0;
	FILE *linePointer;
	struct question q1[10];
    char answer, temp;
	linePointer = fopen("questionCollection.txt", "r");

	int number_of_questions = 4;

	for(i = 0; i < number_of_questions; i++){
        fscanf(linePointer, "%[^,], %[^,], %[^,], %[^,], %[^,], %c",
         q1[i].q, q1[i].a, q1[i].b, q1[i].c, q1[i].d, &q1[i].correct);

	}

    for(i = 0; i < number_of_questions; i++){
        printf("%s\n", q1[i].q);
        printf(" a)%s\n b)%s\n c)%s\n d)%s\n", q1[i].a, q1[i].b, q1[i].c, q1[i].d);

        printf("Choose the ooption a/b/c/d ?");
        scanf("%c", &answer);

        // I don't know why this line is needed but it is.
        scanf("%c", &temp);




        if (answer == q1[i].correct) {
            score += 1;
            printf("Congrats, you chose the correct answer!!");
        }
        else{
            printf("Sorry you chose the wrong answer :'( ");

        }
        fflush(stdin);
        printf("\n ------- \n ");
    }

    printf("Thanks for playing, your score was, %d", score);

	return 0;
}
