#ifndef _RFB_RFBCONFIG_H
#define _RFB_RFBCONFIG_H 1
 
/* rfb/rfbconfig.h. Generated automatically at end of configure. */
/* rfbconfig.h.  Generated from rfbconfig.h.in by configure.  */
/* rfbconfig.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef LIBVNCSERVER_AC_APPLE_UNIVERSAL_BUILD */

/* Enable 24 bit per pixel in native framebuffer */
#ifndef LIBVNCSERVER_ALLOW24BPP 
#define LIBVNCSERVER_ALLOW24BPP  1 
#endif

/* work around when write() returns ENOENT but does not mean it */
/* #undef LIBVNCSERVER_ENOENT_WORKAROUND */

/* Use ffmpeg (for vnc2mpg) */
/* #undef LIBVNCSERVER_FFMPEG */

/* Android host system detected */
/* #undef LIBVNCSERVER_HAVE_ANDROID */

/* Define to 1 if you have the <arpa/inet.h> header file. */
/* #undef LIBVNCSERVER_HAVE_ARPA_INET_H */

/* Avahi/mDNS client build environment present */
/* #undef LIBVNCSERVER_HAVE_AVAHI */

/* Define to 1 if you have the `crypt' function. */
/* #undef LIBVNCSERVER_HAVE_CRYPT */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef LIBVNCSERVER_HAVE_DLFCN_H */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef LIBVNCSERVER_HAVE_DOPRNT */

/* DPMS extension build environment present */
/* #undef LIBVNCSERVER_HAVE_DPMS */

/* FBPM extension build environment present */
/* #undef LIBVNCSERVER_HAVE_FBPM */

/* Define to 1 if you have the <fcntl.h> header file. */
#ifndef LIBVNCSERVER_HAVE_FCNTL_H 
#define LIBVNCSERVER_HAVE_FCNTL_H  1 
#endif

/* Define to 1 if you have the `fork' function. */
/* #undef LIBVNCSERVER_HAVE_FORK */

/* Define to 1 if you have the `ftime' function. */
/* #undef LIBVNCSERVER_HAVE_FTIME */

/* Define to 1 if you have the `geteuid' function. */
/* #undef LIBVNCSERVER_HAVE_GETEUID */

/* Define to 1 if you have the `gethostbyname' function. */
/* #undef LIBVNCSERVER_HAVE_GETHOSTBYNAME */

/* Define to 1 if you have the `gethostname' function. */
/* #undef LIBVNCSERVER_HAVE_GETHOSTNAME */

/* Define to 1 if you have the `getpwnam' function. */
/* #undef LIBVNCSERVER_HAVE_GETPWNAM */

/* Define to 1 if you have the `getpwuid' function. */
/* #undef LIBVNCSERVER_HAVE_GETPWUID */

/* Define to 1 if you have the `getspnam' function. */
/* #undef LIBVNCSERVER_HAVE_GETSPNAM */

/* Define to 1 if you have the `gettimeofday' function. */
/* #undef LIBVNCSERVER_HAVE_GETTIMEOFDAY */

/* Define to 1 if you have the `getuid' function. */
/* #undef LIBVNCSERVER_HAVE_GETUID */

/* GnuTLS library present */
/* #undef LIBVNCSERVER_HAVE_GNUTLS */

/* Define to 1 if you have the `grantpt' function. */
/* #undef LIBVNCSERVER_HAVE_GRANTPT */

/* Define to 1 if you have the `inet_ntoa' function. */
/* #undef LIBVNCSERVER_HAVE_INET_NTOA */

/* Define to 1 if you have the `initgroups' function. */
/* #undef LIBVNCSERVER_HAVE_INITGROUPS */

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef LIBVNCSERVER_HAVE_INTTYPES_H 
#define LIBVNCSERVER_HAVE_INTTYPES_H  1 
#endif

/* IRIX XReadDisplay available */
/* #undef LIBVNCSERVER_HAVE_IRIX_XREADDISPLAY */

/* libcrypt library present */
/* #undef LIBVNCSERVER_HAVE_LIBCRYPT */

/* openssl libcrypto library present */
/* #undef LIBVNCSERVER_HAVE_LIBCRYPTO */

/* Define to 1 if you have the `cygipc' library (-lcygipc). */
/* #undef LIBVNCSERVER_HAVE_LIBCYGIPC */

/* libjpeg support enabled */
/* #undef LIBVNCSERVER_HAVE_LIBJPEG */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef LIBVNCSERVER_HAVE_LIBNSL */

