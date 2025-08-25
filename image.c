#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h";
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image/stb_image_write.h"

// Use this file to convert the image to grayscale and return the pizel data in an array for the ascii file to use it