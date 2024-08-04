#include <iostream>


int main(){
    const int N = 10;
    int arr[N];
    int *p = arr;
    for(int i = 0; i < N; i++, p++){
        if 
        *p = i * 5;
    }
    for(int i = 0; i < N; i++){
        std::cout << i << "\'th element of array is:" << arr[i] << std::endl;
    }
    return 0;
}