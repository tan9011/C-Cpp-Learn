/*
 * @Author: altail 2420206805z@gmail.com
 * @Date: 2023-02-04 20:57:36
 * @LastEditors: altail 2420206805z@gmail.com
 * @LastEditTime: 2023-02-09 15:34:20
 * @FilePath: /C++/5.3.2/src/swap.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "swap.h"
using namespace std;
void swap::run()
{
    int temp;
    temp = _a;
    _a = _b;
    _b = temp;
}

void swap::printInfo()
{
    cout << "_a=" << _a << endl;
    cout << "_b=" << _b << endl;
}
