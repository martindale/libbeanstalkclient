/**
 * =====================================================================================
 * @file   evvector.h
 * @brief  header file for evvector
 * @date   07/05/2010 06:20:49 PM
 * @author Roey Berman, (royb@walla.net.il), Walla!
 * =====================================================================================
 */
#ifndef EVVECTOR_H
#define EVVECTOR_H 

#include <stdbool.h>

#define EVVECTOR_FREE(vec) ( (vec)->size - ( (vec)->eom - (vec)->data ) - 1 )

struct _evvector {
    char   *data;
    char  *som;
    char  *eom;
    size_t size;
    size_t realloc_size;
};

typedef struct _evvector evvector;

evvector *evvector_new(size_t init_size, size_t realloc_size);
bool      evvector_expand(evvector *vec);

#endif /* EVVECTOR_H */