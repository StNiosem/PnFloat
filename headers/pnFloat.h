//The actual brain of the thing
//main.c is overrated

// Just the basics you know, 10 HEADERS FOR WHAT?
#include <stdalign.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <standards.h>

// Custom
#include "commonInt.c"

//Current
#define CurrentDisplayWidth = "display.currentWidth"
#define CurrentDisplayHeight = "display.currentHeight"

void InitializeDisplayOutput(){
    printf("Initializing Display Output at %sx%s");
}