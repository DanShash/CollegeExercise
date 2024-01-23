//Excercise 1
#include <iostream>

void twice(int* num_ptr) {
    *num_ptr *= 2;
}

int main() {
    int num = 5;
    twice(&num); // pass the address of num 
    std::cout << num << std::endl; // print value of num
    return 0;
}
