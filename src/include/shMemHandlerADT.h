#ifndef shMemADT_h
#define shMemADT_h

typedef struct shMemHandlerCDT *shMemHandlerADT;

shMemHandlerADT newShMemHandler();

int initShMem(int key);

void attachTo(shMemHandlerADT shMemHandler, int shMemID, int reader);

void writeShMem(shMemHandlerADT shMemHandler, const char *msg);

void readShMem(shMemHandlerADT shMemHandler, char *buff);

void closeShMem(shMemHandlerADT shMemHandler);

void finishWriting(shMemHandlerADT shMemHandler);

int canRead(shMemHandlerADT shMemHandler);

void destroyShMem(shMemHandlerADT shMemHandler, int shMemID);

void freeHandler(shMemHandlerADT shMemHandler);

#endif