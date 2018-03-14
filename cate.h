#ifndef _CATE_H
#define _CATE_H

#define CATE_PUBLIC     __attribute__((__visibility__("default")))
#define CATE_PRIVATE    __attribute__((__visibility__("hidden")))

typedef struct cate_vm_t {
} cate_vm_t;

CATE_PUBLIC cate_vm_t*  cate_vm_create(void);
CATE_PUBLIC void        cate_vm_close(cate_vm_t* self);

#endif /* !_CATE_H */
