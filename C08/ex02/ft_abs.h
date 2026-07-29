#ifndef FT_ABS_H
# define FT_ABS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

#define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

#endif