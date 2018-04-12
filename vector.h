//
// Created by amitcs on 7/4/18.
//

#ifndef UNTITLED1_VECTOR_H
#define UNTITLED1_VECTOR_H

#include <stdbool.h>
typedef unsigned  int uint;
typedef struct Vector {
    float x, y;

}Vector;
Vector new_vector();
Vector vec_add(Vector,Vector);
Vector vec_sub(Vector,Vector);
Vector vec_mul(Vector,float);
uint magnitude_squared(Vector);
int dot_product(Vector,Vector);
Vector wrap(Vector,Vector);
Vector rotate(Vector , float);
bool in_triangle(Vector,Vector,Vector,Vector);
#endif //UNTITLED1_VECTOR_H
