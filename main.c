//
// Created by CalibreC on 2022-08-19.
//

#include <stdio.h>
#include <stdlib.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define TJE_IMPLEMENTATION
#include "tiny_jpeg.h"

int main(int argc, char **argv)
{
    int width, height, num_components;

    /**
     * stdi_load 返回的数据为RGBRGBRGB
     */
    unsigned char *data = stbi_load("in.bmp", &width, &height, &num_components, 0);
    if (!data)
    {
        puts("Could not find file");
        return EXIT_FAILURE;
    }

    /* TinyJPEG使用JFIF文件格式 */
    if (!tje_encode_to_file("out.jpg", width, height, num_components, data))
    {
        fprintf(stderr, "Could not write JPEG\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}