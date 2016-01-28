#include "Matrix4f.h"
#include <cmath>

Matrix4f::Matrix4f() {
}

Matrix4f::~Matrix4f() {
}

float data[16];

void Matrix4f::identity(){
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            data[4*i+j] = (i == j) ? 1 : 0;
}

void Matrix4f::projection(float fov, float near, float far){
    identity();
    data[0] = atan(fov/2);
    data[5] = atan(fov/2);
    data[10] = -(far + near)/(far-near);
    data[11] = -2*(far*near)/(far-near);
    data[14] = -1;
    data[15] = 0;
}

void Matrix4f::ortho(float width, float height, float near, float far){
    identity();
    data[0] = 1/width;
    data[5] = 1/height;
    data[10] = -2/(near-far);
    data[11] = -(far+near)/(far-near);
    data[15] = 1;
}

void Matrix4f::translate(Vector3f translation){
    identity();
    data[3] = translation.x;
    data[7] = translation.y;
    data[11] = translation.z;
}

void Matrix4f::rotate(Vector3f rotation){
    identity();
    
}

void Matrix4f::scale(Vector3f scale){
    identity();
    data[0] = scale.x;
    data[5] = scale.y;
    data[10] = scale.z;
}
