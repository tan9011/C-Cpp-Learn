/*
 * @Author: altail 2420206805z@gmail.com
 * @Date: 2023-02-11 11:59:42
 * @LastEditors: altail 2420206805z@gmail.com
 * @LastEditTime: 2023-02-11 15:16:53
 * @FilePath: /C++/枪战/src/Gun.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Gun.h"
#include "iostream"
using namespace std;

void Gun::addBullet(int bullet_num)
{
    this->_bullet_count += bullet_num;
}

bool Gun::shoot()
{
    if (this->_bullet_count <= 0)
    {
        cout << "thers is no bullet!" << endl;
        return false;
    }

    this->_bullet_count -= 1;
    cout << "shoot successfully!" << endl;
    return true;
}