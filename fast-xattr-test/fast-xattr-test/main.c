//
//  main.c
//  fast-xattr-test
//
//  Created by David Schlachter on 2015-07-09.
//  Copyright (c) 2015 David Schlachter. All rights reserved.
//

#include <stdio.h>
#include <sys/xattr.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    const char *path;
    const char *name;
    void *value = malloc(15);
    size_t size;
    u_int32_t position;
    int options = 0;
    
    path = argv[1];
    name = argv[2];
    size = 14;
    position = 0;
    
    if (!getxattr(path, name, value, size, position, options)) {
        return 0;
    } else {
        return 1;
    };
}
