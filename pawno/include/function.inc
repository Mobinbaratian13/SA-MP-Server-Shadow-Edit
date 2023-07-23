#if not defined function
    #define function%0(%1) forward %0(%1);public %0(%1)
#else
    #error Macro function defined erlier, please undefine or remove the old
#endif