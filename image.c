#include "image.h"

// Use this file to convert the image to grayscale and return the pixel data in an array for the ascii file to use it

const char *get_filename_extension(const char *filename){
    const char *dot = strrchr(filename, '.');
    if(!dot || dot == filename){
        return "";
    }
    return dot + 1;
}

void image_to_grayscale(const char *filename){
    FILE *fIn = fopen(filename, "rb");
    FILE *fOut = fopen("Images/image_gray.bmp", "wb");
    if(!fIn || !fOut){
        printf("File error \n");
    }

    if(strcmp(get_filename_extension(filename), "bmp") != 0){
        printf("Wrong file format\n");
    }
    //Skip the first 14 bytes which is the bmp file header
    BitMapFileHeader fileheader;
    BitMapInfoHeader infoheader;

    //read the file header
    if(fread(&fileheader, sizeof(BitMapFileHeader), 1, fIn) != 1){
        perror("Error reading file header");
        fclose(fIn);
        fclose(fOut);
    }

    //read the info header
    if(fread(&infoheader, sizeof(BitMapInfoHeader), 1, fIn) != 1){
        perror("Error reading info header");
        fclose(fIn);
        fclose(fOut);
    }

    //make a nested for loop to loop through the pixel data
    printf(" The file size: %d\n", fileheader.filesize);

    printf("Image width: %d\n", infoheader.width);
    printf("Image height: %d\n", infoheader.height);

    //loop through the pixels to convert to grayscale
    fclose(fIn);
    fclose(fOut);
}

void grayscale_negative(const char *filename){
    //loop through the pixels in the new grayscale image
    //and return the negative (255 - pixel)
}