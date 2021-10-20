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

    float arrAuto[] = { 1.3, 4.5, 5.6, 9.1};
    sum =  arraySum(arrAuto, 4);
    //std::cout << sum << std::endl;
    
    return 0;
}
