#include "processor.h"

instruction getInstruction(unsigned char inputByte) {
  instruction calculatedInstruction;

  if ((inputByte & 0700) < 3 && (inputByte & 0070) == 0000 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = ADD_INST;
  if ((inputByte & 0700) < 3 && (inputByte & 0070) == 0010 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = SUB_INST;
  if ((inputByte & 0700) < 3 && (inputByte & 0070) == 0020 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = LOAD_INST;
  if ((inputByte & 0700) < 3 && (inputByte & 0070) == 0030 &&
      (inputByte & 0007) > 0002)
    calculatedInstruction.operation = STORE_INST;

  return calculatedInstruction;
}
