#ifndef HTML_PDF_ABSFACTORY_TIFFIMAGE_H
#define HTML_PDF_ABSFACTORY_TIFFIMAGE_H

#include "header.h"
#include "Image.h"

class TIFFImage : public Image{
public:
    TIFFImage(string ext, int bytes, int w, int h) : Image(ext, bytes, w, h) {}

    void display() override{
        cout << "Immagine: " << width << "x" << height << endl;
        cout << "Estensione: " << extension << endl;
    }
};
#endif //HTML_PDF_ABSFACTORY_TIFFIMAGE_H
