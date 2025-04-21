#include<iostream>

template<typename T> T getSum(T x,  T y){
    return x + y;
}



auto main()-> int {

    std::unique_ptr<int[]> ptrArr = std::make_unique<int[]>(6);
    for (int i = 0; i < 6; ++i) {
        ptrArr[i] = i;
        std::cout << ptrArr[i] << std::endl;
    }
    int a = 10;
    int b = 15;
    std::cout<<getSum<int>(a, b)<<std::endl;
}