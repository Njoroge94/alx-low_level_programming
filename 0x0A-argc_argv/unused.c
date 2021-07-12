#ifdef UNUSED
#elif defined(__GNUC__)
# define UNUSED(argv) UNUSED_ ## argv __attribute__((unused))
#elif defined(__LCLINT__)
# define UNUSED(argv) /*@unused@*/ argv
#else
# define UNUSED(argv) argv
#endif
