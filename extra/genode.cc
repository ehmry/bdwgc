#include "gc.h"

// Genode include
#include <base/thread.h>

extern "C" {

ptr_t GC_get_genode_stack_base()
{
  return Genode::Thread::mystack().base;
}

}
