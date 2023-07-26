#ifndef HTML_PDF_ABSFACTORY_HTMLTEXT_H
#define HTML_PDF_ABSFACTORY_HTMLTEXT_H

#include "header.h"
#include "Text.h"

class HTMLText : public Text{
public:
    HTMLText(string txt, string ext, int bytes) : Text(txt, ext, bytes) {}

    void printText() override{
        cout << "Testo: " << text << endl;
        cout << "Estensione: " << extension << endl;
    }
};
#endif //HTML_PDF_ABSFACTORY_HTMLTEXT_H
