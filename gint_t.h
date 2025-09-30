#ifndef GINT_T_H
#define GINT_T_H

#include <gmpxx.h>
#include <string>
#include <iostream>

class gint_t {
private:
    mpz_class value;

public:
    // 构造函数
    gint_t();
    gint_t(int num);
    gint_t(long long num);
    gint_t(const char* str);
    gint_t(const std::string& str);
    gint_t(const mpz_class& other);

    // 拷贝构造函数
    gint_t(const gint_t& other);

    // 赋值运算符
    gint_t& operator=(const gint_t& other);

    // 析构函数
    ~gint_t();

    // 基本算术运算符
    gint_t operator+(const gint_t& other) const;
    gint_t operator-(const gint_t& other) const;
    gint_t operator*(const gint_t& other) const;
    gint_t operator/(const gint_t& other) const;
    gint_t operator%(const gint_t& other) const;

    // 与int类型的混合运算
    gint_t operator+(int other) const;
    gint_t operator-(int other) const;
    gint_t operator*(int other) const;
    gint_t operator/(int other) const;
    gint_t operator%(int other) const;

    // 复合赋值运算符
    gint_t& operator+=(const gint_t& other);
    gint_t& operator-=(const gint_t& other);
    gint_t& operator*=(const gint_t& other);
    gint_t& operator/=(const gint_t& other);
    gint_t& operator%=(const gint_t& other);

    // 自增自减运算符
    gint_t& operator++();    // 前缀++
    gint_t operator++(int);  // 后缀++
    gint_t& operator--();    // 前缀--
    gint_t operator--(int);  // 后缀--

    // 比较运算符
    bool operator==(const gint_t& other) const;
    bool operator!=(const gint_t& other) const;
    bool operator<(const gint_t& other) const;
    bool operator>(const gint_t& other) const;
    bool operator<=(const gint_t& other) const;
    bool operator>=(const gint_t& other) const;

    // 与int的比较
    bool operator==(int other) const;
    bool operator!=(int other) const;
    bool operator<(int other) const;
    bool operator>(int other) const;
    bool operator<=(int other) const;
    bool operator>=(int other) const;

    // 转换函数
    std::string toString() const;

    // 友元函数：输入输出流
    friend std::ostream& operator<<(std::ostream& os, const gint_t& num);
    friend std::istream& operator>>(std::istream& is, gint_t& num);

    // 友元函数：int在左侧的运算符
    friend gint_t operator+(int a, const gint_t& b);
    friend gint_t operator-(int a, const gint_t& b);
    friend gint_t operator*(int a, const gint_t& b);
    friend gint_t operator/(int a, const gint_t& b);
    friend gint_t operator%(int a, const gint_t& b);

    friend bool operator==(int a, const gint_t& b);
    friend bool operator!=(int a, const gint_t& b);
    friend bool operator<(int a, const gint_t& b);
    friend bool operator>(int a, const gint_t& b);
    friend bool operator<=(int a, const gint_t& b);
    friend bool operator>=(int a, const gint_t& b);
};

#endif // GINT_T_H
