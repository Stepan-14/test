#include <iostream>
int main(int argc, char* argk[]) {
    for(int i {}; i < sizeof(argk); ++i) {
        std::cout << argk[i];
    }
}