#ifndef VECTOR3F_H
#define	VECTOR3F_H

class Vector3f {
public:
    float x, y, z;
    inline Vector3f(float x, float y, float z){this->x = x; this->y = y; this->z = z;};
    virtual ~Vector3f();
    inline Vector3f operator+(Vector3f vec3){
        return Vector3f(x+vec3.x,y+vec3.y,z+vec3.z);
    }
    inline Vector3f operator*(int scalar){
        return Vector3f(x*scalar,y*scalar,z*scalar);
    }
    inline Vector3f operator*(float scalar){
        return Vector3f(x*scalar,y*scalar,z*scalar);
    }
    inline Vector3f operator*(Vector3f vec3){
        return Vector3f(x*vec3.x,y*vec3.y,z*vec3.z);
    }
    inline Vector3f operator-(Vector3f vec3){
        return Vector3f(x-vec3.x,y-vec3.y,z-vec3.z);
    }
    inline Vector3f operator/(int scalar){
        return Vector3f(x/scalar,y/scalar,z/scalar);
    }
    inline Vector3f operator/(float scalar){
        return Vector3f(x/scalar,y/scalar,z/scalar);
    }
    inline Vector3f operator/(Vector3f vec3){
        return Vector3f(x/vec3.x,y/vec3.y,z/vec3.z);
    }
private:

};

#endif

