/*
 * @Author: altail 2420206805z@gmail.com
 * @Date: 2023-02-11 15:12:06
 * @LastEditors: altail 2420206805z@gmail.com
 * @LastEditTime: 2023-02-11 16:40:48
 * @FilePath: /C++/枪战/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Gun.h"
#include "Soldier.h"
#include <iostream>
void test()
{
    Soldier sanduo("xisanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBullerToGun(20);
    sanduo.fire();
}

int main()
{

    std::cout << "this is a cmake test" << std::endl;
    std::cout << "this is a cmake test" << std::endl;
    test();
    return 0;
}