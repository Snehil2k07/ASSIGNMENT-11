#include <stdio.h>

int score = 75;

void updateScore();

int main()
{
    printf("Before modification: %d\n", score);

    updateScore();

    printf("After modification: %d\n", score);

    return 0;
}
extern int score;

void updateScore()
{
    score = 95;
}