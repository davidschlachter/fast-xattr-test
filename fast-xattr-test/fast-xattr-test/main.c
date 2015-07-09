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
#include <string.h>
#include <errno.h>

int main(int argc, const char * argv[]) {
    //char a[80];
    //strcpy(a, argv[2]);
    const char *path = argv[2];
    
    //char b[32];
    //strcpy(b, argv[1]);
    const char *name = argv[1];
    
    int value[1];
    
    long rval = 0;
    rval = getxattr(path, name, &value, sizeof(value), 0, 0);
    
    if (rval != -1) {
        return 0;
    } else {
        return 1;
    };
}