/* Define to 1 if you have the `png' library (-lpng). */
/* #undef LIBVNCSERVER_HAVE_LIBPNG */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#ifndef LIBVNCSERVER_HAVE_LIBPTHREAD 
#define LIBVNCSERVER_HAVE_LIBPTHREAD  1 
#endif

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef LIBVNCSERVER_HAVE_LIBSOCKET */

/* openssl libssl library present */
/* #undef LIBVNCSERVER_HAVE_LIBSSL */

/* XDAMAGE extension build environment present */
/* #undef LIBVNCSERVER_HAVE_LIBXDAMAGE */

/* XFIXES extension build environment present */
/* #undef LIBVNCSERVER_HAVE_LIBXFIXES */

/* XINERAMA extension build environment present */
/* #undef LIBVNCSERVER_HAVE_LIBXINERAMA */

/* XRANDR extension build environment present */
/* #undef LIBVNCSERVER_HAVE_LIBXRANDR */

/* DEC-XTRAP extension build environment present */
/* #undef LIBVNCSERVER_HAVE_LIBXTRAP */

/* Define to 1 if you have the `z' library (-lz). */
/* #undef LIBVNCSERVER_HAVE_LIBZ */

/* linux fb device build environment present */
/* #undef LIBVNCSERVER_HAVE_LINUX_FB_H */

/* linux/input.h present */
/* #undef LIBVNCSERVER_HAVE_LINUX_INPUT_H */

/* linux uinput device build environment present */
/* #undef LIBVNCSERVER_HAVE_LINUX_UINPUT_H */

/* video4linux build environment present */
/* #undef LIBVNCSERVER_HAVE_LINUX_VIDEODEV_H */

/* build MacOS X native display support */
/* #undef LIBVNCSERVER_HAVE_MACOSX_NATIVE_DISPLAY */

/* MacOS X OpenGL present */
/* #undef LIBVNCSERVER_HAVE_MACOSX_OPENGL_H */

/* Define to 1 if you have the `memmove' function. */
/* #undef LIBVNCSERVER_HAVE_MEMMOVE */

/* Define to 1 if you have the <memory.h> header file. */
#ifndef LIBVNCSERVER_HAVE_MEMORY_H 
#define LIBVNCSERVER_HAVE_MEMORY_H  1 
#endif

/* Define to 1 if you have the `memset' function. */
/* #undef LIBVNCSERVER_HAVE_MEMSET */

/* Define to 1 if you have the `mkfifo' function. */
/* #undef LIBVNCSERVER_HAVE_MKFIFO */

/* Define to 1 if you have the `mmap' function. */
/* #undef LIBVNCSERVER_HAVE_MMAP */

/* Define to 1 if you have the <netdb.h> header file. */
/* #undef LIBVNCSERVER_HAVE_NETDB_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
/* #undef LIBVNCSERVER_HAVE_NETINET_IN_H */

/* Define to 1 if you have the <pwd.h> header file. */
/* #undef LIBVNCSERVER_HAVE_PWD_H */

/* RECORD extension build environment present */
/* #undef LIBVNCSERVER_HAVE_RECORD */

/* Define to 1 if you have the `select' function. */
/* #undef LIBVNCSERVER_HAVE_SELECT */

/* Define to 1 if you have the `setegid' function. */
/* #undef LIBVNCSERVER_HAVE_SETEGID */

/* Define to 1 if you have the `seteuid' function. */
/* #undef LIBVNCSERVER_HAVE_SETEUID */

/* Define to 1 if you have the `setgid' function. */
/* #undef LIBVNCSERVER_HAVE_SETGID */

/* Define to 1 if you have the `setpgrp' function. */
/* #undef LIBVNCSERVER_HAVE_SETPGRP */

/* Define to 1 if you have the `setsid' function. */
/* #undef LIBVNCSERVER_HAVE_SETSID */

/* Define to 1 if you have the `setuid' function. */
/* #undef LIBVNCSERVER_HAVE_SETUID */

/* Define to 1 if you have the `setutxent' function. */
/* #undef LIBVNCSERVER_HAVE_SETUTXENT */

/* Define to 1 if you have the `shmat' function. */
/* #undef LIBVNCSERVER_HAVE_SHMAT */

/* Define to 1 if you have the `socket' function. */
/* #undef LIBVNCSERVER_HAVE_SOCKET */

