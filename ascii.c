#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h";
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image/stb_image_write.h"

// Use this file to then get the returned pixel image grayscale data to then associate each level of brightness to an ascii character