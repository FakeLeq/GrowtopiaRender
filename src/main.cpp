

#include <CImg.h>
#include <cmath>
#include <iostream>

int main() {
    uint32_t width = 100;
    uint32_t height = 60;

    cimg_library::CImg<unsigned char> img(width * 32, height * 32);
    //img.fill(0);

    cimg_library::CImg<unsigned char> overlay("test.bmp");

    for(int i = 0; i < 6000; i++) {
        img.draw_image((i % width) * 32, i / width * 32, overlay);
    }

    img.save("out.bmp");
}