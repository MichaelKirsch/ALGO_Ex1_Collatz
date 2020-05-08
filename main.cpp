#include <iostream>

void collatz(int& c,int start)
{
    std::cout << "Number:" << start << std::endl;
    if(start<=1)
    {
        std::cout << "Done, took: "<< c <<" Steps" << std::endl;
        return;
    }

    c++;

    if(c>1000)
    {
        std::cout <<"Forced Termination" << start << std::endl;
        return;//forced termination
    }


    if(!start%2)
        collatz(c,start/2);
    else
        collatz(c,3*start+1);
}

int main() {
    int counter =0;
    collatz(counter,27);
    counter=0;
    collatz(counter,37);
    counter =0;
    collatz(counter,42);
    return 0;
}
