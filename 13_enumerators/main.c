#include <stdio.h>
#include <stdlib.h>

enum month_t {
    jan,
    feb,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
};
typedef enum month_t month_t;

int main(int argc, char const *argv[])
{
    month_t my_month;
    my_month = jan;
    if ( my_month < jun ) {
        printf("It is Jun\n");
    } else {
        printf("It is other\n");
    }
    return 0;
}
