#ifndef VECS_H
#define VECS_H

typedef struct {
    float x;
    float y;
    float z;
} vector3f_t;

void sum(vector3f_t* v1, vector3f_t* v2, vector3f_t* out);
void sub(vector3f_t* v1, vector3f_t* v2, vector3f_t* out);
float dot(vector3f_t* v1, vector3f_t* v2);
void cross(vector3f_t* v1, vector3f_t* v2, vector3f_t* out);


#endif
