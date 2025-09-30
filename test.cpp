#include "gint_t.h"
#include <iostream>

int main() {
    // 像使用int一样声明和初始化
    gint_t a = 123456789;
    gint_t b(987654321);
    gint_t c;

    // 基本算术运算
    c = a + b;
    std::cout << "a + b = " << c << std::endl;

    c = a * b;
    std::cout << "a * b = " << c << std::endl;

    // 与普通int混合运算
    gint_t d = a + 100;
    std::cout << "a + 100 = " << d << std::endl;

    d = 200 * b;
    std::cout << "200 * b = " << d << std::endl;

    // 比较运算
    if (a < b) {
        std::cout << "a is less than b" << std::endl;
    }

    // 处理大整数（超出普通int范围）
    gint_t e("123456789012345678901234567890");
    gint_t f("987654321098765432109876543210");
    gint_t g = e * f;
    std::cout << "e * f = " << g << std::endl;

    // 自增自减
    gint_t h = 10;
    h++;
    std::cout << "h++ = " << h << std::endl;

    // 输入输出
    std::cout << "Enter a number: ";
    gint_t input;
    std::cin >> input;
    std::cout << "You entered: " << input << ", squared is: " << input * input << std::endl;

    return 0;
}
