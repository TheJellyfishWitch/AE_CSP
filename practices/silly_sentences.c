// AE 7th Silly Sentences
#include <stdio.h>

int main(void){
    char color;
    char adjective;
    char time;
    char adjective2;
    char place;
    char food;
    char food2;
    char verb;
    char noun;
    int number;

    printf("Enter the asked for words/number:\n");

    printf("A color:\n");
    scanf("%c", &color);
    printf("An adjective:\n");
    scanf("%c", &adjective);
    printf("A time of day:\n");
    scanf("%c", &time);
    printf("Another adjective:\n");
    scanf("%c", &adjective2);
    printf("A place:\n");
    scanf("%c", &place);
    printf("A food:\n");
    scanf("%c", &food);
    printf("A second food:\n");
    scanf("%c", &food2);
    printf("A verb:\n");
    scanf("%c", &verb);
    printf("A noun:\n");
    scanf("%c", &noun);
    printf("A number:\n");
    scanf("%d", &number);

    printf("Here is your Madlib!:");

    printf("Bats are so cool! They are %c %c, animals which have wings.\n", color, adjective);
    printf("They like to fly around at %c which makes some people scared of them. But bats are %c, and they don't want to hurt people.\n", time, adjective2);
    printf("I have a pet bat that lives in %c. I like to feed him %c and %c.\n", place, food, food2);
    printf("He likes to %c. I am his favorite person, but he also likes %c.\n", verb, noun);
    printf("I want to convince my parents to get me a %d more bats.\n", number);

    return 0;
}