/*
 * @Author: altail 2420206805z@gmail.com
 * @Date: 2023-02-09 15:24:11
 * @LastEditors: altail 2420206805z@gmail.com
 * @LastEditTime: 2023-02-09 15:38:46
 * @FilePath: /C++/5.3.2/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "swap.h"

int main(int argc, char **argv)
{
    swap myswap123(10, 20);
    myswap123.printInfo();
    myswap123.run();
    myswap123.printInfo();

    return 0;
}