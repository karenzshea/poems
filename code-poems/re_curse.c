// re
// curse

#include <stdio.h>

void the_wars_we_wage();
void the_wars_we_waged();
void the_wars_they_wage();
void the_wars_they_waged();

void the_wars_we_wage()
{
    puts("us\n");
    return the_wars_they_waged();
}

void the_wars_we_waged()
{
    puts("us\n");
    return the_wars_they_wage();
}

void the_wars_they_wage()
{
    puts("them\n");
    return the_wars_we_wage();
}

void the_wars_they_waged()
{
    puts("them\n");
    return the_wars_we_waged();
}

int main(void) {
    the_wars_we_wage();
}