/* Solaris XReadScreen available */
/* #undef LIBVNCSERVER_HAVE_SOLARIS_XREADSCREEN */

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
#ifndef LIBVNCSERVER_HAVE_STAT_EMPTY_STRING_BUG 
#define LIBVNCSERVER_HAVE_STAT_EMPTY_STRING_BUG  1 
#endif

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef LIBVNCSERVER_HAVE_STDINT_H 
#define LIBVNCSERVER_HAVE_STDINT_H  1 
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef LIBVNCSERVER_HAVE_STDLIB_H 
#define LIBVNCSERVER_HAVE_STDLIB_H  1 
#endif

/* Define to 1 if you have the `strchr' function. */
/* #undef LIBVNCSERVER_HAVE_STRCHR */

/* Define to 1 if you have the `strcspn' function. */
/* #undef LIBVNCSERVER_HAVE_STRCSPN */

/* Define to 1 if you have the `strdup' function. */
/* #undef LIBVNCSERVER_HAVE_STRDUP */

/* Define to 1 if you have the `strerror' function. */
/* #undef LIBVNCSERVER_HAVE_STRERROR */

/* Define to 1 if you have the `strftime' function. */
/* #undef LIBVNCSERVER_HAVE_STRFTIME */

/* Define to 1 if you have the <strings.h> header file. */
#ifndef LIBVNCSERVER_HAVE_STRINGS_H 
#define LIBVNCSERVER_HAVE_STRINGS_H  1 
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef LIBVNCSERVER_HAVE_STRING_H 
#define LIBVNCSERVER_HAVE_STRING_H  1 
#endif

/* Define to 1 if you have the `strstr' function. */
/* #undef LIBVNCSERVER_HAVE_STRSTR */

/* Define to 1 if you have the <syslog.h> header file. */
/* #undef LIBVNCSERVER_HAVE_SYSLOG_H */

/* Use the system libvncserver build environment for x11vnc. */
/* #undef LIBVNCSERVER_HAVE_SYSTEM_LIBVNCSERVER */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef LIBVNCSERVER_HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef LIBVNCSERVER_HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef LIBVNCSERVER_HAVE_SYS_STAT_H 
#define LIBVNCSERVER_HAVE_SYS_STAT_H  1 
#endif

/* Define to 1 if you have the <sys/stropts.h> header file. */
/* #undef LIBVNCSERVER_HAVE_SYS_STROPTS_H */

/* Define to 1 if you have the <sys/timeb.h> header file. */
#ifndef LIBVNCSERVER_HAVE_SYS_TIMEB_H 
#define LIBVNCSERVER_HAVE_SYS_TIMEB_H  1 
#endif

/* Define to 1 if you have the <sys/time.h> header file. */
#ifndef LIBVNCSERVER_HAVE_SYS_TIME_H 
#define LIBVNCSERVER_HAVE_SYS_TIME_H  1 
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef LIBVNCSERVER_HAVE_SYS_TYPES_H 
#define LIBVNCSERVER_HAVE_SYS_TYPES_H  1 
#endif

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
/* #undef LIBVNCSERVER_HAVE_SYS_WAIT_H */

/* Define to 1 if you have the <termios.h> header file. */
/* #undef LIBVNCSERVER_HAVE_TERMIOS_H */

/* Define to 1 if compiler supports __thread */
#ifndef LIBVNCSERVER_HAVE_TLS 
#define LIBVNCSERVER_HAVE_TLS  1 
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef LIBVNCSERVER_HAVE_UNISTD_H 
#define LIBVNCSERVER_HAVE_UNISTD_H  1 
#endif

/* Define to 1 if you have the <utmpx.h> header file. */
/* #undef LIBVNCSERVER_HAVE_UTMPX_H */

/* Define to 1 if you have the `vfork' function. */
/* #undef LIBVNCSERVER_HAVE_VFORK */

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef LIBVNCSERVER_HAVE_VFORK_H */

/* Define to 1 if you have the `vprintf' function. */
/* #undef LIBVNCSERVER_HAVE_VPRINTF */

/* Define to 1 if you have the `waitpid' function. */
/* #undef LIBVNCSERVER_HAVE_WAITPID */

/* Define to 1 if `fork' works. */
/* #undef LIBVNCSERVER_HAVE_WORKING_FORK */

/* Define to 1 if `vfork' works. */
/* #undef LIBVNCSERVER_HAVE_WORKING_VFORK */

/* Define to 1 if you have the <ws2tcpip.h> header file. */
#ifndef LIBVNCSERVER_HAVE_WS2TCPIP_H 
#define LIBVNCSERVER_HAVE_WS2TCPIP_H  1 
#endif

