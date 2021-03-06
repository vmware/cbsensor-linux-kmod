/*
 * Copyright 2019-2020 VMware, Inc.
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

enum CB_EVENT_TYPE {
	CB_EVENT_TYPE_UNKNOWN = 0,

	CB_EVENT_TYPE_PROCESS_START = 1,
	CB_EVENT_TYPE_PROCESS_EXIT = 2,
	CB_EVENT_TYPE_MODULE_LOAD = 3,

	CB_EVENT_TYPE_FILE_CREATE = 10,
	CB_EVENT_TYPE_FILE_DELETE = 11,
	CB_EVENT_TYPE_FILE_WRITE = 12,
	CB_EVENT_TYPE_FILE_CLOSE = 13,
	// CB_EVENT_TYPE_DIR_CREATE          = 14,
	// CB_EVENT_TYPE_DIR_DELETE          = 15,

	CB_EVENT_TYPE_NET_CONNECT_PRE = 20,
	CB_EVENT_TYPE_NET_CONNECT_POST = 21,
	CB_EVENT_TYPE_NET_ACCEPT = 22,

	CB_EVENT_TYPE_DNS_RESPONSE = 25,
	// CB_EVENT_TYPE_CHILDPROC_START     = 26,
	CB_EVENT_TYPE_PROC_ANALYZE = 27,
	CB_EVENT_TYPE_PROCESS_BLOCKED = 28,
	CB_EVENT_TYPE_PROCESS_NOT_BLOCKED = 29,

	CB_EVENT_TYPE_WEB_PROXY = 30,

	CB_EVENT_TYPE_HEARTBEAT = 31,

	CB_EVENT_TYPE_MAX
};
