 * Copyright (c) 2003-2004 Apple Computer, Inc. All rights reserved.
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
#include <sys/vnode_internal.h>
#include <sys/ipc.h>
#include <kern/kalloc.h>
static void audit_sys_auditon(struct audit_record *ar, struct au_record *rec);

	bsm_audit_mutex = mutex_alloc(0);
			kfree(rec, sizeof(*rec));
int
kau_close(struct au_record *rec, struct timespec *ctime, short event)

	return(retval);
		kfree(tok, sizeof(*tok) + tok->len);

static void
	case A_SETPOLICY:
	case A_SETKMASK:
	case A_SETQCTRL:
	case A_SETUMASK:
	case A_SETSMASK:
	case A_SETCOND:
	case A_SETCLASS:
	case A_SETPMASK:
	case A_SETFSIZE:
	case AUE_LCHOWN:

		tok = au_to_arg32(1, "addr", (u_int32_t)ar->ar_arg_addr); /* LP64todo */
		tok = au_to_arg32(2, "len", ar->ar_arg_len); /* LP64todo */
		tok = au_to_arg32(3, "addr", (u_int32_t)ar->ar_arg_addr); /* LP64todo */
				tok = au_to_arg32(1, "setgroups", ar->ar_arg_groups.gidset[ctr]);
bsm_rec_verify(void* rec)