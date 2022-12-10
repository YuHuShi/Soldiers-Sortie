#include "Gun.h"

#include "Soldier.h"
#include "iostream"

void test()
{
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("(98K"));
    sanduo.addBulletToGun(20);
    sanduo.fire();

}

int main()
{
    std::cout<<"test task!!!!!!!"<<std::endl;
       test();
    return 0;

}