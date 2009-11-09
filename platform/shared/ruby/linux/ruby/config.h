#define PACKAGE_NAME ""
#define PACKAGE_TARNAME ""
#define PACKAGE_VERSION ""
#define PACKAGE_STRING ""
#define PACKAGE_BUGREPORT ""
#define USE_BUILTIN_FRAME_ADDRESS 1
#define _GNU_SOURCE 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STDIO_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define __EXTENSIONS__ 1
#define _POSIX_PTHREAD_SEMANTICS 1
#define _TANDEM_SOURCE 1
#define _FILE_OFFSET_BITS 64
#define HAVE_LONG_LONG 1
#define HAVE_OFF_T 1
#define SIZEOF_INT 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONG 4
#define SIZEOF_LONG_LONG 8
#define SIZEOF___INT64 0
#define SIZEOF_OFF_T 8
#define SIZEOF_VOIDP 4
#define SIZEOF_FLOAT 4
#define SIZEOF_DOUBLE 8
#define SIZEOF_TIME_T 4
#define rb_pid_t pid_t
#define PIDT2NUM(v) LONG2NUM(v)
#define NUM2PIDT(v) NUM2LONG(v)
#define rb_uid_t uid_t
#define UIDT2NUM(v) ULONG2NUM(v)
#define NUM2UIDT(v) NUM2ULONG(v)
#define rb_gid_t gid_t
#define GIDT2NUM(v) ULONG2NUM(v)
#define NUM2GIDT(v) NUM2ULONG(v)
#define HAVE_PROTOTYPES 1
#define TOKEN_PASTE(x,y) x##y
#define STRINGIZE(expr) STRINGIZE0(expr)
#define HAVE_STDARG_PROTOTYPES 1
#define HAVE_VA_ARGS_MACRO 1
#define NORETURN(x) __attribute__ ((noreturn)) x
#define DEPRECATED(x) __attribute__ ((deprecated)) x
#define NOINLINE(x) __attribute__ ((noinline)) x
#define FUNC_STDCALL(x) __attribute__ ((stdcall)) x
#define FUNC_CDECL(x) __attribute__ ((cdecl)) x
#define FUNC_FASTCALL(x) __attribute__ ((fastcall)) x
#define RUBY_ALIAS_FUNCTION(old_prot, new_name, args) VALUE old_prot __attribute__((alias(#new_name)));
#define HAVE_DECL_SYS_NERR 1
#define HAVE_LIBCRYPT 1
#define HAVE_LIBDL 1
#define HAVE_LIBRT 1
#define HAVE_DIRENT_H 1
#define STDC_HEADERS 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_UNISTD_H 1
#define HAVE_LIMITS_H 1
#define HAVE_SYS_FILE_H 1
#define HAVE_SYS_IOCTL_H 1
#define HAVE_SYS_SYSCALL_H 1
#define HAVE_FCNTL_H 1
#define HAVE_SYS_FCNTL_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TIMES_H 1
#define HAVE_SYS_PARAM_H 1

#if defined(OS_ANDROID)
#define HAVE_SYS_SYSCALL_H 1
#else
#define HAVE_SYSCALL_H 1
#endif

#define HAVE_PWD_H 1
#define HAVE_GRP_H 1
#define HAVE_A_OUT_H 1
#define HAVE_UTIME_H 1
#define HAVE_MEMORY_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_NETINET_IN_SYSTM_H 1
#define HAVE_FLOAT_H 1
#define HAVE_PTHREAD_H 1
#define HAVE_UCONTEXT_H 1

#if !defined(OS_ANDROID)
#define HAVE_LANGINFO_H 1
#endif

#define HAVE_LOCALE_H 1
#define HAVE_SYS_SENDFILE_H 1
#define HAVE_TIME_H 1
#define HAVE_SYS_SOCKET_H 1
#define SIZEOF_RLIM_T 8

#if defined(OS_ANDROID)
typedef unsigned long long rlim_t;
#endif

#define SIZEOF_SIZE_T 4
#define SIZEOF_PTRDIFF_T 4
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1
#define HAVE_ST_BLKSIZE 1
#define HAVE_STRUCT_STAT_ST_BLOCKS 1
#define HAVE_ST_BLOCKS 1
#define HAVE_STRUCT_STAT_ST_RDEV 1
#define HAVE_ST_RDEV 1

#if !defined(OS_ANDROID)
#define HAVE_STRUCT_STAT_ST_ATIM 1
#define HAVE_STRUCT_STAT_ST_MTIM 1
#define HAVE_STRUCT_STAT_ST_CTIM 1
#else
#define HAVE_STRUCT_STAT_ST_ATIMENSEC 1
#endif

