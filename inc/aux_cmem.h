#ifndef __AUX_CMEM_H
#define __AUX_CMEM_H
extern int 
cmem_free( 
    CMEM_REC_TYPE *ptr_cmem
    );
extern int 
cmem_dupe( // INTERNAL NOT VISIBLE TO LUA 
    CMEM_REC_TYPE *ptr_cmem,
    void *data,
    uint64_t size,
    qtype_t qtype,
    const char * const cell_name
    );
extern int 
cmem_malloc( // INTERNAL NOT VISIBLE TO LUA 
    CMEM_REC_TYPE *ptr_cmem,
    uint64_t size,
    qtype_t qtype,
    const char *const cell_name
    );
#endif // __AUX_CMEM_H
