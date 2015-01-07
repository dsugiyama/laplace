/*
 * Original Source  : lap_1d.c
 * Language         : C
 * Compiled Time    : 2015-01-08 05:31:13
 * Compiler Info    : XcodeML/C-FrontEnd
 * Compiler Version : 0.9.0
 */
# 1 "lap_1d.c"
typedef long ptrdiff_t;
typedef unsigned long size_t;
typedef int wchar_t;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long __int64_t;
typedef unsigned long __uint64_t;
typedef long __quad_t;
typedef unsigned long __u_quad_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
struct anon_type_1___fsid_t {
int __val[2];
};
typedef struct anon_type_1___fsid_t __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef unsigned long __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef int __daddr_t;
typedef long __swblk_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef unsigned long __fsfilcnt64_t;
typedef long __ssize_t;
typedef long __loff_t;
typedef long * __qaddr_t;
typedef char * __caddr_t;
typedef long __intptr_t;
typedef unsigned int __socklen_t;
union anon_type_3___value {
unsigned int __wch;
char __wchb[4];
};
typedef struct anon_type_2___mbstate_t __mbstate_t;
typedef int _G_int16_t;
typedef int _G_int32_t;
typedef unsigned int _G_uint16_t;
typedef unsigned int _G_uint32_t;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t {
};
typedef void _IO_lock_t;
enum __codecvt_result {
__codecvt_ok = 0,
__codecvt_partial = 1,
__codecvt_error = 2,
__codecvt_noconv = 3
};
struct _IO_FILE_plus {
};
typedef long __io_read_fn(void * __cookie, char * __buf, unsigned long __nbytes);
typedef long __io_write_fn(void * __cookie, char const * __buf, unsigned long __n);
typedef int __io_seek_fn(void * __cookie, long * __pos, int __w);
typedef int __io_close_fn(void * __cookie);
typedef long off_t;
typedef long ssize_t;
union anon_type_6___huge_val_t {
unsigned char __c[8];
double __d;
};
typedef union anon_type_6___huge_val_t __huge_val_t;
union anon_type_7___huge_valf_t {
unsigned char __c[4];
float __f;
};
typedef union anon_type_7___huge_valf_t __huge_valf_t;
union anon_type_8 {
unsigned char __c[4];
float __d;
};
typedef float float_t;
typedef double double_t;
enum anon_type_9 {
FP_NAN = 0,
FP_INFINITE = 1,
FP_ZERO = 2,
FP_SUBNORMAL = 3,
FP_NORMAL = 4
};
enum anon_type_10__LIB_VERSION_TYPE {
_IEEE_ = -1,
_SVID_ = 0,
_XOPEN_ = 1,
_POSIX_ = 2,
_ISOC_ = 3
};
typedef enum anon_type_10__LIB_VERSION_TYPE _LIB_VERSION_TYPE;
struct exception {
int type;
char * name;
double arg1;
double arg2;
double retval;
};
struct ____exception {
int type;
char const * name;
double arg1;
double arg2;
double retval;
};
typedef struct ____exception ___exception;
struct ____exceptionf {
int type;
char const * name;
float arg1;
float arg2;
float retval;
};
typedef struct ____exceptionf ___exceptionf;
struct ____exceptionl {
int type;
char const * name;
long double arg1;
long double arg2;
long double retval;
};
typedef struct ____exceptionl ___exceptionl;
typedef int (* ___pmatherr)(struct ____exception * );
typedef int (* ___pmatherrf)(struct ____exceptionf * );
typedef int (* ___pmatherrl)(struct ____exceptionl * );
typedef long clock_t;
typedef long time_t;
typedef int clockid_t;
typedef void * timer_t;
struct timespec {
long tv_sec;
long tv_nsec;
};
struct tm {
int tm_sec;
int tm_min;
int tm_hour;
int tm_mday;
int tm_mon;
int tm_year;
int tm_wday;
int tm_yday;
int tm_isdst;
long tm_gmtoff;
char const * tm_zone;
};
struct itimerspec {
struct timespec it_interval;
struct timespec it_value;
};
struct sigevent {
};
typedef int pid_t;
struct __locale_data {
};
struct anon_type_11___wait_terminated {
unsigned int __w_termsig:7;
unsigned int __w_coredump:1;
unsigned int __w_retcode:8;
unsigned int anon_mem_1:16;
};
struct anon_type_12___wait_stopped {
unsigned int __w_stopval:8;
unsigned int __w_stopsig:8;
unsigned int anon_mem_2:16;
};
struct anon_type_13_div_t {
int quot;
int rem;
};
typedef struct anon_type_13_div_t div_t;
struct anon_type_14_ldiv_t {
long quot;
long rem;
};
typedef struct anon_type_14_ldiv_t ldiv_t;
struct anon_type_15_lldiv_t {
long long quot;
long long rem;
};
typedef struct anon_type_15_lldiv_t lldiv_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef long quad_t;
typedef unsigned long u_quad_t;
typedef struct anon_type_1___fsid_t fsid_t;
typedef long loff_t;
typedef unsigned long ino_t;
typedef unsigned long dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned long nlink_t;
typedef unsigned int uid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char * caddr_t;
typedef int key_t;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long u_int64_t;
typedef int register_t;
typedef int __sig_atomic_t;
struct anon_type_16___sigset_t {
unsigned long __val[(1024) / ((8) * (sizeof(unsigned long)))];
};
typedef struct anon_type_16___sigset_t __sigset_t;
typedef struct anon_type_16___sigset_t sigset_t;
struct timeval {
long tv_sec;
long tv_usec;
};
typedef long suseconds_t;
typedef long __fd_mask;
struct anon_type_17_fd_set {
long __fds_bits[(1024) / ((8) * ((int)(sizeof(long))))];
};
typedef struct anon_type_17_fd_set fd_set;
typedef long fd_mask;
typedef long blksize_t;
typedef long blkcnt_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;
typedef unsigned long pthread_t;
union anon_type_18_pthread_attr_t {
char __size[56];
long __align;
};
typedef union anon_type_18_pthread_attr_t pthread_attr_t;
union anon_type_20_pthread_mutexattr_t {
char __size[4];
int __align;
};
typedef union anon_type_20_pthread_mutexattr_t pthread_mutexattr_t;
struct anon_type_22___data {
int __lock;
unsigned int __futex;
unsigned long long __total_seq;
unsigned long long __wakeup_seq;
unsigned long long __woken_seq;
void * __mutex;
unsigned int __nwaiters;
unsigned int __broadcast_seq;
};
typedef union anon_type_21_pthread_cond_t pthread_cond_t;
union anon_type_23_pthread_condattr_t {
char __size[4];
int __align;
};
typedef union anon_type_23_pthread_condattr_t pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct anon_type_25___data {
int __lock;
unsigned int __nr_readers;
unsigned int __readers_wakeup;
unsigned int __writer_wakeup;
unsigned int __nr_readers_queued;
unsigned int __nr_writers_queued;
int __writer;
int __shared;
unsigned long __pad1;
unsigned long __pad2;
unsigned int __flags;
};
typedef union anon_type_24_pthread_rwlock_t pthread_rwlock_t;
union anon_type_26_pthread_rwlockattr_t {
char __size[8];
long __align;
};
typedef union anon_type_26_pthread_rwlockattr_t pthread_rwlockattr_t;
typedef int volatile pthread_spinlock_t;
union anon_type_27_pthread_barrier_t {
char __size[32];
long __align;
};
typedef union anon_type_27_pthread_barrier_t pthread_barrier_t;
union anon_type_28_pthread_barrierattr_t {
char __size[4];
int __align;
};
typedef union anon_type_28_pthread_barrierattr_t pthread_barrierattr_t;
struct random_data {
int * fptr;
int * rptr;
int * state;
int rand_type;
int rand_deg;
int rand_sep;
int * end_ptr;
};
struct drand48_data {
unsigned short __x[3];
unsigned short __old_x[3];
unsigned short __c;
unsigned short __init;
unsigned long long __a;
};
typedef int (* __compar_fn_t)(void const * , void const * );
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long uint_least64_t;
typedef char int_fast8_t;
typedef long int_fast16_t;
typedef long int_fast32_t;
typedef long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long uint_fast16_t;
typedef unsigned long uint_fast32_t;
typedef unsigned long uint_fast64_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;
typedef long intmax_t;
typedef unsigned long uintmax_t;
typedef int MPI_Datatype;
typedef int MPI_Comm;
typedef int MPI_Group;
typedef int MPI_Win;
struct ADIOI_FileD {
};
typedef struct ADIOI_FileD * MPI_File;
typedef int MPI_Op;
enum MPIR_Win_flavor {
MPI_WIN_FLAVOR_CREATE = 1,
MPI_WIN_FLAVOR_ALLOCATE = 2,
MPI_WIN_FLAVOR_DYNAMIC = 3,
MPI_WIN_FLAVOR_SHARED = 4
};
typedef enum MPIR_Win_flavor MPIR_Win_flavor_t;
enum MPIR_Win_model {
MPI_WIN_SEPARATE = 1,
MPI_WIN_UNIFIED = 2
};
typedef enum MPIR_Win_model MPIR_Win_model_t;
enum MPIR_Topo_type {
MPI_GRAPH = 1,
MPI_CART = 2,
MPI_DIST_GRAPH = 3
};
typedef enum MPIR_Topo_type MPIR_Topo_type;
typedef void MPI_Handler_function(int * , int * , ...);
typedef int MPI_Comm_copy_attr_function(int, int, void * , void * , void * , int * );
typedef int MPI_Comm_delete_attr_function(int, int, void * , void * );
typedef int MPI_Type_copy_attr_function(int, int, void * , void * , void * , int * );
typedef int MPI_Type_delete_attr_function(int, int, void * , void * );
typedef int MPI_Win_copy_attr_function(int, int, void * , void * , void * , int * );
typedef int MPI_Win_delete_attr_function(int, int, void * , void * );
typedef void MPI_Comm_errhandler_function(int * , int * , ...);
typedef void MPI_File_errhandler_function(struct ADIOI_FileD * * , int * , ...);
typedef void MPI_Win_errhandler_function(int * , int * , ...);
typedef void MPI_Comm_errhandler_fn(int * , int * , ...);
typedef void MPI_File_errhandler_fn(struct ADIOI_FileD * * , int * , ...);
typedef void MPI_Win_errhandler_fn(int * , int * , ...);
typedef int MPI_Errhandler;
typedef int MPI_Request;
typedef int MPI_Message;
typedef void MPI_User_function(void * , void * , int * , int * );
typedef int MPI_Copy_function(int, int, void * , void * , void * , int * );
typedef int MPI_Delete_function(int, int, void * , void * );
enum MPIR_Combiner_enum {
MPI_COMBINER_NAMED = 1,
MPI_COMBINER_DUP = 2,
MPI_COMBINER_CONTIGUOUS = 3,
MPI_COMBINER_VECTOR = 4,
MPI_COMBINER_HVECTOR_INTEGER = 5,
MPI_COMBINER_HVECTOR = 6,
MPI_COMBINER_INDEXED = 7,
MPI_COMBINER_HINDEXED_INTEGER = 8,
MPI_COMBINER_HINDEXED = 9,
MPI_COMBINER_INDEXED_BLOCK = 10,
MPI_COMBINER_STRUCT_INTEGER = 11,
MPI_COMBINER_STRUCT = 12,
MPI_COMBINER_SUBARRAY = 13,
MPI_COMBINER_DARRAY = 14,
MPI_COMBINER_F90_REAL = 15,
MPI_COMBINER_F90_COMPLEX = 16,
MPI_COMBINER_F90_INTEGER = 17,
MPI_COMBINER_RESIZED = 18,
MPI_COMBINER_HINDEXED_BLOCK = 19
};
typedef int MPI_Info;
typedef long MPI_Aint;
typedef int MPI_Fint;
typedef long long MPI_Count;
typedef long long MPI_Offset;
struct MPI_Status {
int count_lo;
int count_hi_and_cancelled;
int MPI_SOURCE;
int MPI_TAG;
int MPI_ERROR;
};
typedef struct MPI_Status MPI_Status;
struct MPIR_T_enum_s {
};
struct MPIR_T_cvar_handle_s {
};
struct MPIR_T_pvar_handle_s {
};
struct MPIR_T_pvar_session_s {
};
typedef struct MPIR_T_enum_s * MPI_T_enum;
typedef struct MPIR_T_cvar_handle_s * MPI_T_cvar_handle;
typedef struct MPIR_T_pvar_handle_s * MPI_T_pvar_handle;
typedef struct MPIR_T_pvar_session_s * MPI_T_pvar_session;
enum MPIR_T_verbosity_t {
MPIX_T_VERBOSITY_INVALID = 0,
MPI_T_VERBOSITY_USER_BASIC = 221,
MPI_T_VERBOSITY_USER_DETAIL = 222,
MPI_T_VERBOSITY_USER_ALL = 223,
MPI_T_VERBOSITY_TUNER_BASIC = 224,
MPI_T_VERBOSITY_TUNER_DETAIL = 225,
MPI_T_VERBOSITY_TUNER_ALL = 226,
MPI_T_VERBOSITY_MPIDEV_BASIC = 227,
MPI_T_VERBOSITY_MPIDEV_DETAIL = 228,
MPI_T_VERBOSITY_MPIDEV_ALL = 229
};
typedef enum MPIR_T_verbosity_t MPIR_T_verbosity_t;
enum MPIR_T_bind_t {
MPIX_T_BIND_INVALID = 0,
MPI_T_BIND_NO_OBJECT = 9700,
MPI_T_BIND_MPI_COMM = 9701,
MPI_T_BIND_MPI_DATATYPE = 9702,
MPI_T_BIND_MPI_ERRHANDLER = 9703,
MPI_T_BIND_MPI_FILE = 9704,
MPI_T_BIND_MPI_GROUP = 9705,
MPI_T_BIND_MPI_OP = 9706,
MPI_T_BIND_MPI_REQUEST = 9707,
MPI_T_BIND_MPI_WIN = 9708,
MPI_T_BIND_MPI_MESSAGE = 9709,
MPI_T_BIND_MPI_INFO = 9710
};
typedef enum MPIR_T_bind_t MPIR_T_bind_t;
enum MPIR_T_scope_t {
MPIX_T_SCOPE_INVALID = 0,
MPI_T_SCOPE_CONSTANT = 60438,
MPI_T_SCOPE_READONLY = 60439,
MPI_T_SCOPE_LOCAL = 60440,
MPI_T_SCOPE_GROUP = 60441,
MPI_T_SCOPE_GROUP_EQ = 60442,
MPI_T_SCOPE_ALL = 60443,
MPI_T_SCOPE_ALL_EQ = 60444
};
typedef enum MPIR_T_scope_t MPIR_T_scope_t;
enum MPIR_T_pvar_class_t {
MPIX_T_PVAR_CLASS_INVALID = 0,
MPIR_T_PVAR_CLASS_FIRST = 240,
MPI_T_PVAR_CLASS_STATE = 240,
MPI_T_PVAR_CLASS_LEVEL = 241,
MPI_T_PVAR_CLASS_SIZE = 242,
MPI_T_PVAR_CLASS_PERCENTAGE = 243,
MPI_T_PVAR_CLASS_HIGHWATERMARK = 244,
MPI_T_PVAR_CLASS_LOWWATERMARK = 245,
MPI_T_PVAR_CLASS_COUNTER = 246,
MPI_T_PVAR_CLASS_AGGREGATE = 247,
MPI_T_PVAR_CLASS_TIMER = 248,
MPI_T_PVAR_CLASS_GENERIC = 249,
MPIR_T_PVAR_CLASS_LAST = 250,
MPIR_T_PVAR_CLASS_NUMBER = 10
};
typedef enum MPIR_T_pvar_class_t MPIR_T_pvar_class_t;
typedef int MPI_Grequest_cancel_function(void * , int);
typedef int MPI_Grequest_free_function(void * );
typedef int MPI_Grequest_query_function(void * , struct MPI_Status * );
typedef int MPIX_Grequest_poll_function(void * , struct MPI_Status * );
typedef int MPIX_Grequest_wait_function(int, void * * , double, struct MPI_Status * );
typedef int MPI_Datarep_conversion_function(void * , int, int, void * , long long, void * );
typedef int MPI_Datarep_extent_function(int datatype, long * , void * );
typedef int MPIX_Grequest_class;
struct mpixi_mutex_s {
};
typedef struct mpixi_mutex_s * MPIX_Mutex;
typedef void * xmp_desc_t;
struct _IO_marker;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
struct anon_type_2___mbstate_t {
int __count;
union anon_type_3___value __value;
};
struct anon_type_4__G_fpos_t {
long __pos;
struct anon_type_2___mbstate_t __state;
};
typedef struct anon_type_4__G_fpos_t _G_fpos_t;
struct anon_type_5__G_fpos64_t {
long __pos;
struct anon_type_2___mbstate_t __state;
};
typedef struct anon_type_5__G_fpos64_t _G_fpos64_t;
struct _IO_marker {
struct _IO_marker * _next;
struct _IO_FILE * _sbuf;
int _pos;
};
struct _IO_FILE {
int _flags;
char * _IO_read_ptr;
char * _IO_read_end;
char * _IO_read_base;
char * _IO_write_base;
char * _IO_write_ptr;
char * _IO_write_end;
char * _IO_buf_base;
char * _IO_buf_end;
char * _IO_save_base;
char * _IO_backup_base;
char * _IO_save_end;
struct _IO_marker * _markers;
struct _IO_FILE * _chain;
int _fileno;
int _flags2;
long _old_offset;
unsigned short _cur_column;
char _vtable_offset;
char _shortbuf[1];
void * _lock;
long _offset;
void * __pad1;
void * __pad2;
void * __pad3;
void * __pad4;
unsigned long __pad5;
int _mode;
char _unused2[(((15) * (sizeof(int))) - ((4) * (sizeof(void * )))) - (sizeof(unsigned long))];
};
typedef struct _IO_FILE _IO_FILE;
typedef struct anon_type_4__G_fpos_t fpos_t;
struct __locale_struct {
struct __locale_data * __locales[13];
unsigned short const * __ctype_b;
int const * __ctype_tolower;
int const * __ctype_toupper;
char const * __names[13];
};
typedef struct __locale_struct * __locale_t;
typedef struct __locale_struct * locale_t;
union wait {
int w_status;
struct anon_type_11___wait_terminated __wait_terminated;
struct anon_type_12___wait_stopped __wait_stopped;
};
struct __pthread_internal_list;
struct __pthread_internal_list {
struct __pthread_internal_list * __prev;
struct __pthread_internal_list * __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s {
int __lock;
unsigned int __count;
int __owner;
unsigned int __nusers;
int __kind;
int __spins;
struct __pthread_internal_list __list;
};
typedef union anon_type_19_pthread_mutex_t pthread_mutex_t;
union anon_type_21_pthread_cond_t {
struct anon_type_22___data __data;
char __size[48];
long long __align;
};
union anon_type_24_pthread_rwlock_t {
struct anon_type_25___data __data;
char __size[56];
long __align;
};
union anon_type_19_pthread_mutex_t {
struct __pthread_mutex_s __data;
char __size[40];
long __align;
};
# include "xmp_func_decl.h"
# include "xmp_index_macro.h"
# include "xmp_comm_macro.h"
static void * _XMP_DESC_p;
static int _XMP_NODES_SIZE_p_0;
static int _XMP_NODES_RANK_p_0;
static void * _XMP_DESC_t;
double * _XMP_ADDR_u;
static void * _XMP_DESC_u;
static unsigned long long _XMP_GTOL_acc_u_0;
static unsigned long long _XMP_GTOL_acc_u_1;
static int _XMP_GTOL_temp0_u_0;
double * _XMP_ADDR_uu;
static void * _XMP_DESC_uu;
static unsigned long long _XMP_GTOL_acc_uu_0;
static unsigned long long _XMP_GTOL_acc_uu_1;
static int _XMP_GTOL_temp0_uu_0;
extern void xmpc_init_all();
extern void xmpc_module_init();
static int xmpc_main(int argc, char * argv[]);
extern void xmpc_finalize_all();
extern void __lap_1d_xmpc_module_init_();
extern void __lap_1d_xmpc_module_finalize_();
# 346 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_;
# 347 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_;
# 348 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_;
extern int __underflow(struct _IO_FILE * );
extern int __uflow(struct _IO_FILE * );
extern int __overflow(struct _IO_FILE * , int);
extern int _IO_getc(struct _IO_FILE * __fp);
extern int _IO_putc(int __c, struct _IO_FILE * __fp);
extern int _IO_feof(struct _IO_FILE * __fp);
extern int _IO_ferror(struct _IO_FILE * __fp);
extern int _IO_peekc_locked(struct _IO_FILE * __fp);
extern void _IO_flockfile(struct _IO_FILE * );
extern void _IO_funlockfile(struct _IO_FILE * );
extern int _IO_ftrylockfile(struct _IO_FILE * );
extern int _IO_vfscanf(struct _IO_FILE * , char const * , __builtin_va_list, int * );
extern int _IO_vfprintf(struct _IO_FILE * , char const * , __builtin_va_list);
extern long _IO_padn(struct _IO_FILE * , int, long);
extern unsigned long _IO_sgetn(struct _IO_FILE * , void * , unsigned long);
extern long _IO_seekoff(struct _IO_FILE * , long, int, int);
extern long _IO_seekpos(struct _IO_FILE * , long, int);
extern void _IO_free_backup_area(struct _IO_FILE * );
# 165 "/usr/include/stdio.h"
extern struct _IO_FILE * stdin;
# 166 "/usr/include/stdio.h"
extern struct _IO_FILE * stdout;
# 167 "/usr/include/stdio.h"
extern struct _IO_FILE * stderr;
extern int remove(char const * __filename);
extern int rename(char const * __old, char const * __new);
extern int renameat(int __oldfd, char const * __old, int __newfd, char const * __new);
extern struct _IO_FILE * tmpfile(void);
extern char * tmpnam(char * __s);
extern char * tmpnam_r(char * __s);
extern char * tempnam(char const * __dir, char const * __pfx);
extern int fclose(struct _IO_FILE * __stream);
extern int fflush(struct _IO_FILE * __stream);
extern int fflush_unlocked(struct _IO_FILE * __stream);
extern struct _IO_FILE * fopen(char const * __filename, char const * __modes);
extern struct _IO_FILE * freopen(char const * __filename, char const * __modes, struct _IO_FILE * __stream);
extern struct _IO_FILE * fdopen(int __fd, char const * __modes);
extern struct _IO_FILE * fmemopen(void * __s, unsigned long __len, char const * __modes);
extern struct _IO_FILE * open_memstream(char * * __bufloc, unsigned long * __sizeloc);
extern void setbuf(struct _IO_FILE * __stream, char * __buf);
extern int setvbuf(struct _IO_FILE * __stream, char * __buf, int __modes, unsigned long __n);
extern void setbuffer(struct _IO_FILE * __stream, char * __buf, unsigned long __size);
extern void setlinebuf(struct _IO_FILE * __stream);
extern int fprintf(struct _IO_FILE * __stream, char const * __format, ...);
extern int printf(char const * __format, ...);
extern int sprintf(char * __s, char const * __format, ...);
extern int vfprintf(struct _IO_FILE * __s, char const * __format, __builtin_va_list __arg);
extern int vprintf(char const * __format, __builtin_va_list __arg);
extern int vsprintf(char * __s, char const * __format, __builtin_va_list __arg);
extern int snprintf(char * __s, unsigned long __maxlen, char const * __format, ...);
extern int vsnprintf(char * __s, unsigned long __maxlen, char const * __format, __builtin_va_list __arg);
extern int vdprintf(int __fd, char const * __fmt, __builtin_va_list __arg);
extern int dprintf(int __fd, char const * __fmt, ...);
extern int fscanf(struct _IO_FILE * __stream, char const * __format, ...);
extern int scanf(char const * __format, ...);
extern int sscanf(char const * __s, char const * __format, ...);
extern int __isoc99_fscanf(struct _IO_FILE * __stream, char const * __format, ...);
extern int __isoc99_scanf(char const * __format, ...);
extern int __isoc99_sscanf(char const * __s, char const * __format, ...);
extern int vfscanf(struct _IO_FILE * __s, char const * __format, __builtin_va_list __arg);
extern int vscanf(char const * __format, __builtin_va_list __arg);
extern int vsscanf(char const * __s, char const * __format, __builtin_va_list __arg);
extern int __isoc99_vfscanf(struct _IO_FILE * __s, char const * __format, __builtin_va_list __arg);
extern int __isoc99_vscanf(char const * __format, __builtin_va_list __arg);
extern int __isoc99_vsscanf(char const * __s, char const * __format, __builtin_va_list __arg);
extern int fgetc(struct _IO_FILE * __stream);
extern int getc(struct _IO_FILE * __stream);
extern int getchar(void);
extern int getc_unlocked(struct _IO_FILE * __stream);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(struct _IO_FILE * __stream);
extern int fputc(int __c, struct _IO_FILE * __stream);
extern int putc(int __c, struct _IO_FILE * __stream);
extern int putchar(int __c);
extern int fputc_unlocked(int __c, struct _IO_FILE * __stream);
extern int putc_unlocked(int __c, struct _IO_FILE * __stream);
extern int putchar_unlocked(int __c);
extern int getw(struct _IO_FILE * __stream);
extern int putw(int __w, struct _IO_FILE * __stream);
extern char * fgets(char * __s, int __n, struct _IO_FILE * __stream);
extern char * gets(char * __s);
extern long __getdelim(char * * __lineptr, unsigned long * __n, int __delimiter, struct _IO_FILE * __stream);
extern long getdelim(char * * __lineptr, unsigned long * __n, int __delimiter, struct _IO_FILE * __stream);
extern long getline(char * * __lineptr, unsigned long * __n, struct _IO_FILE * __stream);
extern int fputs(char const * __s, struct _IO_FILE * __stream);
extern int puts(char const * __s);
extern int ungetc(int __c, struct _IO_FILE * __stream);
extern unsigned long fread(void * __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * __stream);
extern unsigned long fwrite(void const * __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * __s);
extern unsigned long fread_unlocked(void * __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * __stream);
extern unsigned long fwrite_unlocked(void const * __ptr, unsigned long __size, unsigned long __n, struct _IO_FILE * __stream);
extern int fseek(struct _IO_FILE * __stream, long __off, int __whence);
extern long ftell(struct _IO_FILE * __stream);
extern void rewind(struct _IO_FILE * __stream);
extern int fseeko(struct _IO_FILE * __stream, long __off, int __whence);
extern long ftello(struct _IO_FILE * __stream);
extern int fgetpos(struct _IO_FILE * __stream, struct anon_type_4__G_fpos_t * __pos);
extern int fsetpos(struct _IO_FILE * __stream, struct anon_type_4__G_fpos_t const * __pos);
extern void clearerr(struct _IO_FILE * __stream);
extern int feof(struct _IO_FILE * __stream);
extern int ferror(struct _IO_FILE * __stream);
extern void clearerr_unlocked(struct _IO_FILE * __stream);
extern int feof_unlocked(struct _IO_FILE * __stream);
extern int ferror_unlocked(struct _IO_FILE * __stream);
extern void perror(char const * __s);
# 27 "/usr/include/bits/sys_errlist.h"
extern int sys_nerr;
# 28 "/usr/include/bits/sys_errlist.h"
extern char const * const sys_errlist[];
extern int fileno(struct _IO_FILE * __stream);
extern int fileno_unlocked(struct _IO_FILE * __stream);
extern struct _IO_FILE * popen(char const * __command, char const * __modes);
extern int pclose(struct _IO_FILE * __stream);
extern char * ctermid(char * __s);
extern void flockfile(struct _IO_FILE * __stream);
extern int ftrylockfile(struct _IO_FILE * __stream);
extern void funlockfile(struct _IO_FILE * __stream);
# 52 "/usr/include/bits/huge_val.h"
static union anon_type_6___huge_val_t __huge_val = {{0, 0, 0, 0, 0, 0, 240, 127}};
# 50 "/usr/include/bits/huge_valf.h"
static union anon_type_7___huge_valf_t __huge_valf = {{0, 0, 128, 127}};
# 49 "/usr/include/bits/nan.h"
static union anon_type_8 __nan_union = {{0, 0, 192, 127}};
extern double acos(double __x);
extern double __acos(double __x);
extern double asin(double __x);
extern double __asin(double __x);
extern double atan(double __x);
extern double __atan(double __x);
extern double atan2(double __y, double __x);
extern double __atan2(double __y, double __x);
extern double cos(double __x);
extern double __cos(double __x);
extern double sin(double __x);
extern double __sin(double __x);
extern double tan(double __x);
extern double __tan(double __x);
extern double cosh(double __x);
extern double __cosh(double __x);
extern double sinh(double __x);
extern double __sinh(double __x);
extern double tanh(double __x);
extern double __tanh(double __x);
extern double acosh(double __x);
extern double __acosh(double __x);
extern double asinh(double __x);
extern double __asinh(double __x);
extern double atanh(double __x);
extern double __atanh(double __x);
extern double exp(double __x);
extern double __exp(double __x);
extern double frexp(double __x, int * __exponent);
extern double __frexp(double __x, int * __exponent);
extern double ldexp(double __x, int __exponent);
extern double __ldexp(double __x, int __exponent);
extern double log(double __x);
extern double __log(double __x);
extern double log10(double __x);
extern double __log10(double __x);
extern double modf(double __x, double * __iptr);
extern double __modf(double __x, double * __iptr);
extern double expm1(double __x);
extern double __expm1(double __x);
extern double log1p(double __x);
extern double __log1p(double __x);
extern double logb(double __x);
extern double __logb(double __x);
extern double exp2(double __x);
extern double __exp2(double __x);
extern double log2(double __x);
extern double __log2(double __x);
extern double pow(double __x, double __y);
extern double __pow(double __x, double __y);
extern double sqrt(double __x);
extern double __sqrt(double __x);
extern double hypot(double __x, double __y);
extern double __hypot(double __x, double __y);
extern double cbrt(double __x);
extern double __cbrt(double __x);
extern double ceil(double __x);
extern double __ceil(double __x);
extern double fabs(double __x);
extern double __fabs(double __x);
extern double floor(double __x);
extern double __floor(double __x);
extern double fmod(double __x, double __y);
extern double __fmod(double __x, double __y);
extern int __isinf(double __value);
extern int __finite(double __value);
extern int isinf(double __value);
extern int finite(double __value);
extern double drem(double __x, double __y);
extern double __drem(double __x, double __y);
extern double significand(double __x);
extern double __significand(double __x);
extern double copysign(double __x, double __y);
extern double __copysign(double __x, double __y);
extern double nan(char const * __tagb);
extern double __nan(char const * __tagb);
extern int __isnan(double __value);
extern int isnan(double __value);
extern double j0(double);
extern double __j0(double);
extern double j1(double);
extern double __j1(double);
extern double jn(int, double);
extern double __jn(int, double);
extern double y0(double);
extern double __y0(double);
extern double y1(double);
extern double __y1(double);
extern double yn(int, double);
extern double __yn(int, double);
extern double erf(double);
extern double __erf(double);
extern double erfc(double);
extern double __erfc(double);
extern double lgamma(double);
extern double __lgamma(double);
extern double tgamma(double);
extern double __tgamma(double);
extern double gamma(double);
extern double __gamma(double);
extern double lgamma_r(double, int * __signgamp);
extern double __lgamma_r(double, int * __signgamp);
extern double rint(double __x);
extern double __rint(double __x);
extern double nextafter(double __x, double __y);
extern double __nextafter(double __x, double __y);
extern double nexttoward(double __x, long double __y);
extern double __nexttoward(double __x, long double __y);
extern double remainder(double __x, double __y);
extern double __remainder(double __x, double __y);
extern double scalbn(double __x, int __n);
extern double __scalbn(double __x, int __n);
extern int ilogb(double __x);
extern int __ilogb(double __x);
extern double scalbln(double __x, long __n);
extern double __scalbln(double __x, long __n);
extern double nearbyint(double __x);
extern double __nearbyint(double __x);
extern double round(double __x);
extern double __round(double __x);
extern double trunc(double __x);
extern double __trunc(double __x);
extern double remquo(double __x, double __y, int * __quo);
extern double __remquo(double __x, double __y, int * __quo);
extern long lrint(double __x);
extern long __lrint(double __x);
extern long long llrint(double __x);
extern long long __llrint(double __x);
extern long lround(double __x);
extern long __lround(double __x);
extern long long llround(double __x);
extern long long __llround(double __x);
extern double fdim(double __x, double __y);
extern double __fdim(double __x, double __y);
extern double fmax(double __x, double __y);
extern double __fmax(double __x, double __y);
extern double fmin(double __x, double __y);
extern double __fmin(double __x, double __y);
extern int __fpclassify(double __value);
extern int __signbit(double __value);
extern double fma(double __x, double __y, double __z);
extern double __fma(double __x, double __y, double __z);
extern double scalb(double __x, double __n);
extern double __scalb(double __x, double __n);
extern float acosf(float __x);
extern float __acosf(float __x);
extern float asinf(float __x);
extern float __asinf(float __x);
extern float atanf(float __x);
extern float __atanf(float __x);
extern float atan2f(float __y, float __x);
extern float __atan2f(float __y, float __x);
extern float cosf(float __x);
extern float __cosf(float __x);
extern float sinf(float __x);
extern float __sinf(float __x);
extern float tanf(float __x);
extern float __tanf(float __x);
extern float coshf(float __x);
extern float __coshf(float __x);
extern float sinhf(float __x);
extern float __sinhf(float __x);
extern float tanhf(float __x);
extern float __tanhf(float __x);
extern float acoshf(float __x);
extern float __acoshf(float __x);
extern float asinhf(float __x);
extern float __asinhf(float __x);
extern float atanhf(float __x);
extern float __atanhf(float __x);
extern float expf(float __x);
extern float __expf(float __x);
extern float frexpf(float __x, int * __exponent);
extern float __frexpf(float __x, int * __exponent);
extern float ldexpf(float __x, int __exponent);
extern float __ldexpf(float __x, int __exponent);
extern float logf(float __x);
extern float __logf(float __x);
extern float log10f(float __x);
extern float __log10f(float __x);
extern float modff(float __x, float * __iptr);
extern float __modff(float __x, float * __iptr);
extern float expm1f(float __x);
extern float __expm1f(float __x);
extern float log1pf(float __x);
extern float __log1pf(float __x);
extern float logbf(float __x);
extern float __logbf(float __x);
extern float exp2f(float __x);
extern float __exp2f(float __x);
extern float log2f(float __x);
extern float __log2f(float __x);
extern float powf(float __x, float __y);
extern float __powf(float __x, float __y);
extern float sqrtf(float __x);
extern float __sqrtf(float __x);
extern float hypotf(float __x, float __y);
extern float __hypotf(float __x, float __y);
extern float cbrtf(float __x);
extern float __cbrtf(float __x);
extern float ceilf(float __x);
extern float __ceilf(float __x);
extern float fabsf(float __x);
extern float __fabsf(float __x);
extern float floorf(float __x);
extern float __floorf(float __x);
extern float fmodf(float __x, float __y);
extern float __fmodf(float __x, float __y);
extern int __isinff(float __value);
extern int __finitef(float __value);
extern int isinff(float __value);
extern int finitef(float __value);
extern float dremf(float __x, float __y);
extern float __dremf(float __x, float __y);
extern float significandf(float __x);
extern float __significandf(float __x);
extern float copysignf(float __x, float __y);
extern float __copysignf(float __x, float __y);
extern float nanf(char const * __tagb);
extern float __nanf(char const * __tagb);
extern int __isnanf(float __value);
extern int isnanf(float __value);
extern float j0f(float);
extern float __j0f(float);
extern float j1f(float);
extern float __j1f(float);
extern float jnf(int, float);
extern float __jnf(int, float);
extern float y0f(float);
extern float __y0f(float);
extern float y1f(float);
extern float __y1f(float);
extern float ynf(int, float);
extern float __ynf(int, float);
extern float erff(float);
extern float __erff(float);
extern float erfcf(float);
extern float __erfcf(float);
extern float lgammaf(float);
extern float __lgammaf(float);
extern float tgammaf(float);
extern float __tgammaf(float);
extern float gammaf(float);
extern float __gammaf(float);
extern float lgammaf_r(float, int * __signgamp);
extern float __lgammaf_r(float, int * __signgamp);
extern float rintf(float __x);
extern float __rintf(float __x);
extern float nextafterf(float __x, float __y);
extern float __nextafterf(float __x, float __y);
extern float nexttowardf(float __x, long double __y);
extern float __nexttowardf(float __x, long double __y);
extern float remainderf(float __x, float __y);
extern float __remainderf(float __x, float __y);
extern float scalbnf(float __x, int __n);
extern float __scalbnf(float __x, int __n);
extern int ilogbf(float __x);
extern int __ilogbf(float __x);
extern float scalblnf(float __x, long __n);
extern float __scalblnf(float __x, long __n);
extern float nearbyintf(float __x);
extern float __nearbyintf(float __x);
extern float roundf(float __x);
extern float __roundf(float __x);
extern float truncf(float __x);
extern float __truncf(float __x);
extern float remquof(float __x, float __y, int * __quo);
extern float __remquof(float __x, float __y, int * __quo);
extern long lrintf(float __x);
extern long __lrintf(float __x);
extern long long llrintf(float __x);
extern long long __llrintf(float __x);
extern long lroundf(float __x);
extern long __lroundf(float __x);
extern long long llroundf(float __x);
extern long long __llroundf(float __x);
extern float fdimf(float __x, float __y);
extern float __fdimf(float __x, float __y);
extern float fmaxf(float __x, float __y);
extern float __fmaxf(float __x, float __y);
extern float fminf(float __x, float __y);
extern float __fminf(float __x, float __y);
extern int __fpclassifyf(float __value);
extern int __signbitf(float __value);
extern float fmaf(float __x, float __y, float __z);
extern float __fmaf(float __x, float __y, float __z);
extern float scalbf(float __x, float __n);
extern float __scalbf(float __x, float __n);
extern long double acosl(long double __x);
extern long double __acosl(long double __x);
extern long double asinl(long double __x);
extern long double __asinl(long double __x);
extern long double atanl(long double __x);
extern long double __atanl(long double __x);
extern long double atan2l(long double __y, long double __x);
extern long double __atan2l(long double __y, long double __x);
extern long double cosl(long double __x);
extern long double __cosl(long double __x);
extern long double sinl(long double __x);
extern long double __sinl(long double __x);
extern long double tanl(long double __x);
extern long double __tanl(long double __x);
extern long double coshl(long double __x);
extern long double __coshl(long double __x);
extern long double sinhl(long double __x);
extern long double __sinhl(long double __x);
extern long double tanhl(long double __x);
extern long double __tanhl(long double __x);
extern long double acoshl(long double __x);
extern long double __acoshl(long double __x);
extern long double asinhl(long double __x);
extern long double __asinhl(long double __x);
extern long double atanhl(long double __x);
extern long double __atanhl(long double __x);
extern long double expl(long double __x);
extern long double __expl(long double __x);
extern long double frexpl(long double __x, int * __exponent);
extern long double __frexpl(long double __x, int * __exponent);
extern long double ldexpl(long double __x, int __exponent);
extern long double __ldexpl(long double __x, int __exponent);
extern long double logl(long double __x);
extern long double __logl(long double __x);
extern long double log10l(long double __x);
extern long double __log10l(long double __x);
extern long double modfl(long double __x, long double * __iptr);
extern long double __modfl(long double __x, long double * __iptr);
extern long double expm1l(long double __x);
extern long double __expm1l(long double __x);
extern long double log1pl(long double __x);
extern long double __log1pl(long double __x);
extern long double logbl(long double __x);
extern long double __logbl(long double __x);
extern long double exp2l(long double __x);
extern long double __exp2l(long double __x);
extern long double log2l(long double __x);
extern long double __log2l(long double __x);
extern long double powl(long double __x, long double __y);
extern long double __powl(long double __x, long double __y);
extern long double sqrtl(long double __x);
extern long double __sqrtl(long double __x);
extern long double hypotl(long double __x, long double __y);
extern long double __hypotl(long double __x, long double __y);
extern long double cbrtl(long double __x);
extern long double __cbrtl(long double __x);
extern long double ceill(long double __x);
extern long double __ceill(long double __x);
extern long double fabsl(long double __x);
extern long double __fabsl(long double __x);
extern long double floorl(long double __x);
extern long double __floorl(long double __x);
extern long double fmodl(long double __x, long double __y);
extern long double __fmodl(long double __x, long double __y);
extern int __isinfl(long double __value);
extern int __finitel(long double __value);
extern int isinfl(long double __value);
extern int finitel(long double __value);
extern long double dreml(long double __x, long double __y);
extern long double __dreml(long double __x, long double __y);
extern long double significandl(long double __x);
extern long double __significandl(long double __x);
extern long double copysignl(long double __x, long double __y);
extern long double __copysignl(long double __x, long double __y);
extern long double nanl(char const * __tagb);
extern long double __nanl(char const * __tagb);
extern int __isnanl(long double __value);
extern int isnanl(long double __value);
extern long double j0l(long double);
extern long double __j0l(long double);
extern long double j1l(long double);
extern long double __j1l(long double);
extern long double jnl(int, long double);
extern long double __jnl(int, long double);
extern long double y0l(long double);
extern long double __y0l(long double);
extern long double y1l(long double);
extern long double __y1l(long double);
extern long double ynl(int, long double);
extern long double __ynl(int, long double);
extern long double erfl(long double);
extern long double __erfl(long double);
extern long double erfcl(long double);
extern long double __erfcl(long double);
extern long double lgammal(long double);
extern long double __lgammal(long double);
extern long double tgammal(long double);
extern long double __tgammal(long double);
extern long double gammal(long double);
extern long double __gammal(long double);
extern long double lgammal_r(long double, int * __signgamp);
extern long double __lgammal_r(long double, int * __signgamp);
extern long double rintl(long double __x);
extern long double __rintl(long double __x);
extern long double nextafterl(long double __x, long double __y);
extern long double __nextafterl(long double __x, long double __y);
extern long double nexttowardl(long double __x, long double __y);
extern long double __nexttowardl(long double __x, long double __y);
extern long double remainderl(long double __x, long double __y);
extern long double __remainderl(long double __x, long double __y);
extern long double scalbnl(long double __x, int __n);
extern long double __scalbnl(long double __x, int __n);
extern int ilogbl(long double __x);
extern int __ilogbl(long double __x);
extern long double scalblnl(long double __x, long __n);
extern long double __scalblnl(long double __x, long __n);
extern long double nearbyintl(long double __x);
extern long double __nearbyintl(long double __x);
extern long double roundl(long double __x);
extern long double __roundl(long double __x);
extern long double truncl(long double __x);
extern long double __truncl(long double __x);
extern long double remquol(long double __x, long double __y, int * __quo);
extern long double __remquol(long double __x, long double __y, int * __quo);
extern long lrintl(long double __x);
extern long __lrintl(long double __x);
extern long long llrintl(long double __x);
extern long long __llrintl(long double __x);
extern long lroundl(long double __x);
extern long __lroundl(long double __x);
extern long long llroundl(long double __x);
extern long long __llroundl(long double __x);
extern long double fdiml(long double __x, long double __y);
extern long double __fdiml(long double __x, long double __y);
extern long double fmaxl(long double __x, long double __y);
extern long double __fmaxl(long double __x, long double __y);
extern long double fminl(long double __x, long double __y);
extern long double __fminl(long double __x, long double __y);
extern int __fpclassifyl(long double __value);
extern int __signbitl(long double __value);
extern long double fmal(long double __x, long double __y, long double __z);
extern long double __fmal(long double __x, long double __y, long double __z);
extern long double scalbl(long double __x, long double __n);
extern long double __scalbl(long double __x, long double __n);
# 157 "/usr/include/math.h"
extern int signgam;
# 303 "/usr/include/math.h"
extern enum anon_type_10__LIB_VERSION_TYPE _LIB_VERSION;
extern int matherr(struct exception * __exc);
extern int fpclassifyf(float __x);
extern int fpclassify(double __x);
extern int fpclassifyd(double __x);
extern int fpclassifyl(long double __x);
extern int __fpclassifyf(float __value);
extern int __fpclassify(double __value);
extern int __fpclassifyd(double __x);
extern int __fpclassifyl(long double __value);
extern int isinff(float __value);
extern int isinf(double __value);
extern int isinfd(double __x);
extern int isinfl(long double __value);
extern int __isinff(float __value);
extern int __isinf(double __value);
extern int __isinfd(double __x);
extern int __isinfl(long double __value);
extern int isnanf(float __value);
extern int isnan(double __value);
extern int isnand(double __x);
extern int isnanl(long double __value);
extern int __isnanf(float __value);
extern int __isnan(double __value);
extern int __isnand(double __x);
extern int __isnanl(long double __value);
extern int isnormalf(float __x);
extern int isnormal(double __x);
extern int isnormald(double __x);
extern int isnormall(long double __x);
extern int __isnormalf(float __x);
extern int __isnormal(double __x);
extern int __isnormald(double __x);
extern int __isnormall(long double __x);
extern int isfinitef(float __x);
extern int isfinite(double __x);
extern int isfinited(double __x);
extern int isfinitel(long double __x);
extern int __isfinitef(float __x);
extern int __isfinite(double __x);
extern int __isfinited(double __x);
extern int __isfinitel(long double __x);
extern int finitef(float __value);
extern int finite(double __value);
extern int finited(double __x);
extern int finitel(long double __value);
extern int __finitef(float __value);
extern int __finite(double __value);
extern int __finited(double __x);
extern int __finitel(long double __value);
extern int signbitf(float __x);
extern int signbit(double __x);
extern int signbitd(double __x);
extern int signbitl(long double __x);
extern int __signbitf(float __value);
extern int __signbit(double __value);
extern int __signbitd(double __x);
extern int __signbitl(long double __value);
extern int isgreaterf(float __xf, float __yf);
extern int isgreater(double __xd, double __yd);
extern int isgreaterl(long double __xl, long double __yl);
extern int __isgreaterf(float __xf, float __yf);
extern int __isgreater(double __xd, double __yd);
extern int __isgreaterl(long double __xl, long double __yl);
extern int isgreaterequalf(float __xf, float __yf);
extern int isgreaterequal(double __xd, double __yd);
extern int isgreaterequall(long double __xl, long double __yl);
extern int __isgreaterequalf(float __xf, float __yf);
extern int __isgreaterequal(double __xd, double __yd);
extern int __isgreaterequall(long double __xl, long double __yl);
extern int islessf(float __xf, float __yf);
extern int isless(double __xd, double __yd);
extern int islessl(long double __xl, long double __yl);
extern int __islessf(float __xf, float __yf);
extern int __isless(double __xd, double __yd);
extern int __islessl(long double __xl, long double __yl);
extern int islessequalf(float __xf, float __yf);
extern int islessequal(double __xd, double __yd);
extern int islessequall(long double __xl, long double __yl);
extern int __islessequalf(float __xf, float __yf);
extern int __islessequal(double __xd, double __yd);
extern int __islessequall(long double __xl, long double __yl);
extern int islessgreaterf(float __xf, float __yf);
extern int islessgreater(double __xd, double __yd);
extern int islessgreaterl(long double __xl, long double __yl);
extern int __islessgreaterf(float __xf, float __yf);
extern int __islessgreater(double __xd, double __yd);
extern int __islessgreaterl(long double __xl, long double __yl);
extern int isunorderedf(float __xf, float __yf);
extern int isunordered(double __xd, double __yd);
extern int isunorderedl(long double __xl, long double __yl);
extern int __isunorderedf(float __xf, float __yf);
extern int __isunordered(double __xd, double __yd);
extern int __isunorderedl(long double __xl, long double __yl);
extern double cot(double __x);
extern float cotf(float __x);
extern long double cotl(long double __x);
extern double cosd(double __x);
extern float cosdf(float __x);
extern long double cosdl(long double __x);
extern double sind(double __x);
extern float sindf(float __x);
extern long double sindl(long double __x);
extern double tand(double __x);
extern float tandf(float __x);
extern long double tandl(long double __x);
extern double cotd(double __x);
extern float cotdf(float __x);
extern long double cotdl(long double __x);
extern double acosd(double __x);
extern float acosdf(float __x);
extern long double acosdl(long double __x);
extern double asind(double __x);
extern float asindf(float __x);
extern long double asindl(long double __x);
extern double atand(double __x);
extern float atandf(float __x);
extern long double atandl(long double __x);
extern double atand2(double __y, double __x);
extern float atand2f(float __y, float __x);
extern long double atand2l(long double __y, long double __x);
extern double atan2d(double __y, double __x);
extern float atan2df(float __y, float __x);
extern long double atan2dl(long double __y, long double __x);
extern void sincosd(double __x, double * __psin, double * __pcos);
extern void sincosdf(float __x, float * __psin, float * __pcos);
extern void sincosdl(long double __x, long double * __psin, long double * __pcos);
extern void sinhcosh(double __x, double * __psinh, double * __pcosh);
extern void sinhcoshf(float __x, float * __psinh, float * __pcosh);
extern void sinhcoshl(long double __x, long double * __psinh, long double * __pcosh);
extern double invsqrt(double __x);
extern float invsqrtf(float __x);
extern long double invsqrtl(long double __x);
extern double cdfnorm(double __x);
extern float cdfnormf(float __x);
extern double cdfnorminv(double __x);
extern float cdfnorminvf(float __x);
extern double erfinv(double __x);
extern float erfinvf(float __x);
extern long double erfinvl(long double __x);
extern double erfcinv(double __x);
extern float erfcinvf(float __x);
extern double gamma_r(double __x, int * __signgam);
extern float gammaf_r(float __x, int * __signgam);
extern long double gammal_r(long double __x, int * __signgam);
extern double annuity(double __x, double __y);
extern double compound(double __x, double __y);
extern float annuityf(float __x, float __y);
extern long double annuityl(long double __x, long double __y);
extern float compoundf(float __x, float __y);
extern long double compoundl(long double __x, long double __y);
extern int matherrf(struct ____exceptionf * __e);
extern int matherrl(struct ____exceptionl * __e);
extern int (* __libm_setusermatherr(int (* __user_matherr)(struct ____exception * )))(struct ____exception * );
extern int (* __libm_setusermatherrf(int (* __user_matherrf)(struct ____exceptionf * )))(struct ____exceptionf * );
extern int (* __libm_setusermatherrl(int (* __user_matherrl)(struct ____exceptionl * )))(struct ____exceptionl * );
# 1213 "/opt/intel/composer_xe_2015.0.090/compiler/include/math.h"
extern enum anon_type_10__LIB_VERSION_TYPE _LIB_VERSIONIMF;
extern long clock(void);
extern long time(long * __timer);
extern double difftime(long __time1, long __time0);
extern long mktime(struct tm * __tp);
extern unsigned long strftime(char * __s, unsigned long __maxsize, char const * __format, struct tm const * __tp);
extern unsigned long strftime_l(char * __s, unsigned long __maxsize, char const * __format, struct tm const * __tp, struct __locale_struct * __loc);
extern struct tm * gmtime(long const * __timer);
extern struct tm * localtime(long const * __timer);
extern struct tm * gmtime_r(long const * __timer, struct tm * __tp);
extern struct tm * localtime_r(long const * __timer, struct tm * __tp);
extern char * asctime(struct tm const * __tp);
extern char * ctime(long const * __timer);
extern char * asctime_r(struct tm const * __tp, char * __buf);
extern char * ctime_r(long const * __timer, char * __buf);
# 276 "/usr/include/time.h"
extern char * __tzname[2];
# 277 "/usr/include/time.h"
extern int __daylight;
# 278 "/usr/include/time.h"
extern long __timezone;
# 283 "/usr/include/time.h"
extern char * tzname[2];
extern void tzset(void);
# 291 "/usr/include/time.h"
extern int daylight;
# 292 "/usr/include/time.h"
extern long timezone;
extern int stime(long const * __when);
extern long timegm(struct tm * __tp);
extern long timelocal(struct tm * __tp);
extern int dysize(int __year);
extern int nanosleep(struct timespec const * __requested_time, struct timespec * __remaining);
extern int clock_getres(int __clock_id, struct timespec * __res);
extern int clock_gettime(int __clock_id, struct timespec * __tp);
extern int clock_settime(int __clock_id, struct timespec const * __tp);
extern int clock_nanosleep(int __clock_id, int __flags, struct timespec const * __req, struct timespec * __rem);
extern int clock_getcpuclockid(int __pid, int * __clock_id);
extern int timer_create(int __clock_id, struct sigevent * __evp, void * * __timerid);
extern int timer_delete(void * __timerid);
extern int timer_settime(void * __timerid, int __flags, struct itimerspec const * __value, struct itimerspec * __ovalue);
extern int timer_gettime(void * __timerid, struct itimerspec * __value);
extern int timer_getoverrun(void * __timerid);
extern unsigned long __ctype_get_mb_cur_max(void);
extern double atof(char const * __nptr);
extern int atoi(char const * __nptr);
extern long atol(char const * __nptr);
extern long long atoll(char const * __nptr);
extern double strtod(char const * __nptr, char * * __endptr);
extern float strtof(char const * __nptr, char * * __endptr);
extern long double strtold(char const * __nptr, char * * __endptr);
extern long strtol(char const * __nptr, char * * __endptr, int __base);
extern unsigned long strtoul(char const * __nptr, char * * __endptr, int __base);
extern long long strtoq(char const * __nptr, char * * __endptr, int __base);
extern unsigned long long strtouq(char const * __nptr, char * * __endptr, int __base);
extern long long strtoll(char const * __nptr, char * * __endptr, int __base);
extern unsigned long long strtoull(char const * __nptr, char * * __endptr, int __base);
extern char * l64a(long __n);
extern long a64l(char const * __s);
extern int select(int __nfds, struct anon_type_17_fd_set * __readfds, struct anon_type_17_fd_set * __writefds, struct anon_type_17_fd_set * __exceptfds, struct timeval * __timeout);
extern int pselect(int __nfds, struct anon_type_17_fd_set * __readfds, struct anon_type_17_fd_set * __writefds, struct anon_type_17_fd_set * __exceptfds, struct timespec const * __timeout, struct anon_type_16___sigset_t const * __sigmask);
extern unsigned int gnu_dev_major(unsigned long long __dev);
extern unsigned int gnu_dev_minor(unsigned long long __dev);
extern unsigned long long gnu_dev_makedev(unsigned int __major, unsigned int __minor);
extern long random(void);
extern void srandom(unsigned int __seed);
extern char * initstate(unsigned int __seed, char * __statebuf, unsigned long __statelen);
extern char * setstate(char * __statebuf);
extern int random_r(struct random_data * __buf, int * __result);
extern int srandom_r(unsigned int __seed, struct random_data * __buf);
extern int initstate_r(unsigned int __seed, char * __statebuf, unsigned long __statelen, struct random_data * __buf);
extern int setstate_r(char * __statebuf, struct random_data * __buf);
extern int rand(void);
extern void srand(unsigned int __seed);
extern int rand_r(unsigned int * __seed);
extern double drand48(void);
extern double erand48(unsigned short __xsubi[3]);
extern long lrand48(void);
extern long nrand48(unsigned short __xsubi[3]);
extern long mrand48(void);
extern long jrand48(unsigned short __xsubi[3]);
extern void srand48(long __seedval);
extern unsigned short * seed48(unsigned short __seed16v[3]);
extern void lcong48(unsigned short __param[7]);
extern int drand48_r(struct drand48_data * __buffer, double * __result);
extern int erand48_r(unsigned short __xsubi[3], struct drand48_data * __buffer, double * __result);
extern int lrand48_r(struct drand48_data * __buffer, long * __result);
extern int nrand48_r(unsigned short __xsubi[3], struct drand48_data * __buffer, long * __result);
extern int mrand48_r(struct drand48_data * __buffer, long * __result);
extern int jrand48_r(unsigned short __xsubi[3], struct drand48_data * __buffer, long * __result);
extern int srand48_r(long __seedval, struct drand48_data * __buffer);
extern int seed48_r(unsigned short __seed16v[3], struct drand48_data * __buffer);
extern int lcong48_r(unsigned short __param[7], struct drand48_data * __buffer);
extern void * malloc(unsigned long __size);
extern void * calloc(unsigned long __nmemb, unsigned long __size);
extern void * realloc(void * __ptr, unsigned long __size);
extern void free(void * __ptr);
extern void cfree(void * __ptr);
extern void * alloca(unsigned long __size);
extern void * valloc(unsigned long __size);
extern int posix_memalign(void * * __memptr, unsigned long __alignment, unsigned long __size);
extern void abort(void);
extern int atexit(void (* __func)(void));
extern int on_exit(void (* __func)(int, void * ), void * __arg);
extern void exit(int __status);
extern void _Exit(int __status);
extern char * getenv(char const * __name);
extern char * __secure_getenv(char const * __name);
extern int putenv(char * __string);
extern int setenv(char const * __name, char const * __value, int __replace);
extern int unsetenv(char const * __name);
extern int clearenv(void);
extern char * mktemp(char * __template);
extern int mkstemp(char * __template);
extern int mkstemps(char * __template, int __suffixlen);
extern char * mkdtemp(char * __template);
extern int system(char const * __command);
extern char * realpath(char const * __name, char * __resolved);
extern void * bsearch(void const * __key, void const * __base, unsigned long __nmemb, unsigned long __size, int (* __compar)(void const * , void const * ));
extern void qsort(void * __base, unsigned long __nmemb, unsigned long __size, int (* __compar)(void const * , void const * ));
extern int abs(int __x);
extern long labs(long __x);
extern long long llabs(long long __x);
extern struct anon_type_13_div_t div(int __numer, int __denom);
extern struct anon_type_14_ldiv_t ldiv(long __numer, long __denom);
extern struct anon_type_15_lldiv_t lldiv(long long __numer, long long __denom);
extern char * ecvt(double __value, int __ndigit, int * __decpt, int * __sign);
extern char * fcvt(double __value, int __ndigit, int * __decpt, int * __sign);
extern char * gcvt(double __value, int __ndigit, char * __buf);
extern char * qecvt(long double __value, int __ndigit, int * __decpt, int * __sign);
extern char * qfcvt(long double __value, int __ndigit, int * __decpt, int * __sign);
extern char * qgcvt(long double __value, int __ndigit, char * __buf);
extern int ecvt_r(double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, unsigned long __len);
extern int fcvt_r(double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, unsigned long __len);
extern int qecvt_r(long double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, unsigned long __len);
extern int qfcvt_r(long double __value, int __ndigit, int * __decpt, int * __sign, char * __buf, unsigned long __len);
extern int mblen(char const * __s, unsigned long __n);
extern int mbtowc(int * __pwc, char const * __s, unsigned long __n);
extern int wctomb(char * __s, int __wchar);
extern unsigned long mbstowcs(int * __pwcs, char const * __s, unsigned long __n);
extern unsigned long wcstombs(char * __s, int const * __pwcs, unsigned long __n);
extern int rpmatch(char const * __response);
extern int getsubopt(char * * __optionp, char * const * __tokens, char * * __valuep);
extern int getloadavg(double __loadavg[], int __nelem);
# 674 "/opt/intel//impi/5.0.1.035/intel64/include/mpi.h"
extern struct MPIR_T_pvar_handle_s * const MPI_T_PVAR_ALL_HANDLES;
# 805 "/opt/intel//impi/5.0.1.035/intel64/include/mpi.h"
extern int * MPI_F_STATUS_IGNORE;
# 806 "/opt/intel//impi/5.0.1.035/intel64/include/mpi.h"
extern int * MPI_F_STATUSES_IGNORE;
# 807 "/opt/intel//impi/5.0.1.035/intel64/include/mpi.h"
extern int * const MPI_UNWEIGHTED;
# 808 "/opt/intel//impi/5.0.1.035/intel64/include/mpi.h"
extern int * const MPI_WEIGHTS_EMPTY;
int MPI_Send(void const * buf, int count, int datatype, int dest, int tag, int comm);
int MPI_Recv(void * buf, int count, int datatype, int source, int tag, int comm, struct MPI_Status * status);
int MPI_Get_count(struct MPI_Status const * status, int datatype, int * count);
int MPI_Bsend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int MPI_Ssend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int MPI_Rsend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int MPI_Buffer_attach(void * buffer, int size);
int MPI_Buffer_detach(void * buffer_addr, int * size);
int MPI_Isend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Ibsend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Issend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Irsend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Irecv(void * buf, int count, int datatype, int source, int tag, int comm, int * request);
int MPI_Wait(int * request, struct MPI_Status * status);
int MPI_Test(int * request, int * flag, struct MPI_Status * status);
int MPI_Request_free(int * request);
int MPI_Waitany(int count, int array_of_requests[], int * indx, struct MPI_Status * status);
int MPI_Testany(int count, int array_of_requests[], int * indx, int * flag, struct MPI_Status * status);
int MPI_Waitall(int count, int array_of_requests[], struct MPI_Status array_of_statuses[]);
int MPI_Testall(int count, int array_of_requests[], int * flag, struct MPI_Status array_of_statuses[]);
int MPI_Waitsome(int incount, int array_of_requests[], int * outcount, int array_of_indices[], struct MPI_Status array_of_statuses[]);
int MPI_Testsome(int incount, int array_of_requests[], int * outcount, int array_of_indices[], struct MPI_Status array_of_statuses[]);
int MPI_Iprobe(int source, int tag, int comm, int * flag, struct MPI_Status * status);
int MPI_Probe(int source, int tag, int comm, struct MPI_Status * status);
int MPI_Cancel(int * request);
int MPI_Test_cancelled(struct MPI_Status const * status, int * flag);
int MPI_Send_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Bsend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Ssend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Rsend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int MPI_Recv_init(void * buf, int count, int datatype, int source, int tag, int comm, int * request);
int MPI_Start(int * request);
int MPI_Startall(int count, int array_of_requests[]);
int MPI_Sendrecv(void const * sendbuf, int sendcount, int sendtype, int dest, int sendtag, void * recvbuf, int recvcount, int recvtype, int source, int recvtag, int comm, struct MPI_Status * status);
int MPI_Sendrecv_replace(void * buf, int count, int datatype, int dest, int sendtag, int source, int recvtag, int comm, struct MPI_Status * status);
int MPI_Type_contiguous(int count, int oldtype, int * newtype);
int MPI_Type_vector(int count, int blocklength, int stride, int oldtype, int * newtype);
int MPI_Type_hvector(int count, int blocklength, long stride, int oldtype, int * newtype);
int MPI_Type_indexed(int count, int const * array_of_blocklengths, int const * array_of_displacements, int oldtype, int * newtype);
int MPI_Type_hindexed(int count, int const * array_of_blocklengths, long const * array_of_displacements, int oldtype, int * newtype);
int MPI_Type_struct(int count, int const * array_of_blocklengths, long const * array_of_displacements, int const * array_of_types, int * newtype);
int MPI_Address(void const * location, long * address);
int MPI_Type_extent(int datatype, long * extent);
int MPI_Type_size(int datatype, int * size);
int MPI_Type_lb(int datatype, long * displacement);
int MPI_Type_ub(int datatype, long * displacement);
int MPI_Type_commit(int * datatype);
int MPI_Type_free(int * datatype);
int MPI_Get_elements(struct MPI_Status const * status, int datatype, int * count);
int MPI_Pack(void const * inbuf, int incount, int datatype, void * outbuf, int outsize, int * position, int comm);
int MPI_Unpack(void const * inbuf, int insize, int * position, void * outbuf, int outcount, int datatype, int comm);
int MPI_Pack_size(int incount, int datatype, int comm, int * size);
int MPI_Barrier(int comm);
int MPI_Bcast(void * buffer, int count, int datatype, int root, int comm);
int MPI_Gather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int MPI_Gatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const * recvcounts, int const * displs, int recvtype, int root, int comm);
int MPI_Scatter(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int MPI_Scatterv(void const * sendbuf, int const * sendcounts, int const * displs, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int MPI_Allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int MPI_Allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const * recvcounts, int const * displs, int recvtype, int comm);
int MPI_Alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int MPI_Alltoallv(void const * sendbuf, int const * sendcounts, int const * sdispls, int sendtype, void * recvbuf, int const * recvcounts, int const * rdispls, int recvtype, int comm);
int MPI_Alltoallw(void const * sendbuf, int const sendcounts[], int const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], int const rdispls[], int const recvtypes[], int comm);
int MPI_Exscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int MPI_Reduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int root, int comm);
int MPI_Op_create(void (* user_fn)(void * , void * , int * , int * ), int commute, int * op);
int MPI_Op_free(int * op);
int MPI_Allreduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int MPI_Reduce_scatter(void const * sendbuf, void * recvbuf, int const recvcounts[], int datatype, int op, int comm);
int MPI_Scan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int MPI_Group_size(int group, int * size);
int MPI_Group_rank(int group, int * rank);
int MPI_Group_translate_ranks(int group1, int n, int const ranks1[], int group2, int ranks2[]);
int MPI_Group_compare(int group1, int group2, int * result);
int MPI_Comm_group(int comm, int * group);
int MPI_Group_union(int group1, int group2, int * newgroup);
int MPI_Group_intersection(int group1, int group2, int * newgroup);
int MPI_Group_difference(int group1, int group2, int * newgroup);
int MPI_Group_incl(int group, int n, int const ranks[], int * newgroup);
int MPI_Group_excl(int group, int n, int const ranks[], int * newgroup);
int MPI_Group_range_incl(int group, int n, int ranges[][3], int * newgroup);
int MPI_Group_range_excl(int group, int n, int ranges[][3], int * newgroup);
int MPI_Group_free(int * group);
int MPI_Comm_size(int comm, int * size);
int MPI_Comm_rank(int comm, int * rank);
int MPI_Comm_compare(int comm1, int comm2, int * result);
int MPI_Comm_dup(int comm, int * newcomm);
int MPI_Comm_dup_with_info(int comm, int info, int * newcomm);
int MPI_Comm_create(int comm, int group, int * newcomm);
int MPI_Comm_split(int comm, int color, int key, int * newcomm);
int MPI_Comm_free(int * comm);
int MPI_Comm_test_inter(int comm, int * flag);
int MPI_Comm_remote_size(int comm, int * size);
int MPI_Comm_remote_group(int comm, int * group);
int MPI_Intercomm_create(int local_comm, int local_leader, int peer_comm, int remote_leader, int tag, int * newintercomm);
int MPI_Intercomm_merge(int intercomm, int high, int * newintracomm);
int MPI_Keyval_create(int (* copy_fn)(int, int, void * , void * , void * , int * ), int (* delete_fn)(int, int, void * , void * ), int * keyval, void * extra_state);
int MPI_Keyval_free(int * keyval);
int MPI_Attr_put(int comm, int keyval, void * attribute_val);
int MPI_Attr_get(int comm, int keyval, void * attribute_val, int * flag);
int MPI_Attr_delete(int comm, int keyval);
int MPI_Topo_test(int comm, int * status);
int MPI_Cart_create(int comm_old, int ndims, int const dims[], int const periods[], int reorder, int * comm_cart);
int MPI_Dims_create(int nnodes, int ndims, int dims[]);
int MPI_Graph_create(int comm_old, int nnodes, int const indx[], int const edges[], int reorder, int * comm_graph);
int MPI_Graphdims_get(int comm, int * nnodes, int * nedges);
int MPI_Graph_get(int comm, int maxindex, int maxedges, int indx[], int edges[]);
int MPI_Cartdim_get(int comm, int * ndims);
int MPI_Cart_get(int comm, int maxdims, int dims[], int periods[], int coords[]);
int MPI_Cart_rank(int comm, int const coords[], int * rank);
int MPI_Cart_coords(int comm, int rank, int maxdims, int coords[]);
int MPI_Graph_neighbors_count(int comm, int rank, int * nneighbors);
int MPI_Graph_neighbors(int comm, int rank, int maxneighbors, int neighbors[]);
int MPI_Cart_shift(int comm, int direction, int disp, int * rank_source, int * rank_dest);
int MPI_Cart_sub(int comm, int const remain_dims[], int * newcomm);
int MPI_Cart_map(int comm, int ndims, int const dims[], int const periods[], int * newrank);
int MPI_Graph_map(int comm, int nnodes, int const indx[], int const edges[], int * newrank);
int MPI_Get_processor_name(char * name, int * resultlen);
int MPI_Get_version(int * version, int * subversion);
int MPI_Get_library_version(char * version, int * resultlen);
int MPI_Errhandler_create(void (* function)(int * , int * , ...), int * errhandler);
int MPI_Errhandler_set(int comm, int errhandler);
int MPI_Errhandler_get(int comm, int * errhandler);
int MPI_Errhandler_free(int * errhandler);
int MPI_Error_string(int errorcode, char * string, int * resultlen);
int MPI_Error_class(int errorcode, int * errorclass);
double MPI_Wtime(void);
double MPI_Wtick(void);
int MPI_Init(int * argc, char * * * argv);
int MPI_Finalize(void);
int MPI_Initialized(int * flag);
int MPI_Abort(int comm, int errorcode);
int MPI_Pcontrol(int const level, ...);
int MPIR_Dup_fn(int oldcomm, int keyval, void * extra_state, void * attribute_val_in, void * attribute_val_out, int * flag);
int MPI_Close_port(char const * port_name);
int MPI_Comm_accept(char const * port_name, int info, int root, int comm, int * newcomm);
int MPI_Comm_connect(char const * port_name, int info, int root, int comm, int * newcomm);
int MPI_Comm_disconnect(int * comm);
int MPI_Comm_get_parent(int * parent);
int MPI_Comm_join(int fd, int * intercomm);
int MPI_Comm_spawn(char const * command, char * argv[], int maxprocs, int info, int root, int comm, int * intercomm, int array_of_errcodes[]);
int MPI_Comm_spawn_multiple(int count, char * array_of_commands[], char * * array_of_argv[], int const array_of_maxprocs[], int const array_of_info[], int root, int comm, int * intercomm, int array_of_errcodes[]);
int MPI_Lookup_name(char const * service_name, int info, char * port_name);
int MPI_Open_port(int info, char * port_name);
int MPI_Publish_name(char const * service_name, int info, char const * port_name);
int MPI_Unpublish_name(char const * service_name, int info, char const * port_name);
int MPI_Comm_set_info(int comm, int info);
int MPI_Comm_get_info(int comm, int * info);
int MPI_Accumulate(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win);
int MPI_Get(void * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win);
int MPI_Put(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win);
int MPI_Win_complete(int win);
int MPI_Win_create(void * base, long size, int disp_unit, int info, int comm, int * win);
int MPI_Win_fence(int assert, int win);
int MPI_Win_free(int * win);
int MPI_Win_get_group(int win, int * group);
int MPI_Win_lock(int lock_type, int rank, int assert, int win);
int MPI_Win_post(int group, int assert, int win);
int MPI_Win_start(int group, int assert, int win);
int MPI_Win_test(int win, int * flag);
int MPI_Win_unlock(int rank, int win);
int MPI_Win_wait(int win);
int MPI_Win_allocate(long size, int disp_unit, int info, int comm, void * baseptr, int * win);
int MPI_Win_allocate_shared(long size, int disp_unit, int info, int comm, void * baseptr, int * win);
int MPI_Win_shared_query(int win, int rank, long * size, int * disp_unit, void * baseptr);
int MPI_Win_create_dynamic(int info, int comm, int * win);
int MPI_Win_attach(int win, void * base, long size);
int MPI_Win_detach(int win, void const * base);
int MPI_Win_get_info(int win, int * info_used);
int MPI_Win_set_info(int win, int info);
int MPI_Get_accumulate(void const * origin_addr, int origin_count, int origin_datatype, void * result_addr, int result_count, int result_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win);
int MPI_Fetch_and_op(void const * origin_addr, void * result_addr, int datatype, int target_rank, long target_disp, int op, int win);
int MPI_Compare_and_swap(void const * origin_addr, void const * compare_addr, void * result_addr, int datatype, int target_rank, long target_disp, int win);
int MPI_Rput(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win, int * request);
int MPI_Rget(void * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win, int * request);
int MPI_Raccumulate(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win, int * request);
int MPI_Rget_accumulate(void const * origin_addr, int origin_count, int origin_datatype, void * result_addr, int result_count, int result_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win, int * request);
int MPI_Win_lock_all(int assert, int win);
int MPI_Win_unlock_all(int win);
int MPI_Win_flush(int rank, int win);
int MPI_Win_flush_all(int win);
int MPI_Win_flush_local(int rank, int win);
int MPI_Win_flush_local_all(int win);
int MPI_Win_sync(int win);
int MPI_Add_error_class(int * errorclass);
int MPI_Add_error_code(int errorclass, int * errorcode);
int MPI_Add_error_string(int errorcode, char const * string);
int MPI_Comm_call_errhandler(int comm, int errorcode);
int MPI_Comm_create_keyval(int (* comm_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* comm_delete_attr_fn)(int, int, void * , void * ), int * comm_keyval, void * extra_state);
int MPI_Comm_delete_attr(int comm, int comm_keyval);
int MPI_Comm_free_keyval(int * comm_keyval);
int MPI_Comm_get_attr(int comm, int comm_keyval, void * attribute_val, int * flag);
int MPI_Comm_get_name(int comm, char * comm_name, int * resultlen);
int MPI_Comm_set_attr(int comm, int comm_keyval, void * attribute_val);
int MPI_Comm_set_name(int comm, char const * comm_name);
int MPI_File_call_errhandler(struct ADIOI_FileD * fh, int errorcode);
int MPI_Grequest_complete(int request);
int MPI_Grequest_start(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), void * extra_state, int * request);
int MPI_Init_thread(int * argc, char * * * argv, int required, int * provided);
int MPI_Is_thread_main(int * flag);
int MPI_Query_thread(int * provided);
int MPI_Status_set_cancelled(struct MPI_Status * status, int flag);
int MPI_Status_set_elements(struct MPI_Status * status, int datatype, int count);
int MPI_Type_create_keyval(int (* type_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* type_delete_attr_fn)(int, int, void * , void * ), int * type_keyval, void * extra_state);
int MPI_Type_delete_attr(int datatype, int type_keyval);
int MPI_Type_dup(int oldtype, int * newtype);
int MPI_Type_free_keyval(int * type_keyval);
int MPI_Type_get_attr(int datatype, int type_keyval, void * attribute_val, int * flag);
int MPI_Type_get_contents(int datatype, int max_integers, int max_addresses, int max_datatypes, int array_of_integers[], long array_of_addresses[], int array_of_datatypes[]);
int MPI_Type_get_envelope(int datatype, int * num_integers, int * num_addresses, int * num_datatypes, int * combiner);
int MPI_Type_get_name(int datatype, char * type_name, int * resultlen);
int MPI_Type_set_attr(int datatype, int type_keyval, void * attribute_val);
int MPI_Type_set_name(int datatype, char const * type_name);
int MPI_Type_match_size(int typeclass, int size, int * datatype);
int MPI_Win_call_errhandler(int win, int errorcode);
int MPI_Win_create_keyval(int (* win_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* win_delete_attr_fn)(int, int, void * , void * ), int * win_keyval, void * extra_state);
int MPI_Win_delete_attr(int win, int win_keyval);
int MPI_Win_free_keyval(int * win_keyval);
int MPI_Win_get_attr(int win, int win_keyval, void * attribute_val, int * flag);
int MPI_Win_get_name(int win, char * win_name, int * resultlen);
int MPI_Win_set_attr(int win, int win_keyval, void * attribute_val);
int MPI_Win_set_name(int win, char const * win_name);
int MPI_Alloc_mem(long size, int info, void * baseptr);
int MPI_Comm_create_errhandler(void (* comm_errhandler_fn)(int * , int * , ...), int * errhandler);
int MPI_Comm_get_errhandler(int comm, int * errhandler);
int MPI_Comm_set_errhandler(int comm, int errhandler);
int MPI_File_create_errhandler(void (* file_errhandler_fn)(struct ADIOI_FileD * * , int * , ...), int * errhandler);
int MPI_File_get_errhandler(struct ADIOI_FileD * file, int * errhandler);
int MPI_File_set_errhandler(struct ADIOI_FileD * file, int errhandler);
int MPI_Finalized(int * flag);
int MPI_Free_mem(void * base);
int MPI_Get_address(void const * location, long * address);
int MPI_Info_create(int * info);
int MPI_Info_delete(int info, char const * key);
int MPI_Info_dup(int info, int * newinfo);
int MPI_Info_free(int * info);
int MPI_Info_get(int info, char const * key, int valuelen, char * value, int * flag);
int MPI_Info_get_nkeys(int info, int * nkeys);
int MPI_Info_get_nthkey(int info, int n, char * key);
int MPI_Info_get_valuelen(int info, char const * key, int * valuelen, int * flag);
int MPI_Info_set(int info, char const * key, char const * value);
int MPI_Pack_external(char const datarep[], void const * inbuf, int incount, int datatype, void * outbuf, long outsize, long * position);
int MPI_Pack_external_size(char const datarep[], int incount, int datatype, long * size);
int MPI_Request_get_status(int request, int * flag, struct MPI_Status * status);
int MPI_Status_c2f(struct MPI_Status const * c_status, int * f_status);
int MPI_Status_f2c(int const * f_status, struct MPI_Status * c_status);
int MPI_Type_create_darray(int size, int rank, int ndims, int const array_of_gsizes[], int const array_of_distribs[], int const array_of_dargs[], int const array_of_psizes[], int order, int oldtype, int * newtype);
int MPI_Type_create_hindexed(int count, int const array_of_blocklengths[], long const array_of_displacements[], int oldtype, int * newtype);
int MPI_Type_create_hvector(int count, int blocklength, long stride, int oldtype, int * newtype);
int MPI_Type_create_indexed_block(int count, int blocklength, int const array_of_displacements[], int oldtype, int * newtype);
int MPI_Type_create_hindexed_block(int count, int blocklength, long const array_of_displacements[], int oldtype, int * newtype);
int MPI_Type_create_resized(int oldtype, long lb, long extent, int * newtype);
int MPI_Type_create_struct(int count, int const array_of_blocklengths[], long const array_of_displacements[], int const array_of_types[], int * newtype);
int MPI_Type_create_subarray(int ndims, int const array_of_sizes[], int const array_of_subsizes[], int const array_of_starts[], int order, int oldtype, int * newtype);
int MPI_Type_get_extent(int datatype, long * lb, long * extent);
int MPI_Type_get_true_extent(int datatype, long * true_lb, long * true_extent);
int MPI_Unpack_external(char const datarep[], void const * inbuf, long insize, long * position, void * outbuf, int outcount, int datatype);
int MPI_Win_create_errhandler(void (* win_errhandler_fn)(int * , int * , ...), int * errhandler);
int MPI_Win_get_errhandler(int win, int * errhandler);
int MPI_Win_set_errhandler(int win, int errhandler);
int MPI_Type_create_f90_integer(int range, int * newtype);
int MPI_Type_create_f90_real(int precision, int range, int * newtype);
int MPI_Type_create_f90_complex(int precision, int range, int * newtype);
int MPI_Reduce_local(void const * inbuf, void * inoutbuf, int count, int datatype, int op);
int MPI_Op_commutative(int op, int * commute);
int MPI_Reduce_scatter_block(void const * sendbuf, void * recvbuf, int recvcount, int datatype, int op, int comm);
int MPI_Dist_graph_create_adjacent(int comm_old, int indegree, int const sources[], int const sourceweights[], int outdegree, int const destinations[], int const destweights[], int info, int reorder, int * comm_dist_graph);
int MPI_Dist_graph_create(int comm_old, int n, int const sources[], int const degrees[], int const destinations[], int const weights[], int info, int reorder, int * comm_dist_graph);
int MPI_Dist_graph_neighbors_count(int comm, int * indegree, int * outdegree, int * weighted);
int MPI_Dist_graph_neighbors(int comm, int maxindegree, int sources[], int sourceweights[], int maxoutdegree, int destinations[], int destweights[]);
int MPI_Improbe(int source, int tag, int comm, int * flag, int * message, struct MPI_Status * status);
int MPI_Imrecv(void * buf, int count, int datatype, int * message, int * request);
int MPI_Mprobe(int source, int tag, int comm, int * message, struct MPI_Status * status);
int MPI_Mrecv(void * buf, int count, int datatype, int * message, struct MPI_Status * status);
int MPI_Comm_idup(int comm, int * newcomm, int * request);
int MPI_Ibarrier(int comm, int * request);
int MPI_Ibcast(void * buffer, int count, int datatype, int root, int comm, int * request);
int MPI_Igather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int MPI_Igatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int root, int comm, int * request);
int MPI_Iscatter(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int MPI_Iscatterv(void const * sendbuf, int const sendcounts[], int const displs[], int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int MPI_Iallgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int MPI_Iallgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm, int * request);
int MPI_Ialltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int MPI_Ialltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm, int * request);
int MPI_Ialltoallw(void const * sendbuf, int const sendcounts[], int const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], int const rdispls[], int const recvtypes[], int comm, int * request);
int MPI_Ireduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int root, int comm, int * request);
int MPI_Iallreduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int MPI_Ireduce_scatter(void const * sendbuf, void * recvbuf, int const recvcounts[], int datatype, int op, int comm, int * request);
int MPI_Ireduce_scatter_block(void const * sendbuf, void * recvbuf, int recvcount, int datatype, int op, int comm, int * request);
int MPI_Iscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int MPI_Iexscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int MPI_Ineighbor_allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int MPI_Ineighbor_allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm, int * request);
int MPI_Ineighbor_alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int MPI_Ineighbor_alltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm, int * request);
int MPI_Ineighbor_alltoallw(void const * sendbuf, int const sendcounts[], long const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], long const rdispls[], int const recvtypes[], int comm, int * request);
int MPI_Neighbor_allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int MPI_Neighbor_allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm);
int MPI_Neighbor_alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int MPI_Neighbor_alltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm);
int MPI_Neighbor_alltoallw(void const * sendbuf, int const sendcounts[], long const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], long const rdispls[], int const recvtypes[], int comm);
int MPI_Comm_split_type(int comm, int split_type, int key, int info, int * newcomm);
int MPI_Get_elements_x(struct MPI_Status const * status, int datatype, long long * count);
int MPI_Status_set_elements_x(struct MPI_Status * status, int datatype, long long count);
int MPI_Type_get_extent_x(int datatype, long long * lb, long long * extent);
int MPI_Type_get_true_extent_x(int datatype, long long * lb, long long * extent);
int MPI_Type_size_x(int datatype, long long * size);
int MPI_Comm_create_group(int comm, int group, int tag, int * newcomm);
int MPIX_Comm_group_failed(int comm, int * failed_group);
int MPIX_Comm_remote_group_failed(int comm, int * failed_group);
int MPIX_Comm_reenable_anysource(int comm, int * failed_group);
int MPI_T_init_thread(int required, int * provided);
int MPI_T_finalize(void);
int MPI_T_enum_get_info(struct MPIR_T_enum_s * enumtype, int * num, char * name, int * name_len);
int MPI_T_enum_get_item(struct MPIR_T_enum_s * enumtype, int indx, int * value, char * name, int * name_len);
int MPI_T_cvar_get_num(int * num_cvar);
int MPI_T_cvar_get_info(int cvar_index, char * name, int * name_len, int * verbosity, int * datatype, struct MPIR_T_enum_s * * enumtype, char * desc, int * desc_len, int * binding, int * scope);
int MPI_T_cvar_handle_alloc(int cvar_index, void * obj_handle, struct MPIR_T_cvar_handle_s * * handle, int * count);
int MPI_T_cvar_handle_free(struct MPIR_T_cvar_handle_s * * handle);
int MPI_T_cvar_read(struct MPIR_T_cvar_handle_s * handle, void * buf);
int MPI_T_cvar_write(struct MPIR_T_cvar_handle_s * handle, void * buf);
int MPI_T_pvar_get_num(int * num_pvar);
int MPI_T_pvar_get_info(int pvar_index, char * name, int * name_len, int * verbosity, int * var_class, int * datatype, struct MPIR_T_enum_s * * enumtype, char * desc, int * desc_len, int * binding, int * readonly, int * continuous, int * atomic);
int MPI_T_pvar_session_create(struct MPIR_T_pvar_session_s * * session);
int MPI_T_pvar_session_free(struct MPIR_T_pvar_session_s * * session);
int MPI_T_pvar_handle_alloc(struct MPIR_T_pvar_session_s * session, int pvar_index, void * obj_handle, struct MPIR_T_pvar_handle_s * * handle, int * count);
int MPI_T_pvar_handle_free(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * * handle);
int MPI_T_pvar_start(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int MPI_T_pvar_stop(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int MPI_T_pvar_read(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int MPI_T_pvar_write(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int MPI_T_pvar_reset(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int MPI_T_pvar_readreset(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int MPI_T_category_get_num(int * num_cat);
int MPI_T_category_get_info(int cat_index, char * name, int * name_len, char * desc, int * desc_len, int * num_cvars, int * num_pvars, int * num_categories);
int MPI_T_category_get_cvars(int cat_index, int len, int indices[]);
int MPI_T_category_get_pvars(int cat_index, int len, int indices[]);
int MPI_T_category_get_categories(int cat_index, int len, int indices[]);
int MPI_T_category_changed(int * stamp);
int PMPI_Send(void const * buf, int count, int datatype, int dest, int tag, int comm);
int PMPI_Recv(void * buf, int count, int datatype, int source, int tag, int comm, struct MPI_Status * status);
int PMPI_Get_count(struct MPI_Status const * status, int datatype, int * count);
int PMPI_Bsend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int PMPI_Ssend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int PMPI_Rsend(void const * buf, int count, int datatype, int dest, int tag, int comm);
int PMPI_Buffer_attach(void * buffer, int size);
int PMPI_Buffer_detach(void * buffer_addr, int * size);
int PMPI_Isend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Ibsend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Issend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Irsend(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Irecv(void * buf, int count, int datatype, int source, int tag, int comm, int * request);
int PMPI_Wait(int * request, struct MPI_Status * status);
int PMPI_Test(int * request, int * flag, struct MPI_Status * status);
int PMPI_Request_free(int * request);
int PMPI_Waitany(int count, int array_of_requests[], int * indx, struct MPI_Status * status);
int PMPI_Testany(int count, int array_of_requests[], int * indx, int * flag, struct MPI_Status * status);
int PMPI_Waitall(int count, int array_of_requests[], struct MPI_Status array_of_statuses[]);
int PMPI_Testall(int count, int array_of_requests[], int * flag, struct MPI_Status array_of_statuses[]);
int PMPI_Waitsome(int incount, int array_of_requests[], int * outcount, int array_of_indices[], struct MPI_Status array_of_statuses[]);
int PMPI_Testsome(int incount, int array_of_requests[], int * outcount, int array_of_indices[], struct MPI_Status array_of_statuses[]);
int PMPI_Iprobe(int source, int tag, int comm, int * flag, struct MPI_Status * status);
int PMPI_Probe(int source, int tag, int comm, struct MPI_Status * status);
int PMPI_Cancel(int * request);
int PMPI_Test_cancelled(struct MPI_Status const * status, int * flag);
int PMPI_Send_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Bsend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Ssend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Rsend_init(void const * buf, int count, int datatype, int dest, int tag, int comm, int * request);
int PMPI_Recv_init(void * buf, int count, int datatype, int source, int tag, int comm, int * request);
int PMPI_Start(int * request);
int PMPI_Startall(int count, int array_of_requests[]);
int PMPI_Sendrecv(void const * sendbuf, int sendcount, int sendtype, int dest, int sendtag, void * recvbuf, int recvcount, int recvtype, int source, int recvtag, int comm, struct MPI_Status * status);
int PMPI_Sendrecv_replace(void * buf, int count, int datatype, int dest, int sendtag, int source, int recvtag, int comm, struct MPI_Status * status);
int PMPI_Type_contiguous(int count, int oldtype, int * newtype);
int PMPI_Type_vector(int count, int blocklength, int stride, int oldtype, int * newtype);
int PMPI_Type_hvector(int count, int blocklength, long stride, int oldtype, int * newtype);
int PMPI_Type_indexed(int count, int const * array_of_blocklengths, int const * array_of_displacements, int oldtype, int * newtype);
int PMPI_Type_hindexed(int count, int const * array_of_blocklengths, long const * array_of_displacements, int oldtype, int * newtype);
int PMPI_Type_struct(int count, int const * array_of_blocklengths, long const * array_of_displacements, int const * array_of_types, int * newtype);
int PMPI_Address(void const * location, long * address);
int PMPI_Type_extent(int datatype, long * extent);
int PMPI_Type_size(int datatype, int * size);
int PMPI_Type_lb(int datatype, long * displacement);
int PMPI_Type_ub(int datatype, long * displacement);
int PMPI_Type_commit(int * datatype);
int PMPI_Type_free(int * datatype);
int PMPI_Get_elements(struct MPI_Status const * status, int datatype, int * count);
int PMPI_Pack(void const * inbuf, int incount, int datatype, void * outbuf, int outsize, int * position, int comm);
int PMPI_Unpack(void const * inbuf, int insize, int * position, void * outbuf, int outcount, int datatype, int comm);
int PMPI_Pack_size(int incount, int datatype, int comm, int * size);
int PMPI_Barrier(int comm);
int PMPI_Bcast(void * buffer, int count, int datatype, int root, int comm);
int PMPI_Gather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int PMPI_Gatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const * recvcounts, int const * displs, int recvtype, int root, int comm);
int PMPI_Scatter(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int PMPI_Scatterv(void const * sendbuf, int const * sendcounts, int const * displs, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm);
int PMPI_Allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int PMPI_Allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const * recvcounts, int const * displs, int recvtype, int comm);
int PMPI_Alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int PMPI_Alltoallv(void const * sendbuf, int const * sendcounts, int const * sdispls, int sendtype, void * recvbuf, int const * recvcounts, int const * rdispls, int recvtype, int comm);
int PMPI_Alltoallw(void const * sendbuf, int const sendcounts[], int const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], int const rdispls[], int const recvtypes[], int comm);
int PMPI_Exscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int PMPI_Reduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int root, int comm);
int PMPI_Op_create(void (* user_fn)(void * , void * , int * , int * ), int commute, int * op);
int PMPI_Op_free(int * op);
int PMPI_Allreduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int PMPI_Reduce_scatter(void const * sendbuf, void * recvbuf, int const recvcounts[], int datatype, int op, int comm);
int PMPI_Scan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm);
int PMPI_Group_size(int group, int * size);
int PMPI_Group_rank(int group, int * rank);
int PMPI_Group_translate_ranks(int group1, int n, int const ranks1[], int group2, int ranks2[]);
int PMPI_Group_compare(int group1, int group2, int * result);
int PMPI_Comm_group(int comm, int * group);
int PMPI_Group_union(int group1, int group2, int * newgroup);
int PMPI_Group_intersection(int group1, int group2, int * newgroup);
int PMPI_Group_difference(int group1, int group2, int * newgroup);
int PMPI_Group_incl(int group, int n, int const ranks[], int * newgroup);
int PMPI_Group_excl(int group, int n, int const ranks[], int * newgroup);
int PMPI_Group_range_incl(int group, int n, int ranges[][3], int * newgroup);
int PMPI_Group_range_excl(int group, int n, int ranges[][3], int * newgroup);
int PMPI_Group_free(int * group);
int PMPI_Comm_size(int comm, int * size);
int PMPI_Comm_rank(int comm, int * rank);
int PMPI_Comm_compare(int comm1, int comm2, int * result);
int PMPI_Comm_dup(int comm, int * newcomm);
int PMPI_Comm_dup_with_info(int comm, int info, int * newcomm);
int PMPI_Comm_create(int comm, int group, int * newcomm);
int PMPI_Comm_split(int comm, int color, int key, int * newcomm);
int PMPI_Comm_free(int * comm);
int PMPI_Comm_test_inter(int comm, int * flag);
int PMPI_Comm_remote_size(int comm, int * size);
int PMPI_Comm_remote_group(int comm, int * group);
int PMPI_Intercomm_create(int local_comm, int local_leader, int peer_comm, int remote_leader, int tag, int * newintercomm);
int PMPI_Intercomm_merge(int intercomm, int high, int * newintracomm);
int PMPI_Keyval_create(int (* copy_fn)(int, int, void * , void * , void * , int * ), int (* delete_fn)(int, int, void * , void * ), int * keyval, void * extra_state);
int PMPI_Keyval_free(int * keyval);
int PMPI_Attr_put(int comm, int keyval, void * attribute_val);
int PMPI_Attr_get(int comm, int keyval, void * attribute_val, int * flag);
int PMPI_Attr_delete(int comm, int keyval);
int PMPI_Topo_test(int comm, int * status);
int PMPI_Cart_create(int comm_old, int ndims, int const dims[], int const periods[], int reorder, int * comm_cart);
int PMPI_Dims_create(int nnodes, int ndims, int dims[]);
int PMPI_Graph_create(int comm_old, int nnodes, int const indx[], int const edges[], int reorder, int * comm_graph);
int PMPI_Graphdims_get(int comm, int * nnodes, int * nedges);
int PMPI_Graph_get(int comm, int maxindex, int maxedges, int indx[], int edges[]);
int PMPI_Cartdim_get(int comm, int * ndims);
int PMPI_Cart_get(int comm, int maxdims, int dims[], int periods[], int coords[]);
int PMPI_Cart_rank(int comm, int const coords[], int * rank);
int PMPI_Cart_coords(int comm, int rank, int maxdims, int coords[]);
int PMPI_Graph_neighbors_count(int comm, int rank, int * nneighbors);
int PMPI_Graph_neighbors(int comm, int rank, int maxneighbors, int neighbors[]);
int PMPI_Cart_shift(int comm, int direction, int disp, int * rank_source, int * rank_dest);
int PMPI_Cart_sub(int comm, int const remain_dims[], int * newcomm);
int PMPI_Cart_map(int comm, int ndims, int const dims[], int const periods[], int * newrank);
int PMPI_Graph_map(int comm, int nnodes, int const indx[], int const edges[], int * newrank);
int PMPI_Get_processor_name(char * name, int * resultlen);
int PMPI_Get_version(int * version, int * subversion);
int PMPI_Get_library_version(char * version, int * resultlen);
int PMPI_Errhandler_create(void (* function)(int * , int * , ...), int * errhandler);
int PMPI_Errhandler_set(int comm, int errhandler);
int PMPI_Errhandler_get(int comm, int * errhandler);
int PMPI_Errhandler_free(int * errhandler);
int PMPI_Error_string(int errorcode, char * string, int * resultlen);
int PMPI_Error_class(int errorcode, int * errorclass);
double PMPI_Wtime(void);
double PMPI_Wtick(void);
int PMPI_Init(int * argc, char * * * argv);
int PMPI_Finalize(void);
int PMPI_Initialized(int * flag);
int PMPI_Abort(int comm, int errorcode);
int PMPI_Pcontrol(int const level, ...);
int PMPI_Close_port(char const * port_name);
int PMPI_Comm_accept(char const * port_name, int info, int root, int comm, int * newcomm);
int PMPI_Comm_connect(char const * port_name, int info, int root, int comm, int * newcomm);
int PMPI_Comm_disconnect(int * comm);
int PMPI_Comm_get_parent(int * parent);
int PMPI_Comm_join(int fd, int * intercomm);
int PMPI_Comm_spawn(char const * command, char * argv[], int maxprocs, int info, int root, int comm, int * intercomm, int array_of_errcodes[]);
int PMPI_Comm_spawn_multiple(int count, char * array_of_commands[], char * * array_of_argv[], int const array_of_maxprocs[], int const array_of_info[], int root, int comm, int * intercomm, int array_of_errcodes[]);
int PMPI_Lookup_name(char const * service_name, int info, char * port_name);
int PMPI_Open_port(int info, char * port_name);
int PMPI_Publish_name(char const * service_name, int info, char const * port_name);
int PMPI_Unpublish_name(char const * service_name, int info, char const * port_name);
int PMPI_Comm_set_info(int comm, int info);
int PMPI_Comm_get_info(int comm, int * info);
int PMPI_Accumulate(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win);
int PMPI_Get(void * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win);
int PMPI_Put(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win);
int PMPI_Win_complete(int win);
int PMPI_Win_create(void * base, long size, int disp_unit, int info, int comm, int * win);
int PMPI_Win_fence(int assert, int win);
int PMPI_Win_free(int * win);
int PMPI_Win_get_group(int win, int * group);
int PMPI_Win_lock(int lock_type, int rank, int assert, int win);
int PMPI_Win_post(int group, int assert, int win);
int PMPI_Win_start(int group, int assert, int win);
int PMPI_Win_test(int win, int * flag);
int PMPI_Win_unlock(int rank, int win);
int PMPI_Win_wait(int win);
int PMPI_Win_allocate(long size, int disp_unit, int info, int comm, void * baseptr, int * win);
int PMPI_Win_allocate_shared(long size, int disp_unit, int info, int comm, void * baseptr, int * win);
int PMPI_Win_shared_query(int win, int rank, long * size, int * disp_unit, void * baseptr);
int PMPI_Win_create_dynamic(int info, int comm, int * win);
int PMPI_Win_attach(int win, void * base, long size);
int PMPI_Win_detach(int win, void const * base);
int PMPI_Win_get_info(int win, int * info_used);
int PMPI_Win_set_info(int win, int info);
int PMPI_Get_accumulate(void const * origin_addr, int origin_count, int origin_datatype, void * result_addr, int result_count, int result_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win);
int PMPI_Fetch_and_op(void const * origin_addr, void * result_addr, int datatype, int target_rank, long target_disp, int op, int win);
int PMPI_Compare_and_swap(void const * origin_addr, void const * compare_addr, void * result_addr, int datatype, int target_rank, long target_disp, int win);
int PMPI_Rput(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win, int * request);
int PMPI_Rget(void * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int win, int * request);
int PMPI_Raccumulate(void const * origin_addr, int origin_count, int origin_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win, int * request);
int PMPI_Rget_accumulate(void const * origin_addr, int origin_count, int origin_datatype, void * result_addr, int result_count, int result_datatype, int target_rank, long target_disp, int target_count, int target_datatype, int op, int win, int * request);
int PMPI_Win_lock_all(int assert, int win);
int PMPI_Win_unlock_all(int win);
int PMPI_Win_flush(int rank, int win);
int PMPI_Win_flush_all(int win);
int PMPI_Win_flush_local(int rank, int win);
int PMPI_Win_flush_local_all(int win);
int PMPI_Win_sync(int win);
int PMPI_Add_error_class(int * errorclass);
int PMPI_Add_error_code(int errorclass, int * errorcode);
int PMPI_Add_error_string(int errorcode, char const * string);
int PMPI_Comm_call_errhandler(int comm, int errorcode);
int PMPI_Comm_create_keyval(int (* comm_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* comm_delete_attr_fn)(int, int, void * , void * ), int * comm_keyval, void * extra_state);
int PMPI_Comm_delete_attr(int comm, int comm_keyval);
int PMPI_Comm_free_keyval(int * comm_keyval);
int PMPI_Comm_get_attr(int comm, int comm_keyval, void * attribute_val, int * flag);
int PMPI_Comm_get_name(int comm, char * comm_name, int * resultlen);
int PMPI_Comm_set_attr(int comm, int comm_keyval, void * attribute_val);
int PMPI_Comm_set_name(int comm, char const * comm_name);
int PMPI_File_call_errhandler(struct ADIOI_FileD * fh, int errorcode);
int PMPI_Grequest_complete(int request);
int PMPI_Grequest_start(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), void * extra_state, int * request);
int PMPI_Init_thread(int * argc, char * * * argv, int required, int * provided);
int PMPI_Is_thread_main(int * flag);
int PMPI_Query_thread(int * provided);
int PMPI_Status_set_cancelled(struct MPI_Status * status, int flag);
int PMPI_Status_set_elements(struct MPI_Status * status, int datatype, int count);
int PMPI_Type_create_keyval(int (* type_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* type_delete_attr_fn)(int, int, void * , void * ), int * type_keyval, void * extra_state);
int PMPI_Type_delete_attr(int datatype, int type_keyval);
int PMPI_Type_dup(int oldtype, int * newtype);
int PMPI_Type_free_keyval(int * type_keyval);
int PMPI_Type_get_attr(int datatype, int type_keyval, void * attribute_val, int * flag);
int PMPI_Type_get_contents(int datatype, int max_integers, int max_addresses, int max_datatypes, int array_of_integers[], long array_of_addresses[], int array_of_datatypes[]);
int PMPI_Type_get_envelope(int datatype, int * num_integers, int * num_addresses, int * num_datatypes, int * combiner);
int PMPI_Type_get_name(int datatype, char * type_name, int * resultlen);
int PMPI_Type_set_attr(int datatype, int type_keyval, void * attribute_val);
int PMPI_Type_set_name(int datatype, char const * type_name);
int PMPI_Type_match_size(int typeclass, int size, int * datatype);
int PMPI_Win_call_errhandler(int win, int errorcode);
int PMPI_Win_create_keyval(int (* win_copy_attr_fn)(int, int, void * , void * , void * , int * ), int (* win_delete_attr_fn)(int, int, void * , void * ), int * win_keyval, void * extra_state);
int PMPI_Win_delete_attr(int win, int win_keyval);
int PMPI_Win_free_keyval(int * win_keyval);
int PMPI_Win_get_attr(int win, int win_keyval, void * attribute_val, int * flag);
int PMPI_Win_get_name(int win, char * win_name, int * resultlen);
int PMPI_Win_set_attr(int win, int win_keyval, void * attribute_val);
int PMPI_Win_set_name(int win, char const * win_name);
int PMPI_Alloc_mem(long size, int info, void * baseptr);
int PMPI_Comm_create_errhandler(void (* comm_errhandler_fn)(int * , int * , ...), int * errhandler);
int PMPI_Comm_get_errhandler(int comm, int * errhandler);
int PMPI_Comm_set_errhandler(int comm, int errhandler);
int PMPI_File_create_errhandler(void (* file_errhandler_fn)(struct ADIOI_FileD * * , int * , ...), int * errhandler);
int PMPI_File_get_errhandler(struct ADIOI_FileD * file, int * errhandler);
int PMPI_File_set_errhandler(struct ADIOI_FileD * file, int errhandler);
int PMPI_Finalized(int * flag);
int PMPI_Free_mem(void * base);
int PMPI_Get_address(void const * location, long * address);
int PMPI_Info_create(int * info);
int PMPI_Info_delete(int info, char const * key);
int PMPI_Info_dup(int info, int * newinfo);
int PMPI_Info_free(int * info);
int PMPI_Info_get(int info, char const * key, int valuelen, char * value, int * flag);
int PMPI_Info_get_nkeys(int info, int * nkeys);
int PMPI_Info_get_nthkey(int info, int n, char * key);
int PMPI_Info_get_valuelen(int info, char const * key, int * valuelen, int * flag);
int PMPI_Info_set(int info, char const * key, char const * value);
int PMPI_Pack_external(char const datarep[], void const * inbuf, int incount, int datatype, void * outbuf, long outsize, long * position);
int PMPI_Pack_external_size(char const datarep[], int incount, int datatype, long * size);
int PMPI_Request_get_status(int request, int * flag, struct MPI_Status * status);
int PMPI_Status_c2f(struct MPI_Status const * c_status, int * f_status);
int PMPI_Status_f2c(int const * f_status, struct MPI_Status * c_status);
int PMPI_Type_create_darray(int size, int rank, int ndims, int const array_of_gsizes[], int const array_of_distribs[], int const array_of_dargs[], int const array_of_psizes[], int order, int oldtype, int * newtype);
int PMPI_Type_create_hindexed(int count, int const array_of_blocklengths[], long const array_of_displacements[], int oldtype, int * newtype);
int PMPI_Type_create_hvector(int count, int blocklength, long stride, int oldtype, int * newtype);
int PMPI_Type_create_indexed_block(int count, int blocklength, int const array_of_displacements[], int oldtype, int * newtype);
int PMPI_Type_create_hindexed_block(int count, int blocklength, long const array_of_displacements[], int oldtype, int * newtype);
int PMPI_Type_create_resized(int oldtype, long lb, long extent, int * newtype);
int PMPI_Type_create_struct(int count, int const array_of_blocklengths[], long const array_of_displacements[], int const array_of_types[], int * newtype);
int PMPI_Type_create_subarray(int ndims, int const array_of_sizes[], int const array_of_subsizes[], int const array_of_starts[], int order, int oldtype, int * newtype);
int PMPI_Type_get_extent(int datatype, long * lb, long * extent);
int PMPI_Type_get_true_extent(int datatype, long * true_lb, long * true_extent);
int PMPI_Unpack_external(char const datarep[], void const * inbuf, long insize, long * position, void * outbuf, int outcount, int datatype);
int PMPI_Win_create_errhandler(void (* win_errhandler_fn)(int * , int * , ...), int * errhandler);
int PMPI_Win_get_errhandler(int win, int * errhandler);
int PMPI_Win_set_errhandler(int win, int errhandler);
int PMPI_Type_create_f90_integer(int r, int * newtype);
int PMPI_Type_create_f90_real(int p, int r, int * newtype);
int PMPI_Type_create_f90_complex(int p, int r, int * newtype);
int PMPI_Reduce_local(void const * inbuf, void * inoutbuf, int count, int datatype, int op);
int PMPI_Op_commutative(int op, int * commute);
int PMPI_Reduce_scatter_block(void const * sendbuf, void * recvbuf, int recvcount, int datatype, int op, int comm);
int PMPI_Dist_graph_create_adjacent(int comm_old, int indegree, int const sources[], int const sourceweights[], int outdegree, int const destinations[], int const destweights[], int info, int reorder, int * comm_dist_graph);
int PMPI_Dist_graph_create(int comm_old, int n, int const sources[], int const degrees[], int const destinations[], int const weights[], int info, int reorder, int * comm_dist_graph);
int PMPI_Dist_graph_neighbors_count(int comm, int * indegree, int * outdegree, int * weighted);
int PMPI_Dist_graph_neighbors(int comm, int maxindegree, int sources[], int sourceweights[], int maxoutdegree, int destinations[], int destweights[]);
int PMPI_Improbe(int source, int tag, int comm, int * flag, int * message, struct MPI_Status * status);
int PMPI_Imrecv(void * buf, int count, int datatype, int * message, int * request);
int PMPI_Mprobe(int source, int tag, int comm, int * message, struct MPI_Status * status);
int PMPI_Mrecv(void * buf, int count, int datatype, int * message, struct MPI_Status * status);
int PMPI_Comm_idup(int comm, int * newcomm, int * request);
int PMPI_Ibarrier(int comm, int * request);
int PMPI_Ibcast(void * buffer, int count, int datatype, int root, int comm, int * request);
int PMPI_Igather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int PMPI_Igatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int root, int comm, int * request);
int PMPI_Iscatter(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int PMPI_Iscatterv(void const * sendbuf, int const sendcounts[], int const displs[], int sendtype, void * recvbuf, int recvcount, int recvtype, int root, int comm, int * request);
int PMPI_Iallgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int PMPI_Iallgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm, int * request);
int PMPI_Ialltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int PMPI_Ialltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm, int * request);
int PMPI_Ialltoallw(void const * sendbuf, int const sendcounts[], int const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], int const rdispls[], int const recvtypes[], int comm, int * request);
int PMPI_Ireduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int root, int comm, int * request);
int PMPI_Iallreduce(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int PMPI_Ireduce_scatter(void const * sendbuf, void * recvbuf, int const recvcounts[], int datatype, int op, int comm, int * request);
int PMPI_Ireduce_scatter_block(void const * sendbuf, void * recvbuf, int recvcount, int datatype, int op, int comm, int * request);
int PMPI_Iscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int PMPI_Iexscan(void const * sendbuf, void * recvbuf, int count, int datatype, int op, int comm, int * request);
int PMPI_Ineighbor_allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int PMPI_Ineighbor_allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm, int * request);
int PMPI_Ineighbor_alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm, int * request);
int PMPI_Ineighbor_alltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm, int * request);
int PMPI_Ineighbor_alltoallw(void const * sendbuf, int const sendcounts[], long const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], long const rdispls[], int const recvtypes[], int comm, int * request);
int PMPI_Neighbor_allgather(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int PMPI_Neighbor_allgatherv(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int const recvcounts[], int const displs[], int recvtype, int comm);
int PMPI_Neighbor_alltoall(void const * sendbuf, int sendcount, int sendtype, void * recvbuf, int recvcount, int recvtype, int comm);
int PMPI_Neighbor_alltoallv(void const * sendbuf, int const sendcounts[], int const sdispls[], int sendtype, void * recvbuf, int const recvcounts[], int const rdispls[], int recvtype, int comm);
int PMPI_Neighbor_alltoallw(void const * sendbuf, int const sendcounts[], long const sdispls[], int const sendtypes[], void * recvbuf, int const recvcounts[], long const rdispls[], int const recvtypes[], int comm);
int PMPI_Comm_split_type(int comm, int split_type, int key, int info, int * newcomm);
int PMPI_Comm_create_group(int comm, int group, int tag, int * newcomm);
int PMPI_Get_elements_x(struct MPI_Status const * status, int datatype, long long * count);
int PMPI_Status_set_elements_x(struct MPI_Status * status, int datatype, long long count);
int PMPI_Type_get_extent_x(int datatype, long long * lb, long long * extent);
int PMPI_Type_get_true_extent_x(int datatype, long long * lb, long long * extent);
int PMPI_Type_size_x(int datatype, long long * size);
int PMPIX_Comm_group_failed(int comm, int * failed_group);
int PMPIX_Comm_remote_group_failed(int comm, int * failed_group);
int PMPIX_Comm_reenable_anysource(int comm, int * failed_group);
int PMPI_T_init_thread(int required, int * provided);
int PMPI_T_finalize(void);
int PMPI_T_enum_get_info(struct MPIR_T_enum_s * enumtype, int * num, char * name, int * name_len);
int PMPI_T_enum_get_item(struct MPIR_T_enum_s * enumtype, int indx, int * value, char * name, int * name_len);
int PMPI_T_cvar_get_num(int * num_cvar);
int PMPI_T_cvar_get_info(int cvar_index, char * name, int * name_len, int * verbosity, int * datatype, struct MPIR_T_enum_s * * enumtype, char * desc, int * desc_len, int * binding, int * scope);
int PMPI_T_cvar_handle_alloc(int cvar_index, void * obj_handle, struct MPIR_T_cvar_handle_s * * handle, int * count);
int PMPI_T_cvar_handle_free(struct MPIR_T_cvar_handle_s * * handle);
int PMPI_T_cvar_read(struct MPIR_T_cvar_handle_s * handle, void * buf);
int PMPI_T_cvar_write(struct MPIR_T_cvar_handle_s * handle, void * buf);
int PMPI_T_pvar_get_num(int * num_pvar);
int PMPI_T_pvar_get_info(int pvar_index, char * name, int * name_len, int * verbosity, int * var_class, int * datatype, struct MPIR_T_enum_s * * enumtype, char * desc, int * desc_len, int * binding, int * readonly, int * continuous, int * atomic);
int PMPI_T_pvar_session_create(struct MPIR_T_pvar_session_s * * session);
int PMPI_T_pvar_session_free(struct MPIR_T_pvar_session_s * * session);
int PMPI_T_pvar_handle_alloc(struct MPIR_T_pvar_session_s * session, int pvar_index, void * obj_handle, struct MPIR_T_pvar_handle_s * * handle, int * count);
int PMPI_T_pvar_handle_free(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * * handle);
int PMPI_T_pvar_start(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int PMPI_T_pvar_stop(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int PMPI_T_pvar_read(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int PMPI_T_pvar_write(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int PMPI_T_pvar_reset(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle);
int PMPI_T_pvar_readreset(struct MPIR_T_pvar_session_s * session, struct MPIR_T_pvar_handle_s * handle, void * buf);
int PMPI_T_category_get_num(int * num_cat);
int PMPI_T_category_get_info(int cat_index, char * name, int * name_len, char * desc, int * desc_len, int * num_cvars, int * num_pvars, int * num_categories);
int PMPI_T_category_get_cvars(int cat_index, int len, int indices[]);
int PMPI_T_category_get_pvars(int cat_index, int len, int indices[]);
int PMPI_T_category_get_categories(int cat_index, int len, int indices[]);
int PMPI_T_category_changed(int * stamp);
int MPI_File_open(int comm, char const * filename, int amode, int info, struct ADIOI_FileD * * fh);
int MPI_File_close(struct ADIOI_FileD * * fh);
int MPI_File_delete(char const * filename, int info);
int MPI_File_set_size(struct ADIOI_FileD * fh, long long size);
int MPI_File_preallocate(struct ADIOI_FileD * fh, long long size);
int MPI_File_get_size(struct ADIOI_FileD * fh, long long * size);
int MPI_File_get_group(struct ADIOI_FileD * fh, int * group);
int MPI_File_get_amode(struct ADIOI_FileD * fh, int * amode);
int MPI_File_set_info(struct ADIOI_FileD * fh, int info);
int MPI_File_get_info(struct ADIOI_FileD * fh, int * info_used);
int MPI_File_set_view(struct ADIOI_FileD * fh, long long disp, int etype, int filetype, char const * datarep, int info);
int MPI_File_get_view(struct ADIOI_FileD * fh, long long * disp, int * etype, int * filetype, char * datarep);
int MPI_File_read_at(struct ADIOI_FileD * fh, long long offset, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_read_at_all(struct ADIOI_FileD * fh, long long offset, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_at(struct ADIOI_FileD * fh, long long offset, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_at_all(struct ADIOI_FileD * fh, long long offset, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_iread_at(struct ADIOI_FileD * fh, long long offset, void * buf, int count, int datatype, int * request);
int MPI_File_iwrite_at(struct ADIOI_FileD * fh, long long offset, void const * buf, int count, int datatype, int * request);
int MPI_File_read(struct ADIOI_FileD * fh, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_read_all(struct ADIOI_FileD * fh, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_all(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_iread(struct ADIOI_FileD * fh, void * buf, int count, int datatype, int * request);
int MPI_File_iwrite(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, int * request);
int MPI_File_seek(struct ADIOI_FileD * fh, long long offset, int whence);
int MPI_File_get_position(struct ADIOI_FileD * fh, long long * offset);
int MPI_File_get_byte_offset(struct ADIOI_FileD * fh, long long offset, long long * disp);
int MPI_File_read_shared(struct ADIOI_FileD * fh, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_shared(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_iread_shared(struct ADIOI_FileD * fh, void * buf, int count, int datatype, int * request);
int MPI_File_iwrite_shared(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, int * request);
int MPI_File_read_ordered(struct ADIOI_FileD * fh, void * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_write_ordered(struct ADIOI_FileD * fh, void const * buf, int count, int datatype, struct MPI_Status * status);
int MPI_File_seek_shared(struct ADIOI_FileD * fh, long long offset, int whence);
int MPI_File_get_position_shared(struct ADIOI_FileD * fh, long long * offset);
int MPI_File_read_at_all_begin(struct ADIOI_FileD * fh, long long offset, void * buf, int count, int datatype);
int MPI_File_read_at_all_end(struct ADIOI_FileD * fh, void * buf, struct MPI_Status * status);
int MPI_File_write_at_all_begin(struct ADIOI_FileD * fh, long long offset, void const * buf, int count, int datatype);
int MPI_File_write_at_all_end(struct ADIOI_FileD * fh, void const * buf, struct MPI_Status * status);
int MPI_File_read_all_begin(struct ADIOI_FileD * fh, void * buf, int count, int datatype);
int MPI_File_read_all_end(struct ADIOI_FileD * fh, void * buf, struct MPI_Status * status);
int MPI_File_write_all_begin(struct ADIOI_FileD * fh, void const * buf, int count, int datatype);
int MPI_File_write_all_end(struct ADIOI_FileD * fh, void const * buf, struct MPI_Status * status);
int MPI_File_read_ordered_begin(struct ADIOI_FileD * fh, void * buf, int count, int datatype);
int MPI_File_read_ordered_end(struct ADIOI_FileD * fh, void * buf, struct MPI_Status * status);
int MPI_File_write_ordered_begin(struct ADIOI_FileD * fh, void const * buf, int count, int datatype);
int MPI_File_write_ordered_end(struct ADIOI_FileD * fh, void const * buf, struct MPI_Status * status);
int MPI_File_get_type_extent(struct ADIOI_FileD * fh, int datatype, long * extent);
int MPI_Register_datarep(char const * datarep, int (* read_conversion_fn)(void * , int, int, void * , long long, void * ), int (* write_conversion_fn)(void * , int, int, void * , long long, void * ), int (* dtype_file_extent_fn)(int, long * , void * ), void * extra_state);
int MPI_File_set_atomicity(struct ADIOI_FileD * fh, int flag);
int MPI_File_get_atomicity(struct ADIOI_FileD * fh, int * flag);
int MPI_File_sync(struct ADIOI_FileD * fh);
struct ADIOI_FileD * MPI_File_f2c(int file);
int MPI_File_c2f(struct ADIOI_FileD * file);
int PMPI_File_open(int, char const * , int, int, struct ADIOI_FileD * * );
int PMPI_File_close(struct ADIOI_FileD * * );
int PMPI_File_delete(char const * , int);
int PMPI_File_set_size(struct ADIOI_FileD * , long long);
int PMPI_File_preallocate(struct ADIOI_FileD * , long long);
int PMPI_File_get_size(struct ADIOI_FileD * , long long * );
int PMPI_File_get_group(struct ADIOI_FileD * , int * );
int PMPI_File_get_amode(struct ADIOI_FileD * , int * );
int PMPI_File_set_info(struct ADIOI_FileD * , int);
int PMPI_File_get_info(struct ADIOI_FileD * , int * );
int PMPI_File_set_view(struct ADIOI_FileD * , long long, int, int, char const * , int);
int PMPI_File_get_view(struct ADIOI_FileD * , long long * , int * , int * , char * );
int PMPI_File_read_at(struct ADIOI_FileD * , long long, void * , int, int, struct MPI_Status * );
int PMPI_File_read_at_all(struct ADIOI_FileD * , long long, void * , int, int, struct MPI_Status * );
int PMPI_File_write_at(struct ADIOI_FileD * , long long, void const * , int, int, struct MPI_Status * );
int PMPI_File_write_at_all(struct ADIOI_FileD * , long long, void const * , int, int, struct MPI_Status * );
int PMPI_File_iread_at(struct ADIOI_FileD * , long long, void * , int, int, int * );
int PMPI_File_iwrite_at(struct ADIOI_FileD * , long long, void const * , int, int, int * );
int PMPI_File_read(struct ADIOI_FileD * , void * , int, int, struct MPI_Status * );
int PMPI_File_read_all(struct ADIOI_FileD * , void * , int, int, struct MPI_Status * );
int PMPI_File_write(struct ADIOI_FileD * , void const * , int, int, struct MPI_Status * );
int PMPI_File_write_all(struct ADIOI_FileD * , void const * , int, int, struct MPI_Status * );
int PMPI_File_iread(struct ADIOI_FileD * , void * , int, int, int * );
int PMPI_File_iwrite(struct ADIOI_FileD * , void const * , int, int, int * );
int PMPI_File_seek(struct ADIOI_FileD * , long long, int);
int PMPI_File_get_position(struct ADIOI_FileD * , long long * );
int PMPI_File_get_byte_offset(struct ADIOI_FileD * , long long, long long * );
int PMPI_File_read_shared(struct ADIOI_FileD * , void * , int, int, struct MPI_Status * );
int PMPI_File_write_shared(struct ADIOI_FileD * , void const * , int, int, struct MPI_Status * );
int PMPI_File_iread_shared(struct ADIOI_FileD * , void * , int, int, int * );
int PMPI_File_iwrite_shared(struct ADIOI_FileD * , void const * , int, int, int * );
int PMPI_File_read_ordered(struct ADIOI_FileD * , void * , int, int, struct MPI_Status * );
int PMPI_File_write_ordered(struct ADIOI_FileD * , void const * , int, int, struct MPI_Status * );
int PMPI_File_seek_shared(struct ADIOI_FileD * , long long, int);
int PMPI_File_get_position_shared(struct ADIOI_FileD * , long long * );
int PMPI_File_read_at_all_begin(struct ADIOI_FileD * , long long, void * , int, int);
int PMPI_File_read_at_all_end(struct ADIOI_FileD * , void * , struct MPI_Status * );
int PMPI_File_write_at_all_begin(struct ADIOI_FileD * , long long, void const * , int, int);
int PMPI_File_write_at_all_end(struct ADIOI_FileD * , void const * , struct MPI_Status * );
int PMPI_File_read_all_begin(struct ADIOI_FileD * , void * , int, int);
int PMPI_File_read_all_end(struct ADIOI_FileD * , void * , struct MPI_Status * );
int PMPI_File_write_all_begin(struct ADIOI_FileD * , void const * , int, int);
int PMPI_File_write_all_end(struct ADIOI_FileD * , void const * , struct MPI_Status * );
int PMPI_File_read_ordered_begin(struct ADIOI_FileD * , void * , int, int);
int PMPI_File_read_ordered_end(struct ADIOI_FileD * , void * , struct MPI_Status * );
int PMPI_File_write_ordered_begin(struct ADIOI_FileD * , void const * , int, int);
int PMPI_File_write_ordered_end(struct ADIOI_FileD * , void const * , struct MPI_Status * );
int PMPI_File_get_type_extent(struct ADIOI_FileD * , int, long * );
int PMPI_Register_datarep(char const * , int (* )(void * , int, int, void * , long long, void * ), int (* )(void * , int, int, void * , long long, void * ), int (* )(int, long * , void * ), void * );
int PMPI_File_set_atomicity(struct ADIOI_FileD * , int);
int PMPI_File_get_atomicity(struct ADIOI_FileD * , int * );
int PMPI_File_sync(struct ADIOI_FileD * );
struct ADIOI_FileD * PMPI_File_f2c(int);
int PMPI_File_c2f(struct ADIOI_FileD * );
int MPIX_Grequest_class_create(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), int (* poll_fn)(void * , struct MPI_Status * ), int (* wait_fn)(int, void * * , double, struct MPI_Status * ), int * greq_class);
int MPIX_Grequest_class_allocate(int greq_class, void * extra_state, int * request);
int MPIX_Grequest_start(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), int (* poll_fn)(void * , struct MPI_Status * ), int (* wait_fn)(int, void * * , double, struct MPI_Status * ), void * extra_state, int * request);
int MPIX_Mutex_create(int count, int comm, struct mpixi_mutex_s * * hdl);
int MPIX_Mutex_free(struct mpixi_mutex_s * * hdl);
int MPIX_Mutex_lock(struct mpixi_mutex_s * hdl, int mutex, int proc);
int MPIX_Mutex_unlock(struct mpixi_mutex_s * hdl, int mutex, int proc);
int PMPIX_Grequest_class_create(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), int (* poll_fn)(void * , struct MPI_Status * ), int (* wait_fn)(int, void * * , double, struct MPI_Status * ), int * greq_class);
int PMPIX_Grequest_class_allocate(int greq_class, void * extra_state, int * request);
int PMPIX_Grequest_start(int (* query_fn)(void * , struct MPI_Status * ), int (* free_fn)(void * ), int (* cancel_fn)(void * , int), int (* poll_fn)(void * , struct MPI_Status * ), int (* wait_fn)(int, void * * , double, struct MPI_Status * ), void * extra_state, int * request);
int PMPIX_Mutex_create(int count, int comm, struct mpixi_mutex_s * * hdl);
int PMPIX_Mutex_free(struct mpixi_mutex_s * * hdl);
int PMPIX_Mutex_lock(struct mpixi_mutex_s * hdl, int mutex, int proc);
int PMPIX_Mutex_unlock(struct mpixi_mutex_s * hdl, int mutex, int proc);
extern int xmp_get_mpi_comm(void);
extern void xmp_init_mpi(int * argc, char * * * argv);
extern void xmp_finalize_mpi(void);
extern void xmp_init(int * argc, char * * * argv);
extern void xmp_finalize(void);
extern int xmp_num_nodes(void);
extern int xmp_node_num(void);
extern void xmp_barrier(void);
extern int xmp_all_num_nodes(void);
extern int xmp_all_node_num(void);
extern double xmp_wtime(void);
extern double xmp_wtick(void);
extern int xmp_array_ndims(void * d, int * ndims);
extern int xmp_array_lbound(void * d, int dim, int * lbound);
extern int xmp_array_ubound(void * d, int dim, int * ubound);
extern unsigned long xmp_array_type_size(void * d);
extern int xmp_array_gsize(void * d, int dim);
extern int xmp_array_lsize(void * d, int dim, int * lsize);
extern int xmp_array_gcllbound(void * d, int dim);
extern int xmp_array_gclubound(void * d, int dim);
extern int xmp_array_lcllbound(void * d, int dim);
extern int xmp_array_lclubound(void * d, int dim);
extern int xmp_array_gcglbound(void * d, int dim);
extern int xmp_array_gcgubound(void * d, int dim);
extern int xmp_array_laddr(void * d, void * * laddr);
extern int xmp_array_lshadow(void * d, int dim, int * lshadow);
extern int xmp_array_ushadow(void * d, int dim, int * ushadow);
extern int xmp_array_owner(void * d, int ndims, int index[], int dim);
extern int xmp_array_lead_dim(void * d, int size[]);
extern int xmp_array_gtol(void * d, int g_idx[], int lidx[]);
extern int xmp_align_axis(void * d, int dim, int * axis);
extern int xmp_align_offset(void * d, int dim, int * offset);
extern int xmp_align_format(void * d, int dim);
extern int xmp_align_size(void * d, int dim);
extern int xmp_align_replicated(void * d, int dim, int * replicated);
extern int xmp_align_template(void * d, void * * dt);
extern int xmp_template_fixed(void * d, int * fixed);
extern int xmp_template_ndims(void * d, int * ndims);
extern int xmp_template_lbound(void * d, int dim, int * lbound);
extern int xmp_template_ubound(void * d, int dim, int * ubound);
extern int xmp_template_gsize(void * d, int dim);
extern int xmp_template_lsize(void * d, int dim);
extern int xmp_dist_format(void * d, int dim, int * format);
extern int xmp_dist_blocksize(void * d, int dim, int * blocksize);
extern int xmp_dist_stride(void * d, int dim);
extern int xmp_dist_nodes(void * d, void * * dn);
extern int xmp_dist_axis(void * d, int dim, int * axis);
extern int xmp_dist_gblockmap(void * d, int dim, int * map);
extern int xmp_nodes_ndims(void * d, int * ndims);
extern int xmp_nodes_index(void * d, int dim, int * index);
extern int xmp_nodes_size(void * d, int dim, int * size);
extern int xmp_nodes_rank(void * d, int * rank);
extern int xmp_nodes_comm(void * d, void * * comm);
extern int xmp_nodes_equiv(void * d, void * * dn, int lb[], int ub[], int st[]);
extern void xmp_sched_template_index(int * local_start_index, int * local_end_index, int const global_start_index, int const global_end_index, int const step, void * const template, int const template_dim);
extern void xmp_sync_memory(int const * status);
extern void xmp_sync_all(int const * status);
extern void xmp_sync_image(int image, int * status);
extern void xmp_sync_images(int num, int * image_set, int * status);
extern void xmp_sync_images_all(int * status);
extern void * xmp_malloc(void * d, int size);
extern void xmp_free(void * d);
extern void xmp_exit(int status);
/* array 'u' is removed by XcalableMP align directive */
/* array 'uu' is removed by XcalableMP align directive */
# 17 "lap_1d.c"
int rank;
# 17 "lap_1d.c"
int niter;
# 19 "lap_1d.c"
/* ignored Xcode.XMP_PRAGMA */
# 20 "lap_1d.c"
/* ignored Xcode.XMP_PRAGMA */
# 21 "lap_1d.c"
/* ignored Xcode.XMP_PRAGMA */
# 22 "lap_1d.c"
/* ignored Xcode.XMP_PRAGMA */
# 23 "lap_1d.c"
/* ignored Xcode.XMP_PRAGMA */
# 24 "lap_1d.c"
/* ignored Xcode.XMP_PRAGMA */

#define SIZE 4096

void lap_main(void);
double verify();

void __lap_1d_xmpc_module_init_();

int main(int argc, char * argv[])
{
int r;
xmpc_init_all(argc, argv);
__lap_1d_xmpc_module_init_();
r = (xmpc_main(argc, argv));
xmpc_finalize_all(r);
return r;
}
void lap_main(void)
{
{
# 81 "lap_1d.c"
int x;
# 81 "lap_1d.c"
int y;
# 81 "lap_1d.c"
int k;
# 82 "lap_1d.c"
double sum;
# 85 "lap_1d.c"
for(k = (0); k < niter; k++) {
# 86 "lap_1d.c"
if((((k % (niter / (10))) == (0)) && (k != (0))) && (rank == (0))) {
# 87 "lap_1d.c"
fprintf(stderr, "iter = %d\n", k);
}
{
int _XMP_loop_init_x;
int _XMP_loop_cond_x;
int _XMP_loop_step_x;
_XMP_sched_loop_template_BLOCK(1, (SIZE) - (1), 1, &(_XMP_loop_init_x), &(_XMP_loop_cond_x), &(_XMP_loop_step_x), _XMP_DESC_t, 0);
# 91 "lap_1d.c"
for(x = _XMP_loop_init_x; x < _XMP_loop_cond_x; x += _XMP_loop_step_x) {
# 92 "lap_1d.c"
for(y = (1); y < ((SIZE) - (1)); y++) {
# 93 "lap_1d.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_uu, x + (1), y, _XMP_GTOL_acc_uu_0))) = (*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_u, x, y, _XMP_GTOL_acc_u_0)));
}
}
}
_XMP_reflect__(_XMP_DESC_uu);
{
int _XMP_loop_init_x;
int _XMP_loop_cond_x;
int _XMP_loop_step_x;
_XMP_sched_loop_template_BLOCK(1, (SIZE) - (1), 1, &(_XMP_loop_init_x), &(_XMP_loop_cond_x), &(_XMP_loop_step_x), _XMP_DESC_t, 0);
# 99 "lap_1d.c"
for(x = _XMP_loop_init_x; x < _XMP_loop_cond_x; x += _XMP_loop_step_x) {
# 100 "lap_1d.c"
for(y = (1); y < ((SIZE) - (1)); y++) {
# 101 "lap_1d.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_u, x, y, _XMP_GTOL_acc_u_0))) = (((((*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_uu, (x + (1)) - (1), y, _XMP_GTOL_acc_uu_0))) + (*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_uu, (x + (1)) + (1), y, _XMP_GTOL_acc_uu_0)))) + (*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_uu, x + (1), y - (1), _XMP_GTOL_acc_uu_0)))) + (*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_uu, x + (1), y + (1), _XMP_GTOL_acc_uu_0)))) / (4.0));
}
}
}
}
}
}
double verify()
{
{
# 107 "lap_1d.c"
int x;
# 107 "lap_1d.c"
int y;
# 108 "lap_1d.c"
double sum = 0.0;
{
int _XMP_loop_init_x;
int _XMP_loop_cond_x;
int _XMP_loop_step_x;
_XMP_sched_loop_template_BLOCK(1, (SIZE) - (1), 1, &(_XMP_loop_init_x), &(_XMP_loop_cond_x), &(_XMP_loop_step_x), _XMP_DESC_t, 0);
if((_XMP_get_execution_nodes_rank()) != (0)) sum = (0);
# 111 "lap_1d.c"
for(x = _XMP_loop_init_x; x < _XMP_loop_cond_x; x += _XMP_loop_step_x) {
# 112 "lap_1d.c"
for(y = (1); y < ((SIZE) - (1)); y++) {
# 113 "lap_1d.c"
sum += ((*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_uu, x + (1), y, _XMP_GTOL_acc_uu_0))) - (*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_u, x, y, _XMP_GTOL_acc_u_0))));
}
}
_XMP_reduce_CLAUSE(&(sum), 0x000000001ll, 514, 300);
}
# 115 "lap_1d.c"
return sum;
}
}
static int xmpc_main(int argc, char * argv[])
{
{
# 30 "lap_1d.c"
int x;
# 30 "lap_1d.c"
int y;
# 31 "lap_1d.c"
double time;
# 32 "lap_1d.c"
double value;
# 35 "lap_1d.c"
rank = ((xmp_node_num()) - (1));
# 41 "lap_1d.c"
if(argc == (1)) {
# 41 "lap_1d.c"
niter = (100);
}
else {
# 42 "lap_1d.c"
niter = (atoi(argv[1]));
}
# 43 "lap_1d.c"
if(rank == (0)) {
# 44 "lap_1d.c"
fprintf(stderr, "The number of iterations = %d\n", niter);
# 45 "lap_1d.c"
fprintf(stderr, "Matrix Size = %d x %d\n", SIZE, SIZE);
}
{
int _XMP_loop_init_x;
int _XMP_loop_cond_x;
int _XMP_loop_step_x;
_XMP_sched_loop_template_BLOCK(0, SIZE, 1, &(_XMP_loop_init_x), &(_XMP_loop_cond_x), &(_XMP_loop_step_x), _XMP_DESC_t, 0);
# 50 "lap_1d.c"
for(x = _XMP_loop_init_x; x < _XMP_loop_cond_x; x += _XMP_loop_step_x) {
# 51 "lap_1d.c"
for(y = (0); y < (SIZE); y++) {
# 52 "lap_1d.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_u, x, y, _XMP_GTOL_acc_u_0))) = (0.0);
# 52 "lap_1d.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_uu, x + (1), y, _XMP_GTOL_acc_uu_0))) = (0.0);
}
}
}
{
int _XMP_loop_init_x;
int _XMP_loop_cond_x;
int _XMP_loop_step_x;
_XMP_sched_loop_template_BLOCK(1, (SIZE) - (1), 1, &(_XMP_loop_init_x), &(_XMP_loop_cond_x), &(_XMP_loop_step_x), _XMP_DESC_t, 0);
# 57 "lap_1d.c"
for(x = _XMP_loop_init_x; x < _XMP_loop_cond_x; x += _XMP_loop_step_x) {
# 58 "lap_1d.c"
for(y = (1); y < ((SIZE) - (1)); y++) {
# 59 "lap_1d.c"
(*(_XMP_M_GET_ADDR_E_2(_XMP_ADDR_u, x, y, _XMP_GTOL_acc_u_0))) = ((sin((((double)((_XMP_M_LTOG_TEMPLATE_BLOCK(x, 0, ((SIZE) - (1)) + (1), _XMP_NODES_SIZE_p_0, _XMP_NODES_RANK_p_0)) - (1))) / (SIZE)) * (3.14159265358979323846))) + (cos((((double)(y - (1))) / (SIZE)) * (3.14159265358979323846))));
}
}
}
_XMP_barrier_EXEC();
# 62 "lap_1d.c"
time = (xmp_wtime());
# 63 "lap_1d.c"
lap_main();
_XMP_barrier_EXEC();
# 65 "lap_1d.c"
time -= (xmp_wtime());
# 66 "lap_1d.c"
time = (- time);
# 68 "lap_1d.c"
value = (verify());
_XMP_reduce_NODES_ENTIRE(_XMP_DESC_p, &(time), 0x000000001ll, 514, 308);
# 71 "lap_1d.c"
if(rank == (0)) {
# 72 "lap_1d.c"
fprintf(stderr, "time = %.3f sec\n", time);
# 73 "lap_1d.c"
fprintf(stderr, "Per. = %.3f GFlops\n", ((((((((double)(niter)) * ((SIZE) - (2))) * ((SIZE) - (2))) * (4)) / time) / (1000)) / (1000)) / (1000));
# 74 "lap_1d.c"
fprintf(stderr, "Verification = %.3f \n", value);
}
# 77 "lap_1d.c"
return 0;
}
}
extern void __lap_1d_xmpc_module_init_()
{
_XMP_init_nodes_DYNAMIC_GLOBAL(&(_XMP_DESC_p), 1, -1, (int * )(&(_XMP_NODES_SIZE_p_0)), (int * )(&(_XMP_NODES_RANK_p_0)));
_XMP_init_template_FIXED(&(_XMP_DESC_t), 1, (long long)(0), (long long)((SIZE) - (1)));
_XMP_init_template_chunk(_XMP_DESC_t, _XMP_DESC_p);
_XMP_dist_template_BLOCK(_XMP_DESC_t, 0, 0);
_XMP_init_array_desc(&(_XMP_DESC_u), _XMP_DESC_t, 2, 514, sizeof(double), (int)(0x000000400ll), (int)(0x000000400ll));
_XMP_align_array_BLOCK(_XMP_DESC_u, 0, 0, 0, &(_XMP_GTOL_temp0_u_0));
_XMP_align_array_NOT_ALIGNED(_XMP_DESC_u, 1);
_XMP_init_array_comm(_XMP_DESC_u, 0);
_XMP_init_array_nodes(_XMP_DESC_u);
_XMP_init_array_desc(&(_XMP_DESC_uu), _XMP_DESC_t, 2, 514, sizeof(double), (int)(0x000000400ll), (int)(0x000000400ll));
_XMP_align_array_BLOCK(_XMP_DESC_uu, 0, 0, 0, &(_XMP_GTOL_temp0_uu_0));
_XMP_align_array_NOT_ALIGNED(_XMP_DESC_uu, 1);
_XMP_init_array_comm(_XMP_DESC_uu, 0);
_XMP_init_array_nodes(_XMP_DESC_uu);
_XMP_init_shadow(_XMP_DESC_uu, (int)(401), (int)(1), (int)(1), (int)(400));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_u)), _XMP_DESC_u, (unsigned long long * )(&(_XMP_GTOL_acc_u_1)), (unsigned long long * )(&(_XMP_GTOL_acc_u_0)));
_XMP_alloc_array((void * * )(&(_XMP_ADDR_uu)), _XMP_DESC_uu, (unsigned long long * )(&(_XMP_GTOL_acc_uu_1)), (unsigned long long * )(&(_XMP_GTOL_acc_uu_0)));
}
extern void __lap_1d_xmpc_module_finalize_()
{
}
