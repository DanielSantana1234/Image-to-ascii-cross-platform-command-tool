#ifndef IMAGE_H_
#define IMAGE_H_

#include <stdio.h>
#include <string.h>
#include <stdint.h>

const char *get_filename_extension(const char *filename);
void image_to_grayscale(const char *filename);
void grayscale_negative(const char *filename);

// Struct padding because the gcc default behavior is
// to pad the bytes to structs for better performance
// The padding makes the struct larger than the 14-byte and 40-bytes
// both file and info headers
// Pragma pack specifies the packing alignment, using 1 removes padding
// Just like __attribute__((packed)) but it's compiler specific 

#pragma pack(push, 1)
typedef struct{
    uint16_t signature;
    uint32_t filesize;
    uint32_t reserved;
    uint32_t dataoffset;
} BitMapFileHeader;

typedef struct{
    uint32_t headersize;
    uint32_t width;
    uint32_t height;
    uint16_t planes;
    uint16_t bits_per_pixel;
    uint32_t compression;
    uint32_t image_size;
    int32_t x_pixels_per_m;
    int32_t y_pixels_per_m;
    uint32_t colors_used;
    uint32_t important_colors;
} BitMapInfoHeader;
#pragma pack(pop)

#endif 