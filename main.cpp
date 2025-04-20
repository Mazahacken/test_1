#include<iostream>

template<typename T> T getSum(T x,  T y){
    return x + y;
}

auto main()-> int {

    int a = 10;
    int b = 15;
    std::cout<<getSum<int>(a, b)<<std::endl;
}