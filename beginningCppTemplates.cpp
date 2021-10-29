// Type your code here, or load an example.
#include <iostream>

template <typename T>
T add(T num1, T num2) {
    return num1 + num2;
}

template <typename T>
T arraySum(T* pArr, int arrSize){
    T sum = 0;
    for(int i = 0; i < arrSize; i++){
        sum += pArr[i];
    }
    return sum;
}

template <typename T>
T Max(T *pArr, int arrSize){
    T max = 0;
    for(int i = 0; i < arrSize; i++){
        max < pArr[i] ? max = pArr[i] : max = max;
    }
    return max;
}

int main(){
    auto sum = 0;
    sum = add(10, 20);
//    std::cout << sum << std::endl;
    sum = add(15., 25.3);
    //std::cout << sum << std::endl;
    sum = add('a', 'b');
    //std::cout << sum << std::endl;

    int arrIn[] = { 1, 4, 5, 9};
    sum = arraySum(arrIn, 4);
    //std::cout << sum << std::endl;
    

    double arrAuto[] = {4.5, 5.6, 9.1, 1.3};
    sum =  arraySum(arrAuto, 4);
    std::cout << sum << std::endl;

    auto max = 0;
    max = Max(arrAuto, 4);
    std::cout << max << std::endl;
    return 0;
}
