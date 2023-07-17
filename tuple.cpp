#include <iostream>
#include <utility>
#include <tuple>
#include <string>

std::pair<int, char> foo(int a, char b) {
    return std::make_pair(a, b);
}

std::tuple<int, char, double> bar(int a, char b, double c) {
    return std::make_tuple(a, b, c);
}

int main() {
    int a;
    char b;
    std::cin >> a >> b;
    std::pair<int, char> c = foo(a, b);
    std::cout << c.first << " " << c.second << std::endl;
    std::tuple<int, char> tuple_from_pair_operator_assignment = c;
    std::cout << std::get<0>(tuple_from_pair_operator_assignment) << " " << std::get<1>(tuple_from_pair_operator_assignment) << std::endl;
    int d;
    char e;
    double f;
    std::cin >> d >> e >> f;
    std::tuple<int, char, double> g = bar(d, e, f);
    std::cout << std::get<0>(g) << " " << std::get<1>(g) << " " << std::get<2>(g) << std::endl;
    int h;
    char i;
    double j;
    std::string k;
    std::tuple<int, char, double, std::string> L = { 1L, 'i', 1.5F, "kkkkkkk_std::string" };
    std::tie(h, i, j, k) = L;
    std::tie(h, i, j, k) = std::make_tuple(1L, 'i', 1.5F, "kkkkkkk_std::string");
    std::cout << h << ' ' << i << ' ' << j << ' ' << k << std::endl;

    return 0;
}