#include "disable_hidpi.h"

extern "C"
int osx_retina_hack(long winId)
{
    disableGLHiDPI(winId);

    return 0;
}

