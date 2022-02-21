#pragma once

#include <vector>

using uchar = unsigned char;
using GrayscaleMatrix = std::vector<std::vector<uchar>>;

class Image
{
public:
    // Konstruktor
    Image();
    Image(const unsigned int width, const unsigned int height);

    // Destruktor
    ~Image();

    // Getter
    unsigned int get_width() const;
    unsigned int get_height() const;

    // Helper
    void save_image(const char *file_name) const;

   
    void clear_image();
  
    void set_pixel(const unsigned int x, const unsigned int y, const uchar value);
 
    void resize_image(const unsigned int new_width, const unsigned int new_height);
  
    void fill_image(const uchar value);
 
    void draw_line(const unsigned int x1,
                   const unsigned int y1,
                   const unsigned int x2,
                   const unsigned int y2,
                   const uchar value);

private:
    unsigned int m_width;
    unsigned int m_height;
    GrayscaleMatrix m_matrix;
};
