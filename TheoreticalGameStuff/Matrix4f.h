#ifndef MATRIX4F_H
#define	MATRIX4F_H
#include "Vector3f.h"

class Matrix4f {
public:
    float data[16];
    Matrix4f();
    virtual ~Matrix4f();
    void identity();
    void projection(float fov, float near, float far);
    void ortho(float width, float height, float near, float far);
    void translate(Vector3f translation);
    void rotate(Vector3f rotation);
    void scale(Vector3f scale);
private:

};

#endif

