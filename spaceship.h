//
// Created by amitcs on 4/4/18.
//

#ifndef UNTITLED1_SPACESHIP_H
#define UNTITLED1_SPACESHIP_H

#include "./vector.h"
#define SHIP_INVINCIBLE 1.5
#define MAX_SPEED 300
#define ACCEL_CONST 10
#define SHIP_ROTATION_SPEED 0.1
typedef struct Ship{
    Vector position;
    Vector velocity;
    float angle;
    float invincible;

}Ship;
Ship new_ship(Vector,Vector);
void rotate_ship_left(Ship*);
void rotate_ship_right(Ship*);
void accelerate_ship(Ship*);
void deccelerate_ship(Ship*);
_
#endif //UNTITLED1_SPACESHIP_H
