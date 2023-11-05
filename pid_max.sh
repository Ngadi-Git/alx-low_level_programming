#!/bin/bash
pid_max = $(cat /proc/sys/kernel/pid_max$)

echo "Maximum Process ID value: $pid_max"
