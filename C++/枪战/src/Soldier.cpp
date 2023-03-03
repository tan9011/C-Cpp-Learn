/*
 * @Author: altail 2420206805z@gmail.com
 * @Date: 2023-02-11 12:12:43
 * @LastEditors: altail 2420206805z@gmail.com
 * @LastEditTime: 2023-02-11 15:33:44
 * @FilePath: /C++/枪战/src/Soldier.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Soldier.h"

Soldier::Soldier(std::string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
}

void Soldier::addGun(Gun *ptr_gun)
{
    this->_ptr_gun = ptr_gun;
}

void Soldier::addBullerToGun(int num)
{
    this->_ptr_gun->addBullet(num);
}

bool Soldier::fire()
{
    return (this->_ptr_gun->shoot());
}

Soldier::~Soldier()
{
    if (this->_ptr_gun == nullptr)
    {
        return;
    }
    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}