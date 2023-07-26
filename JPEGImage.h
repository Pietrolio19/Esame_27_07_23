#ifndef HTML_PDF_ABSFACTORY_JPEGIMAGE_H
#define HTML_PDF_ABSFACTORY_JPEGIMAGE_H

#include "header.h"
#include "Image.h"

class JPEGImage : public Image{
public:
    JPEGImage(string ext, int bytes, int w, int h) : Image(ext, bytes, w, h) {}

    void display() override{
        cout << "Immagine: " << width << "x" << height << endl;
        cout << "Estensione: " << extension << endl;
    }
};
#endif //HTML_PDF_ABSFACTORY_JPEGIMAGE_H
