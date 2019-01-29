#include <stdint.h>

enum STATE {
    STATE_0,
    STATE_1,
    STATE_QUIT
};

enum STATE state = STATE_0;

void loop() {
    switch(state) {
        case STATE_0:
            state = STATE_1;
            break;

        case STATE_1:
            state = STATE_QUIT;
            break;

        case STATE_QUIT:
            break;
    }
}

int main() {
    while (state != STATE_QUIT) {
        loop();
    }
}