/* X11 build environment present */
/* #undef LIBVNCSERVER_HAVE_X11 */

/* open ssl X509_print_ex_fp available */
/* #undef LIBVNCSERVER_HAVE_X509_PRINT_EX_FP */

/* XKEYBOARD extension build environment present */
/* #undef LIBVNCSERVER_HAVE_XKEYBOARD */

/* MIT-SHM extension build environment present */
/* #undef LIBVNCSERVER_HAVE_XSHM */

/* XTEST extension build environment present */
/* #undef LIBVNCSERVER_HAVE_XTEST */

/* XTEST extension has XTestGrabControl */
/* #undef LIBVNCSERVER_HAVE_XTESTGRABCONTROL */

/* Enable IPv6 support */
/* #undef LIBVNCSERVER_IPv6 */

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
/* #undef LIBVNCSERVER_LSTAT_FOLLOWS_SLASHED_SYMLINK */

/* Need a typedef for in_addr_t */
#ifndef LIBVNCSERVER_NEED_INADDR_T 
#define LIBVNCSERVER_NEED_INADDR_T  1 
#endif

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef LIBVNCSERVER_NO_MINUS_C_MINUS_O */

/* Name of package */
#ifndef LIBVNCSERVER_PACKAGE 
#define LIBVNCSERVER_PACKAGE  "LibVNCServer" 
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef LIBVNCSERVER_PACKAGE_BUGREPORT 
#define LIBVNCSERVER_PACKAGE_BUGREPORT  "http://sourceforge.net/projects/libvncserver" 
#endif

/* Define to the full name of this package. */
#ifndef LIBVNCSERVER_PACKAGE_NAME 
#define LIBVNCSERVER_PACKAGE_NAME  "LibVNCServer" 
#endif

/* Define to the full name and version of this package. */
#ifndef LIBVNCSERVER_PACKAGE_STRING 
#define LIBVNCSERVER_PACKAGE_STRING  "LibVNCServer 0.9.9" 
#endif

/* Define to the one symbol short name of this package. */
#ifndef LIBVNCSERVER_PACKAGE_TARNAME 
#define LIBVNCSERVER_PACKAGE_TARNAME  "libvncserver" 
#endif

/* Define to the home page for this package. */
#ifndef LIBVNCSERVER_PACKAGE_URL 
#define LIBVNCSERVER_PACKAGE_URL  "" 
#endif

/* Define to the version of this package. */
#ifndef LIBVNCSERVER_PACKAGE_VERSION 
#define LIBVNCSERVER_PACKAGE_VERSION  "0.9.9" 
#endif

/* The number of bytes in type char */
/* #undef LIBVNCSERVER_SIZEOF_CHAR */

/* The number of bytes in type int */
/* #undef LIBVNCSERVER_SIZEOF_INT */

/* The number of bytes in type long */
/* #undef LIBVNCSERVER_SIZEOF_LONG */

/* The number of bytes in type short */
/* #undef LIBVNCSERVER_SIZEOF_SHORT */

/* The number of bytes in type void* */
/* #undef LIBVNCSERVER_SIZEOF_VOIDP */

/* Define to 1 if you have the ANSI C header files. */
#ifndef LIBVNCSERVER_STDC_HEADERS 
#define LIBVNCSERVER_STDC_HEADERS  1 
#endif

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#ifndef LIBVNCSERVER_TIME_WITH_SYS_TIME 
#define LIBVNCSERVER_TIME_WITH_SYS_TIME  1 
#endif

/* Version number of package */
#ifndef LIBVNCSERVER_VERSION 
#define LIBVNCSERVER_VERSION  "0.9.9" 
#endif

/* Enable support for libgcrypt in libvncclient */
/* #undef LIBVNCSERVER_WITH_CLIENT_GCRYPT */

/* Disable TightVNCFileTransfer protocol */
#ifndef LIBVNCSERVER_WITH_TIGHTVNC_FILETRANSFER 
#define LIBVNCSERVER_WITH_TIGHTVNC_FILETRANSFER  1 
#endif

/* Disable WebSockets support */
/* #undef LIBVNCSERVER_WITH_WEBSOCKETS */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
#ifndef LIBVNCSERVER_X_DISPLAY_MISSING 
#define LIBVNCSERVER_X_DISPLAY_MISSING  1 
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* The type for socklen */
#define socklen_t int

/* Define as `fork' if `vfork' does not work. */
#define vfork fork
 
/* once: _RFB_RFBCONFIG_H */
#endif
