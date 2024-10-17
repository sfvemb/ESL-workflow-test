#include <stdio.h>
#include <stdlib.h>
#include "vec/vec.h"

#define PRECISION "2"

void print_vector_function_result(vector3f_t* v1, vector3f_t* v2, void (*pf)(vector3f_t*, vector3f_t*, vector3f_t*), char* fun_name)
{
    vector3f_t res;
    pf(v1, v2, &res);
    printf("%s: {%." PRECISION "f; %." PRECISION "f; %." PRECISION "f}\n", fun_name, res.x, res.y, res.z);
}

int main(void)
{
    printf("This program is for testing vector math\n");
    vector3f_t *v1 = (vector3f_t*) malloc(sizeof(vector3f_t)), *v2 = (vector3f_t*) malloc(sizeof(vector3f_t));
    printf("Please enter first vector (format: {float_num float_num float_num}):\n");
    scanf("%f%f%f", &v1->x, &v1->y, &v1->z);
    printf("Please enter second vector (format: {float_num float_num float_num}):\n");
    scanf("%f%f%f", &v2->x, &v2->y, &v2->z);

    print_vector_function_result(v1, v2, sum, "sum");
    print_vector_function_result(v1, v2, sub, "sub");
    print_vector_function_result(v1, v2, cross, "cross product");
    printf("dot product: %." PRECISION "f\n", dot(v1, v2));

    return 0;
}
