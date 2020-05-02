#include <iostream>

void collatz(int start)
{
    std::cout << "Number:" << start << std::endl;
    if(start<=0||start==1)
        return;

    if(start%2)
        collatz(start/2);
    else
        collatz(3*start+1);
}

int main() {
    collatz(1000);
    std::cout << "Done" << std::endl;
    return 0;
}
