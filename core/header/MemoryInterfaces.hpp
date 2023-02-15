#include "nvEncodeAPI.h"
#include "core.h"
#include <cuda.h>

using namespace MCT;


namespace MCT {

enum Pixcel_Format {
    UNDEFINED = 0,
    Y = 1,
    RGB = 2,
    NV12 = 3,
    YUV420 = 4,
    RGB_PLANAR = 5,
    BGR = 6,
    YCBCR = 7,
    YUV444 = 8,
    RGB_32F = 9,
    RGB_32F_PLANAR = 10,
    YUV422 = 11,
    P10 = 12,
    P12 = 13, 
};

enum ColorSpace {
    BT_601 = 0,
    BT_709 = 1,
    UNSPEC = 2,
};

enum ColorRange {
    MPEG = 0, /* Narrow range.*/
    JPEG = 1, /* Full range. */
    UDEF = 2,    
};

/*
Represent CPU-side Memory.
*/

class Buffer

}