/*
 * @Author: altail 2420206805z@gmail.com
 * @Date: 2023-02-11 12:11:59
 * @LastEditors: altail 2420206805z@gmail.com
 * @LastEditTime: 2023-02-11 15:32:08
 * @FilePath: /C++/枪战/include/Soldier.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <string>
#include "Gun.h"

class Soldier
{
private:
    std::string _name;
    Gun *_ptr_gun;

public:
    Soldier(std::string name);
    ~Soldier();
    void addBullerToGun(int num);
    void addGun(Gun *ptr_Gun);
    bool fire();
};
