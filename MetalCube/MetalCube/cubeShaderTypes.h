//
//  cubeShaderTypes.h
//  MetalCube
//
//  Created by Mohak Tamhane on 2/21/26.
//

#ifndef cubeShaderTypes_h
#define cubeShaderTypes_h

#include <simd/simd.h>

struct CubeVertex {
    vector_float3 position;
    vector_float3 normal;
};

struct CubeParams {
    vector_float3 size;
    uint32_t dimensions_x;
    uint32_t dimensions_y;
    float cubeSphereInterpolationRatio;
};

#endif /* cubeShaderTypes_h */
