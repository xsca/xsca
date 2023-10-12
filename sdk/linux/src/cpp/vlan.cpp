#include <iostream>
#include <thread>
#include <hiper.h>

using namespace std;

void init()
{
    hiper_init((char *)"/etc/hiper/config.yml", (int *)0);
    hiper_start()
}

// void runHiper()
// {
//     hiper_start();
// }

void reload()
{
    hiper_reload();
}

void close()
{
    hiper_stop();
}

int main()
{
    std::thread hiper(init);

    return 0;
}
