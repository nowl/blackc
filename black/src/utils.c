#include "black.h"

void *
memory_grow_to_size(void *mem_p,
                    size_t per_block,
                    int *mem_cap_ip,
                    int mem_size_i)
{
    /* null memory block */
    if(!mem_p) {
        *mem_cap_ip = mem_size_i;
        return malloc(*mem_cap_ip * per_block);
    }

    /* if need more memory then double cap until we have it */
    if(mem_size_i > *mem_cap_ip) {
        while(mem_size_i > *mem_cap_ip) {
            *mem_cap_ip *= 2;
        }

        mem_p = realloc(mem_p, *mem_cap_ip * per_block);
        
        if(!mem_p)
        {
            ERROR("error in malloc\n");
            exit(1);
        }
    }

    return mem_p;
}
