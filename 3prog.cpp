#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main(){
    const int N = 7;
    const int M = 5;
    int a[N] = {1, 4, 6, 8, 12, 51, 66};
    int b[M] = {2, 4, 5, 13, 15};
    int c[N+M];

    for(int i = 0, j = 0, c_counter = 0; i + j < N + M ;c_counter++){
        if (a[i] < b[j]){
            if (i != N){
                c[c_counter] = a[i];
                i++;
            }
            else {
                c[c_counter] = b[j];
                j++;
            }
        }
        else {
            if (j != M){
                c[c_counter] = b[j];
                j++;
            }
            else {
                c[c_counter] = a[i];
                i++;
            }
        }
    }

    return 0;
}