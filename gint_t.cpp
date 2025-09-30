#include "gint_t.h"

// 构造函数
gint_t::gint_t() : value(0) {}

gint_t::gint_t(int num) : value(num) {}

// 解决long long构造函数的歧义问题
gint_t::gint_t(long long num) : value(static_cast<long>(num)) {}

gint_t::gint_t(const char* str) : value(str) {}

gint_t::gint_t(const std::string& str) : value(str) {}

gint_t::gint_t(const mpz_class& other) : value(other) {}

// 拷贝构造函数
gint_t::gint_t(const gint_t& other) : value(other.value) {}

// 赋值运算符
gint_t& gint_t::operator=(const gint_t& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

// 析构函数
gint_t::~gint_t() {}

// 基本算术运算符
gint_t gint_t::operator+(const gint_t& other) const {
    return gint_t(value + other.value);
}

gint_t gint_t::operator-(const gint_t& other) const {
    return gint_t(value - other.value);
}

gint_t gint_t::operator*(const gint_t& other) const {
    return gint_t(value * other.value);
}

gint_t gint_t::operator/(const gint_t& other) const {
    return gint_t(value / other.value);
}

gint_t gint_t::operator%(const gint_t& other) const {
    return gint_t(value % other.value);
}

// 与int类型的混合运算
gint_t gint_t::operator+(int other) const {
    return gint_t(value + other);
}

gint_t gint_t::operator-(int other) const {
    return gint_t(value - other);
}

gint_t gint_t::operator*(int other) const {
    return gint_t(value * other);
}

gint_t gint_t::operator/(int other) const {
    return gint_t(value / other);
}

gint_t gint_t::operator%(int other) const {
    return gint_t(value % other);
}

// 复合赋值运算符
gint_t& gint_t::operator+=(const gint_t& other) {
    value += other.value;
    return *this;
}

gint_t& gint_t::operator-=(const gint_t& other) {
    value -= other.value;
    return *this;
}

gint_t& gint_t::operator*=(const gint_t& other) {
    value *= other.value;
    return *this;
}

gint_t& gint_t::operator/=(const gint_t& other) {
    value /= other.value;
    return *this;
}

gint_t& gint_t::operator%=(const gint_t& other) {
    value %= other.value;
    return *this;
}

// 自增自减运算符
gint_t& gint_t::operator++() {  // 前缀++
    ++value;
    return *this;
}

gint_t gint_t::operator++(int) {  // 后缀++
    gint_t temp(*this);
    ++value;
    return temp;
}

gint_t& gint_t::operator--() {  // 前缀--
    --value;
    return *this;
}

gint_t gint_t::operator--(int) {  // 后缀--
    gint_t temp(*this);
    --value;
    return temp;
}

// 比较运算符
bool gint_t::operator==(const gint_t& other) const {
    return value == other.value;
}

bool gint_t::operator!=(const gint_t& other) const {
    return value != other.value;
}

bool gint_t::operator<(const gint_t& other) const {
    return value < other.value;
}

bool gint_t::operator>(const gint_t& other) const {
    return value > other.value;
}

bool gint_t::operator<=(const gint_t& other) const {
    return value <= other.value;
}

bool gint_t::operator>=(const gint_t& other) const {
    return value >= other.value;
}

// 与int的比较
bool gint_t::operator==(int other) const {
    return value == other;
}

bool gint_t::operator!=(int other) const {
    return value != other;
}

bool gint_t::operator<(int other) const {
    return value < other;
}

bool gint_t::operator>(int other) const {
    return value > other;
}

bool gint_t::operator<=(int other) const {
    return value <= other;
}

bool gint_t::operator>=(int other) const {
    return value >= other;
}

// 转换函数
std::string gint_t::toString() const {
    return value.get_str();
}

// 输入输出流
std::ostream& operator<<(std::ostream& os, const gint_t& num) {
    os << num.value;
    return os;
}

std::istream& operator>>(std::istream& is, gint_t& num) {
    is >> num.value;
    return is;
}

// int在左侧的运算符
gint_t operator+(int a, const gint_t& b) {
    return gint_t(a + b.value);
}

gint_t operator-(int a, const gint_t& b) {
    return gint_t(a - b.value);
}

gint_t operator*(int a, const gint_t& b) {
    return gint_t(a * b.value);
}

gint_t operator/(int a, const gint_t& b) {
    return gint_t(a / b.value);
}

gint_t operator%(int a, const gint_t& b) {
    return gint_t(a % b.value);
}

bool operator==(int a, const gint_t& b) {
    return a == b.value;
}

bool operator!=(int a, const gint_t& b) {
    return a != b.value;
}

bool operator<(int a, const gint_t& b) {
    return a < b.value;
}

bool operator>(int a, const gint_t& b) {
    return a > b.value;
}

bool operator<=(int a, const gint_t& b) {
    return a <= b.value;
}

bool operator>=(int a, const gint_t& b) {
    return a >= b.value;
}
