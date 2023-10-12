#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <hiper.h>

void *init(void *vargp)
{
    hiper_init((char *)"/etc/hiper/config.yml", (int *)0);
    hiper_start();
    return NULL;
}

// void *hiper_start(void *vargp)
// {
//     hiper_start();
//     return NULL;
// }

void *reload(void *vargp)
{
    hiper_reload();
    return NULL;
}

void *close(void *vargp)
{
    hiper_stop();
    return NULL;
}

int main()
{
    pthread_t hiper;

    pthread_create(&hiper, NULL, init, NULL);

    sleep(3000);

    exit(0);
}
