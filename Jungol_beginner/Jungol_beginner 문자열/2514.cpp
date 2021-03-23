using namespace std;

int main() {
    char koo[10001];
    cin >> koo;
    int koi = 0;
    int ioi = 0;
    for (int i = 0; i < strlen(koo); i++) {
        if (koo[i] == 'K' && koo[i + 1] == 'O' && koo[i + 2] == 'I') {
            koi += 1;
        }
        else if (koo[i] == 'I' && koo[i + 1] == 'O' && koo[i + 2] == 'I') {
            ioi += 1;
        }

    }
    printf("%d\n", koi);
    printf("%d\n", ioi);
    return 0;
}