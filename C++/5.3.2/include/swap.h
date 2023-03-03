/*
 * @Author: altail 2420206805z@gmail.com
 * @Date: 2023-02-04 20:57:26
 * @LastEditors: altail 2420206805z@gmail.com
 * @LastEditTime: 2023-02-04 21:07:55
 * @FilePath: /C++/5.3.2/include/swap.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <iostream>

class swap
{
private:
    int _a;
    int _b;

public:
    void run();
    void printInfo();
    swap(int a, int b)
    {
        this->_a = a;
        this->_b = b;
    }
};
