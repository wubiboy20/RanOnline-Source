// Stub for the Intel TBB library (tbb.lib), absent from this source tree
// (*.lib is gitignored). The only live use is tbb::task_scheduler_init in
// Lib_Network/s_CFieldServerThread.cpp, guarded by a config flag; the
// parallel_for use in GLGaeaServer.cpp is commented out. The class ctor and
// dtor are inline in the bundled header; only initialize() and terminate()
// are external. Nothing ever dereferences my_scheduler, so a non-null
// sentinel value is sufficient.
#include "tbb/task_scheduler_init.h"

namespace tbb
{
    void task_scheduler_init::initialize( int number_of_threads )
    {
        (void)number_of_threads;
        my_scheduler = reinterpret_cast<internal::scheduler*>( this );
    }

    void task_scheduler_init::terminate()
    {
        my_scheduler = NULL;
    }
}
