// counter!!!!

#include <iostream>

int main(){
    int count = 0;
    int total = 0;


    while (count <= 10){
        total = total + count;
        count++;
    }
    
    std::cout << total << std::endl;

    
    return 0;
}