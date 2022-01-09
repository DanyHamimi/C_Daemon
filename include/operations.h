#ifndef OPERATIONS_H
#define OPERATIONS_H

#define _DEFAULT_SOURCE

#include <dirent.h>
#include <endian.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "client-request.h"
#include "command.h"
#include "cstring.h"
#include "saturnd-create-task.h"
#include "server-reply.h"
#include "timing-text-io.h"
#include "util.h"

int handle_operation(char *buf);

#endif