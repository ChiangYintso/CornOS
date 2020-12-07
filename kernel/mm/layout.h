#ifndef ARCH_X86_MM_LAYOUT_H
#define ARCH_X86_MM_LAYOUT_H

/* This file contains the definitions for memory management in our OS. */

/* global segment number */
#define SEG_KERNEL_TEXT 1
#define SEG_KERNEL_DATA 2
#define SEG_USER_TEXT 3
#define SEG_USER_DATA 4
#define SEG_TSS 5

/**
 * Global Descriptor Numbers.
 *
 * Segment selector is 16 bit-length.
 * The low 0-1 bits store RPL, which has 0~3 privileges.
 * The 2 bit is Table Indicator, represents whether the selector
 * is in GDT or LDT.
 * The 3-15 bit is the index of segment descriptor. So it should
 * be left shifted by 3.
 */
#define GD_KERNEL_TEXT ((SEG_KERNEL_TEXT) << 3) // kernel text
#define GD_KERNEL_DATA ((SEG_KERNEL_DATA) << 3) // kernel data
#define GD_USER_TEXT ((SEG_USER_TEXT) << 3) // user text
#define GD_USER_DATA ((SEG_USER_DATA) << 3) // user data
#define GD_TSS ((SEG_TSS) << 3) // task segment selector

#define DPL_KERNEL (0)
#define DPL_USER (3)

#define KERNEL_CS ((GD_KTEXT) | DPL_KERNEL)
#define KERNEL_DS ((GD_KDATA) | DPL_KERNEL)
#define USER_CS ((GD_UTEXT) | DPL_USER)
#define USER_DS ((GD_UDATA) | DPL_USER)

#endif // ARCH_X86_MM_LAYOUT_H