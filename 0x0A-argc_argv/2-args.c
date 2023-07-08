#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all the arguments of a program
 *@argc: number of arguments
 *
 *@argv: array of arguments.
 *
 *Return: Always (0) success.
 */

def print_arguments():
    arguments = sys.argv[1:]  # Exclude the first argument (script name)
    for arg in arguments:
        print(arg)

if __name__ == "__main__":
    print_arguments()
