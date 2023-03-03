/*
 * @Author: altail 2420206805z@gmail.com
 * @Date: 2023-02-11 11:59:35
 * @LastEditors: altail 2420206805z@gmail.com
 * @LastEditTime: 2023-02-11 15:50:49
 * @FilePath: /C++/枪战/include/Gun.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <string>

class Gun
{
private:
    int _bullet_count;
    std::string _type;

public:
    Gun(std::string type)
    {
        this->_bullet_count = 0;
        this->_type = type;
    }

    void addBullet(int bullet_num);
    bool shoot();
};
