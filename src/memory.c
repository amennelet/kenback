#include "memory.h"

unsigned char *memory = NULL;
unsigned int memorySize = 0;

bool init(unsigned int size) {
  if (memory != NULL)
    free(memory);
  memory = NULL;
  memorySize = 0;
  if (size < KENBACK_MEMORY_SIZE)
    return false;
  memory = malloc(size);
  if (memory == NULL)
    return false;
  memorySize = size;
  memset(memory, 0, memorySize);
  return true;
}
unsigned char read(unsigned int address) {
  assert(address >= 0 && address < memorySize);
  return memory[address];
}
bool write(unsigned int address, unsigned char value) {
  assert(address >= 0 && address < memorySize);
  memory[address] = value;
  return true;
}
