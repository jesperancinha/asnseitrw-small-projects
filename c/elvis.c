int value0();
int value42();

int find_result()
{
    return value0() ?: value42();
}

int find_result2()
{
    return value42() ?: value0();
}

int value0() {
    return 0;
}

int value42() {
    return 42;
}

#include <stdio.h>
int main(void)
{
    printf("Hello world!\n");
    printf("%d\n",find_result());
    printf("%d\n",find_result2());
    return 0;
}