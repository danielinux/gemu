#include "ge.h"

int main(int argc, char *argv[])
{
    struct ge ge130;
    int ret;

    ret = ge_init(&ge130);
    if (ret != 0)
        return ret;

    /* load with memory / and or setup peripherics */

    ge_clear(&ge130);
    ge_start(&ge130);

    ret = ge_run(&ge130);
    return ret;
}
