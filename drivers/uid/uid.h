#ifndef UID_H
#define UID_H

#include <stdint.h>

#define UID_CHARACTER_SET_LENGTH 60
#define UID_LENGTH 11

__attribute__ ((section (".ramfunc")))
uint64_t uid_get_uid64(void);

char uid_get_serial_char_from_num(uint8_t num);
void uid_to_serial_number(uint64_t value, char *str);
#endif
