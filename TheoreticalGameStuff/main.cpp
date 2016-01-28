#include <cstdlib>
#include <iostream>
#include "Vector3f.h"
#include "Matrix4f.h"

using namespace std;

int main(int argc, char** argv) {
    Vector3f u(10, 0, 9);
    Vector3f v(5, 13, 0);
    Vector3f w(2, 16, 90);
    
    Vector3f vec3 = u*9+v*5+w*10;
    
    Matrix4f mat4;
    mat4.identity();
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++)
            cout << mat4.data[i*4+j];
        cout << endl;
    }
    
    cout << "X: " << vec3.x << " Y: " << vec3.y << " Z: " << vec3.z << endl;
    
    return 0;
}

