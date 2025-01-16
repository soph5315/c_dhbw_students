#ifndef LIB_H
#define LIB_H

#include <stdbool.h>
#include <stdint.h>

bool allOf(int32_t *array, size_t length, int32_t value);

bool anyOf(int32_t *array, size_t length, int32_t value);

bool noneOf(int32_t *array, size_t length, int32_t value);

size_t count(int32_t *array, size_t length, int32_t value);

#endif