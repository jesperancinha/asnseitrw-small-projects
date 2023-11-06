#include <stdio.h>
#include <stdbool.h>

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

int find_result3()
{
    return valueFalse() ?: value42();
}
bool find_result4()
{
    return false ?: true;
}

int value0() {
    return 0;
}

int value42() {
    return 42;
}

int valueFalse() {
    return false;
}

#include <stdio.h>
int main(void)
{
    printf("Hello world!\n");
    printf("%d\n",find_result());
    printf("%d\n",find_result2());
    printf("%d\n",find_result3());
    printf("%d\n",valueFalse());
    printf("%d\n",find_result4());
    find_result4();
    return 0;
}