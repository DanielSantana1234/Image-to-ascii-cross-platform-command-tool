#include "requirements.h"
#include "image.h"
#include "image.c"
#include "ascii.h"

int main(int argc, char *argv[]){
    image_to_grayscale("Images/land.bmp");
    return 0;
}