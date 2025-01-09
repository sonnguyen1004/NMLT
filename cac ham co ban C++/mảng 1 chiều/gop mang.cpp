void GopMang(int a[], int na, int b[], int nb, int c[], int &nc) {
    nc = 0;
    for (int i = 0; i < na; i++) {
        c[nc] = a[i];
        nc++; // c[nc++] = a[i];
    }
    for (int i = 0; i < nb; i++) {
        c[nc] = b[i];
        nc++; // c[nc++] = b[i];
    }
}