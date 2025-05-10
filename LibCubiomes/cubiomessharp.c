#include "cubiomes/generator.h"
#include "cubiomes/biomenoise.h"
#include "cubiomessharp.h"

Generator* allocGenerator() 
{
    Generator* g = (Generator*)malloc(sizeof(Generator));    
    return g;
}

SurfaceNoise* allocSurfaceNoise()
{
    SurfaceNoise* sn = (SurfaceNoise*)malloc(sizeof(SurfaceNoise));
    return sn;
}

EndNoise* allocEndNoise()
{
    EndNoise* en = (EndNoise*)malloc(sizeof(EndNoise));
    return en;
}

NetherNoise* allocNetherNoise()
{
    NetherNoise* nn = (NetherNoise*)malloc(sizeof(NetherNoise));
    return nn;
}

void* allocMem(size_t size)
{
    return malloc(size);
}

void freeMem(void **s)
{
    free(*s);
    *s = NULL;
}
