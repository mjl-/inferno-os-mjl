/*
 * system- and machine-specific declarations for emu:
 * floating-point save and restore, signal handling primitive, and
 * implementation of the current-process variable `up'.
 */

extern	Proc**	Xup;
#define	up	(*Xup)

typedef	struct	FPU	FPU;

/*
 * This structure must agree with FPsave and FPrestore asm routines
 */
struct FPU
{
	ulong	fcr31;
};

typedef sigjmp_buf osjmpbuf;
#define	ossetjmp(buf)	sigsetjmp(buf, 1)

