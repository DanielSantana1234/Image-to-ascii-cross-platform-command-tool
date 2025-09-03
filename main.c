#include <stdio.h>
#include <stdlib.h>
#include "image.c"
#include "ascii.c"

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h";
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image/stb_image_write.h"

int main(int argc, char *argv[]){
    printf(image_to_grayscale("Images/blackbuck.bmp", "wb"));
    return 0;
}