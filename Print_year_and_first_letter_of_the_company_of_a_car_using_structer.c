#include <stdio.h>

struct car {
    int year_of_manufacturing;
    char first_name_of_the_company;
};

int main(void) {
    struct car c1 = {1630, 'H'};
    printf("%d %c\n", c1.year_of_manufacturing, c1.first_name_of_the_company);

    struct car c2 = {1530, 'G'};
    printf("%d %c\n", c2.year_of_manufacturing, c2.first_name_of_the_company);

    struct car c3 = {1630, 'F'};
    printf("%d %c\n", c3.year_of_manufacturing, c3.first_name_of_the_company);

    return 0;
}