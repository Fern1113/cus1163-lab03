#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>

// Constants
#define NUM_VALUES 5

// Function prototypes
int run_basic_demo(void);
int run_multiple_pairs(int num_pairs);
void producer_process(int write_fd, int start_num);
void consumer_process(int read_fd, int pair_id);

#endif // PROCESS_MANAGER_H
