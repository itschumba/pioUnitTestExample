#include "test/pioAtomTest-1/mod1.h"

void mod1_init(mod1_t *obj)
{
    obj->a = 0;
}
void mod1_set_a(mod1_t *obj, int a)
{
    obj->a=a;
}
int mod1_get_a(mod1_t *obj)
{
    return obj->a;
}

void mod1_process(mod1_t *obj)
{
    ;
}
