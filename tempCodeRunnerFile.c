f (n >0){
        toh(n-1,src,aux,tar);
        printf("Moved Disk %d from %c to %c\n",n,src,tar);
        toh(n-1,aux,tar,src);
    }