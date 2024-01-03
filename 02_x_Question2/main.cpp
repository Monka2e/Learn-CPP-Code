int readNumber();
void writeAnswer(int value);

int main() {
    writeAnswer(readNumber() + readNumber());
    return 0;
}
