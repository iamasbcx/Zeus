#ifndef _Allocator_h_
#define _Allocator_h_

#include "MemoryPool.h"

#ifdef MEMORY_POOL

void *operator new(size_t size) {
	return Memory::Instance().alloc(size);
}

void *operator new[](size_t size) {
	return Memory::Instance().alloc(size);
}

void operator delete(void *p) {
	Memory::Instance().free(p);
}

void operator delete[](void *p) {
	Memory::Instance().free(p);
}

void *mem_alloc(size_t size) {
	return malloc(size);
}

void mem_free(void * p) {
	free(p);
}

#endif  // MEMORY_POOL
#endif // !_Allocator_h_