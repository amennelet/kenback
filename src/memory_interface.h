#ifndef MEMORY_INTERFACE_H
#define MEMORY_INTERFACE_H

struct MemoryInterface {
  bool (*init)(unsigned int size);
  unsigned char (*read)(unsigned int address);
  bool (*write)(unsigned int address, unsigned char value);
};

#endif // MEMORY_INTERFACE_H
