#ifndef MEMORY_INTERFACE_H
#define MEMORY_INTERFACE_H

#include <stdbool.h>

typedef bool (*Init)(unsigned int size);
typedef unsigned char (*Read)(unsigned int address);
typedef bool (*Write)(unsigned int address, unsigned char value);

typedef struct MemoryInterface {
  Init init;
  Read read;
  Write write;
} MEMORY_INTERFACE;

#endif // MEMORY_INTERFACE_H
