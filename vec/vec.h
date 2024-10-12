#ifndef VECS_H
#define VECS_H

typedef struct {
    float x;
    float y;
    float z;
} vector3f;

void sum(vector3f* v1, vector3f* v2, vector3f* out);
void sub(vector3f* v1, vector3f* v2, vector3f* out);
float dot(vector3f* v1, vector3f* v2);
void cross(vector3f* v1, vector3f* v2, vector3f* out);


#endif