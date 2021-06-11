int f(unsigned x, unsigned y) {
    int a[10] = {};
    return a[x%6 + y%6];
}

int main() {
    return f(5, 5);
}
