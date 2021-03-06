/*
 * ============================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 09时05分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jianxi sun (jianxi), ycsunjane@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <stdio.h>
#include <stdint.h>
#include <signal.h>
#include <unistd.h>

#include "arg.h"
#include "message.h"
#include "process.h"
#include "msg.h"
#include "net.h"
#include "netlayer.h"
#include "log.h"
#include "link.h"
#include "thread.h"

void ui();

int main(int argc, char *argv[])
{
	proc_arg(argc, argv);

	/* create recv pthread */
	net_init();
	/* create message loop travel pthread */
	message_init();
	/* create report pthread */
	init_report();

	pause();
	return 0;
}
