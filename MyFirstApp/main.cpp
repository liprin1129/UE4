//
//  main.cpp
//  MyFirstApp
//
//  Created by Seongmuk Gang on 19/09/2016.
//  Copyright © 2016 Seongmuk Gang. All rights reserved.
//

#include <iostream>

using namespace std;

struct Vector{
    float x, y, z;
};

int main(int argc, const char * argv[]) {
    Vector v;
    v.x = 20, v.y = 30, v.z = 10;
    cout << "s-space in " << v.x << ", " << v.y << ", " << v.z << endl;
    return 0;
}
