/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKMY_SQRT_H
#define _MOCKMY_SQRT_H

#include "unity.h"
#include "my_sqrt.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

#ifdef __cplusplus
extern "C" {
#endif

void Mockmy_sqrt_Init(void);
void Mockmy_sqrt_Destroy(void);
void Mockmy_sqrt_Verify(void);




#define my_sqrt_ExpectAndReturn(x, cmock_retval) my_sqrt_CMockExpectAndReturn(__LINE__, x, cmock_retval)
void my_sqrt_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double x, double cmock_to_return);

#ifdef __cplusplus
}
#endif

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif