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

struct Player {
    string name;
    int hp;
    Vector position;
};

int main(int argc, const char * argv[]) {
    Player p;
    p.name = "Robin", p.hp = 100, p.position.x = 10, p.position.y = 20, p.position.z = 30;
    
    Player *ptrP;
    ptrP = &p;
    ptrP -> hp -= 30;
    ptrP -> position.x += 30, ptrP -> position.y -= 10;
    
    cout << p.name << ", " << p.hp << ", x:" << p.position.x << ", y:" << p.position.y << ", z:" << p.position.z << endl;
    
    int a = 10;
    int *ptrA = 0;
    ptrA = &a;
    cout << *ptrA << endl;
    return 0;
}
