# Experiment 8: FCFS and SJF Scheduling

## Aim
To implement FCFS (First Come First Serve) and SJF (Shortest Job First) CPU scheduling algorithms in C.

## Description
CPU scheduling is an Operating System technique used to select a process for execution.

### 1. FCFS (First Come First Serve)
FCFS executes processes in the order they arrive in the ready queue. It follows the FIFO (First In, First Out) principle.

### 2. SJF (Shortest Job First)
SJF selects the process with the shortest burst time for execution first.

## Files
- `experiment8_fcfs.c` — C program for FCFS scheduling.
- `experiment8_sjf.c` — C program for SJF scheduling.
- `experiment8_fcfs_output.png` — FCFS output screenshot from the lab manual.
- `experiment8_sjf_output.png` — SJF output screenshot from the lab manual.

## Requirements
- GCC compiler
- C programming environment

## Compilation and Execution

### FCFS
```bash
gcc experiment8_fcfs.c -o fcfs
./fcfs
```

### SJF
```bash
gcc experiment8_sjf.c -o sjf
./sjf
```

## Output
Refer to the following images for the output screenshots from the lab manual:
- `experiment8_fcfs_output.png`
- `experiment8_sjf_output.png`

## Result
The FCFS and SJF CPU scheduling algorithms are implemented in C to demonstrate how processes are selected for execution.
