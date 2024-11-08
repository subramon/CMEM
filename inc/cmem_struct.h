#ifndef __CMEM_STRUCT_H
#define __CMEM_STRUCT_H
#include "qtypes.h"
//START_FOR_CDEF
#define CMEM_MAX_LEN_NAME    15
#define CMEM_ALIGNMENT 64 
typedef struct _cmem_rec_type {
  void *data;
  int64_t size;
  qtype_t qtype;
  char cell_name[CMEM_MAX_LEN_NAME+1];
  bool is_foreign; // true => do not delete 
  bool is_stealable; // true => data can be stolen
} CMEM_REC_TYPE;
//STOP_FOR_CDEF
#endif // __CMEM_STRUCT_H
