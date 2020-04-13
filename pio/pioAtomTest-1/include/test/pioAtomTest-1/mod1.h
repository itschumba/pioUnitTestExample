
#ifndef __MOD1_H
#define  __MOD1_H

typedef struct mod1_s
{
    int a;
}mod1_t;

void mod1_init(mod1_t *obj);

void mod1_set_a(mod1_t *obj, int a);
int mod1_get_a(mod1_t *obj);

void mod1_process(mod1_t *obj);
#endif // #ifndef __MOD1_H
