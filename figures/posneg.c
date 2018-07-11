while (i < N) {
    if (nondet()) {
        i+=2;
    } else {
        i+=3;
    }
    i--;
}
