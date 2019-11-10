/** @file
 *
 *	Copyright (c) 2019 Kevin L. Becker. All rights reserved.
 *
 *	Created on: Apr 21, 2019
 *	@author KBECKE35
 */

#ifndef UT_CWSW_LIB_TEST_OP_STATES_H_
#define UT_CWSW_LIB_TEST_OP_STATES_H_

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


#ifdef	__cplusplus
extern "C" {
#endif


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

extern int init_suite_arch_op_states(void);
extern int clean_suite_arch_op_states(void);

extern void test_sr_arch_0000(void);
extern void test_sr_arch_0001(void);
extern void test_sr_arch_0002(void);
extern void test_sr_arch_0003(void);
extern void test_sr_arch_0004(void);


#ifdef	__cplusplus
}
#endif

#endif /* UT_CWSW_LIB_TEST_OP_STATES_H_ */
