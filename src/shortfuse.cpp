#include <cstdio>
#include "shortfuse.h"

#define FUSE_USE_VERSION 29

#include "fuse.h"

struct fuse_operations shortfuse_ops {

};

int main(int argc, char* argv[])
{
	printf("hello shortfuse. calling fuse_main\n");
	fuse_main(argc, argv, &shortfuse_ops, NULL);
}