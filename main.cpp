#include "header.h"
#include "HTMLDocument.h"
#include "PDFDocument.h"
#include "AbstractFactory.h"
#include "Text.h"
#include "Image.h"

int main() {
    int pdf;
    bool isPDF;

    scanf("%d", &pdf);
    if(pdf == 0){
        isPDF = false;
    }
    else
        isPDF = true;

    AbstractFactory* factory;

    if(isPDF){
        factory = new PDFDocument("La grande storia", 65000);
    }
    else
        factory = new HTMLDocument("Progetto HTML", 400);

    Image* img = nullptr;
    Text* txt = nullptr;

    img = factory->createImage();
    txt = factory->createText();

    img->display();
    txt->printText();

    return 0;
}
