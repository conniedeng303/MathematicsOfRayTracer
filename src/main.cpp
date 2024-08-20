#include "components/color.h"
#include "components/vec3.h"
#include <iostream>
#include <fstream>
#include <iomanip> // for setting precision

int main() {
    
    std::ofstream out_file{"image.ppm"};

    int image_width = 256;
    int image_height = 256;

    //Rendering

    out_file << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; ++j) {
        for (int i = 0; i < image_width; ++i) {
            auto pixel_color = color(double(i)/(image_width-1), double(j)/(image_height-1), 0);
            write_color(out_file, pixel_color);
        }
    }
}