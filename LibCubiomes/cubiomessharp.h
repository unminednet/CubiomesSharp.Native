#ifndef CUBIOMESSHARP_H_
#define CUBIOMESSHARP_H_

#include "cubiomes/generator.h"
#include "cubiomes/biomenoise.h"

#ifdef __cplusplus
extern "C"
{
#endif

Generator* allocGenerator();
SurfaceNoise* allocSurfaceNoise();
EndNoise* allocEndNoise();
NetherNoise* allocNetherNoise();

void* allocMem(size_t size);
void freeMem(void **s);

#ifdef __cplusplus
}
#endif

#endif
