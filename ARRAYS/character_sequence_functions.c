/* Character Sequence Functions */

#include <stdio.h>
#include <string.h>

int main() {
    printf("STRLEN\n");

    char user[]  = "Buse Ulukaya";

    printf("The size of the character sequence: %d\n", strlen(user));
    printf("The size of the character sequence: %d\n", sizeof(user) / sizeof(user[0]));

    //Important: Strlen only calculates reel character.

    putchar('\n');
    printf("STRCMP\n");

    char first_array[] = "abcdef";
    char second_array[] = "ABCDEF";
    char third_array[] = "abcdef";
    int first_result;
    int second_result;

    first_result = strcmp(first_array, second_array);
    second_result = strcmp(first_array, third_array);

    if(first_result == 0) {
        printf("1. and 2. arrays are equal.\n");
    }
    else {
        printf("1. and 2. arrays are not equal.\n");
    }

     if(second_result == 0) {
        printf("1. and 3. arrays are equal.\n");
    }
    else {
        printf("1. and 3. arrays are not equal.\n");
    }

    putchar('\n');
    printf("STRNCMP\n");

    char first[] = "Buse Ulukaya";
    char second[] = "Buse Yaseminoglu";
    int result_1;

    result_1 = strncmp(first, second , 9);

    if (result_1 > 0) {
      printf("%s is greater than %s\n", first, second);
    }
    else if (result_1 < 0) {
      printf("%s is greater than %s\n", second, first);
    }
    else {
      printf("%s is equal to %s\n", first, second);
    }

    putchar('\n');
    printf("STRCOPY\n");

    char name[] = "Buse Ulukaya";
    char user_name[30];

    strcpy(user_name, name);

    printf("%s\n", user_name);
    putchar('\n');
    printf("STRNCOPY\n");

    char singer[] = "Seda Sayan";
    char singer_name[30];

    strncpy(singer_name, singer, 4);

    printf("%s\n", singer_name);
    putchar('\n');
    printf("STRNCAT\n");

    char my_country[100] = "Turkiye ";
    strncat(my_country, "Cumhuriyeti Devleti", 11);

    printf("%s\n", my_country);
    putchar('\n');
    printf("STRCAT\n");

    char enter[100] = "My";
    strcat(enter, " name is Buse");

    printf("%s\n", enter);
    putchar('\n');
    printf("GETS\n"); // Its use is dangerous.

    char gamer_name[40];

    printf("Enter gamer name: ");
    gets(gamer_name);
    printf("Gamer name: %s\n", gamer_name);
    putchar('\n');
    printf("FGETS\n");

    char mom_name[40];

    printf("Enter mom name: ");
    fgets(mom_name, sizeof(mom_name), stdin);
    printf("Mom name: %s\n", mom_name);
    printf("STRREV\n");

    char color[] = "orange";

    printf("Reverse of orange: %s\n\n", strrev(color));
    printf("STRLWR\n");

    char fruit[40];

    printf("Enter a fruit: ");
    fgets(fruit, sizeof(fruit), stdin);
    printf("The lowercase version of the expression you entered.: %s \n\n", strlwr(fruit));
    printf("STRUPR\n");

    char capital[40];

    printf("Enter capital of Turkiye: ");
    fgets(capital, sizeof(capital), stdin);
    printf("The uppercase version of the expression you entered.: %s \n\n", strupr(capital));
    printf("STRCHR\n");

    char job[50] = "I am a computer engineer.\n";

    printf("Is there u character in my job?\n");
    if(strchr(job, 'u') == NULL) {
        printf("No. There is not that character.\n");
    }
    else {
        printf("Yes. There is that character.\n\n");
    }
    printf("STRSTR\n");

    char line[50] = "Hello world!";

    printf("Is there \"world\" in \"Hello world!\"? \n");
    if(strstr(line, "world") == NULL) {
        printf("No. There is not that word in line.\n");
    }
    else {
        printf("Yes. There is that word in line.\n");
    }









































        return 0;
}

