#ifndef VNCVIEW_GLOBAL_H
#define VNCVIEW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(VNCVIEW_LIBRARY)
#  define VNCVIEWSHARED_EXPORT Q_DECL_EXPORT
#else
#  define VNCVIEWSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // VNCVIEW_GLOBAL_H
