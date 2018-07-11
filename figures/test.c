int test(unsigned a, unsigned N) {
    int c = 0;
    while (c < N) {
        a = a / 2;
        c++;
    }
    if (a == 0) {
        return -1;
    } else {
        return a;
    }
}
