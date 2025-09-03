#include <stdio.h>
#include <string.h>


// Use this file to convert the image to grayscale and return the pixel data in an array for the ascii file to use it

const char *get_filename_extension(const char *filename){
    const char *dot = strrchr(filename, '.');
    if(!dot || dot == filename){
        return "";
    }
    return dot + 1;
}

const char* image_to_grayscale(const char *file_name, const char* mode){
    FILE *fIn = fopen(file_name, mode);
    FILE *fOut = fopen("Images/image_gray.bmp", "wb");
    if(!fOut){
        printf("File error \n");
        return "";
    }
    if(strcmp(get_filename_extension(file_name), "bmp")){
        printf("Wrong file format\n");
        return "Try again";
    }
    return "It works!";
}