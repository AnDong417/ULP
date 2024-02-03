#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

static int numPlus;
static std::mutex mtx;

int add_two_num()
{
    return numPlus++;
}

int main()
{
    std::thread threadA(add_two_num);
    threadA.join();

    return 0;
}