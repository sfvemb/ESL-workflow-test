#include "vec.h"

void sum(vector3f* v1, vector3f* v2, vector3f* out)
{
    out->x = v1->x + v2->x;
    out->y = v1->y + v2->y;
    out->z = v1->z + v2->z;
}

void sub(vector3f* v1, vector3f* v2, vector3f* out)
{
    out->x = v1->x - v2->x;
    out->y = v1->y - v2->y;
    out->z = v1->z - v2->z;
}

float dot(vector3f* v1, vector3f* v2)
{
    return v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
}

void cross(vector3f* v1, vector3f* v2, vector3f* out)
{
    out->x = v1->y * v2->z - v1->z * v2->y;
    out->y = v1->z * v2->x - v1->x * v2->z;
    out->z = v1->x * v2->y - v1->y * v2->x;
}