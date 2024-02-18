#ifndef MEMORY_H
#define MEMORY_H

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define KENBACK_MEMORY_SIZE 256

/* init :
 * initialize the computer memory
 *
 * unsigned int size : is the size in byte of the memory to create
 *
 * return : true if succeed
 *
 * remarks : memory will be initialized with 0x00 in all addresses.
 * if a previsous call was made to init(), the previsous memory allocation is
 * released first
 */
bool init(unsigned int size);

/* read :
 * read an address from memory
 *
 * unsigned int address : address to read
 *
 * return : memory value in an unsigned char
 *
 * remarks : will failed if the address is not in the memory allocated space of
 * if init has not been done
 */
unsigned char read(unsigned int address);

/* write :
 * write a value at the specified address
 *
 * unsigned int address : address where to write
 * unsigned char : value to write
 *
 * remarks : will failed if the address is not in the memory allocated space of
 * if init has not been done
 */
bool write(unsigned int address, unsigned char value);

#endif // MEMORY_H
