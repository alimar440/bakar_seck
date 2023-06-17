#ifndef DOCUMENT_H
#include<stdio.h>

typedef struct Word {
    char word[255];
}Word;

typedef struct Document {
    int id;
    char title[255];
    Word  words[255];
}Document;

Document *createDocument(int id, char title[255], Word word[255]);
#endif