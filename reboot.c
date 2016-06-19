/* Reboot.c

   By Michael W. Maher

   Ver 1.0 7/5/91       for MCS 5.1

   This program causes a warm-boot of an IBM-PC.
*/

/****************************** ANSI C Headers *****************************/
#include<stdio.h>
#include<string.h>

/****************************** MSC5.1 Headers *****************************/
#include<bios.h>

/* function prototypes */
void main(int argc, char **argv);

void main(int argc, char **argv)
  {
  union REGS xr;

  if ((argc == 2) && (stricmp(argv[1], "OK") == 0))
    {
    printf("\nPerforming a system warm-boot...");
    int86(0x19, &xr, &xr);
    }
  else
    {
    printf("\nREBOOT.EXE  By Michael W. Maher  7/5/91\n"
	   "This program performs a warm-boot on an IBM-PC system.\n"
	   "usage: REBOOT [OK]\n");
    }
  return;
  }