#define HAVE_STRUCT_TIMESPEC 1
#define HAVE_RB_FD_INIT 1
#define HAVE_INT8_T 1
#define HAVE_UINT8_T 1
#define HAVE_INT16_T 1
#define HAVE_UINT16_T 1
#define HAVE_INT32_T 1
#define HAVE_UINT32_T 1
#define HAVE_INT64_T 1
#define HAVE_UINT64_T 1
#define HAVE_INTPTR_T 1
#define HAVE_UINTPTR_T 1
#define HAVE_SSIZE_T 1
#define STACK_END_ADDRESS __libc_stack_end
#define GETGROUPS_T gid_t
#define RETSIGTYPE void
#define HAVE_ALLOCA_H 1
#define HAVE_ALLOCA 1
#define HAVE_DUP2 1
#define HAVE_MEMMOVE 1
#define HAVE_STRERROR 1
#define HAVE_STRCHR 1
#define HAVE_STRSTR 1
#define HAVE_CRYPT 1
#define HAVE_FLOCK 1
#define HAVE_VSNPRINTF 1
#define HAVE_ISNAN 1
#define HAVE_FINITE 1
#define HAVE_ISINF 1
#define HAVE_HYPOT 1
#define HAVE_ACOSH 1
#define HAVE_ERF 1
#define HAVE_TGAMMA 1
#define HAVE_LGAMMA_R 1
#define HAVE_CBRT 1
#define HAVE_FMOD 1
#define HAVE_KILLPG 1
#define HAVE_WAIT4 1
#define HAVE_WAITPID 1
#define HAVE_FORK 1
#define HAVE_SYSCALL 1
#define HAVE_CHROOT 1
#define HAVE_FSYNC 1
#define HAVE_GETCWD 1
#define HAVE_EACCESS 1
#define HAVE_TRUNCATE 1
#define HAVE_FTRUNCATE 1
#define HAVE_TIMES 1
#define HAVE_UTIMES 1
#define HAVE_UTIMENSAT 1
#define HAVE_FCNTL 1
#define HAVE_LOCKF 1
#define HAVE_LSTAT 1
#define HAVE_LINK 1
#define HAVE_SYMLINK 1
#define HAVE_READLINK 1
#define HAVE_SETITIMER 1
#define HAVE_SETEUID 1
#define HAVE_SETREUID 1
#define HAVE_SETRESUID 1
#define HAVE_SOCKETPAIR 1
#define HAVE_SETEGID 1
#define HAVE_SETREGID 1
#define HAVE_SETRESGID 1
#define HAVE_PAUSE 1
#define HAVE_LCHOWN 1
#define HAVE_GETPGRP 1
#define HAVE_SETPGRP 1
#define HAVE_GETPGID 1
#define HAVE_SETPGID 1
#define HAVE_INITGROUPS 1
#define HAVE_GETGROUPS 1
#define HAVE_SETGROUPS 1
#define HAVE_GETPRIORITY 1
#define HAVE_GETRLIMIT 1
#define HAVE_SETRLIMIT 1
#define HAVE_SYSCONF 1
#define HAVE_GROUP_MEMBER 1
#define HAVE_DLOPEN 1
#define HAVE_SIGPROCMASK 1
#define HAVE_SIGACTION 1
#define HAVE__SETJMP 1
#define HAVE__LONGJMP 1
#define HAVE_VSNPRINTF 1
#define HAVE_SNPRINTF 1
#define HAVE_SETSID 1
#define HAVE_TELLDIR 1
#define HAVE_SEEKDIR 1
#define HAVE_FCHMOD 1
#define HAVE_COSH 1
#define HAVE_SINH 1
#define HAVE_TANH 1
#define HAVE_LOG2 1
#define HAVE_ROUND 1
#define HAVE_SETUID 1
#define HAVE_SETGID 1
#define HAVE_DAEMON 1
#define HAVE_SETENV 1
#define HAVE_UNSETENV 1
#define HAVE_MKTIME 1
#define HAVE_TIMEGM 1
#define HAVE_GMTIME_R 1
#define HAVE_CLOCK_GETTIME 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_PREAD 1
#define HAVE_SENDFILE 1
#define HAVE_SHUTDOWN 1
#define RUBY_SETJMP(env) _setjmp(env)
#define RUBY_LONGJMP(env,val) _longjmp(env,val)
#define RUBY_JMP_BUF jmp_buf
#define HAVE_STRUCT_TM_TM_ZONE 1
#define HAVE_TM_ZONE 1
#define HAVE_STRUCT_TM_TM_GMTOFF 1
#define HAVE_DAYLIGHT 1
#define HAVE_VAR_TIMEZONE 1
#define TYPEOF_VAR_TIMEZONE long
#define HAVE_TIMEZONE 1
#define TIMEZONE_VOID 1
#define NEGATIVE_TIME_T 1
#define POSIX_SIGNAL 1
#define GETPGRP_VOID 1
#define SETPGRP_VOID 1
#define RSHIFT(x,y) ((x)>>(int)y)
#define FILE_READPTR _IO_read_ptr
#define FILE_READEND _IO_read_end
#define HUGE_ST_INO 1
#define HAVE__SC_CLK_TCK 1
#define STACK_GROW_DIRECTION -1
#define _REENTRANT 1
#define _THREAD_SAFE 1
#define HAVE_LIBPTHREAD 1
#define HAVE_NANOSLEEP 1
#define HAVE_SCHED_YIELD 1

#if !defined(OS_ANDROID)
#define HAVE_PTHREAD_ATTR_SETINHERITSCHED 1
#endif

#define HAVE_GETCONTEXT 1
#define HAVE_SETCONTEXT 1

#if !defined(OS_ANDROID)
#define HAVE_BACKTRACE 1
#endif

#define USE_ELF 1
#define DLEXT_MAXLEN 3
#define DLEXT ".so"
#define RUBY_LIB "/lib"
#define RUBY_SITE_LIB "/lib"
#define RUBY_SITE_LIB2 "/lib"
#define RUBY_VENDOR_LIB "/lib"
#define RUBY_VENDOR_LIB2 "/lib"
#define RUBY_PLATFORM "i686-linux"
#define RUBY_ARCHLIB "/lib"
#define RUBY_SITE_ARCHLIB "/lib"
#define RUBY_VENDOR_ARCHLIB "/lib"

#if defined(OS_ANDROID)
#include <sys/select.h>
#include <asm/page.h>
typedef long int fd_mask;
#endif
