#include "Talkie.h"
#include "Vocab_US_Large.h"
#include "Vocab_Special.h"
#include "Vocab_US_Acorn.h"
#include "Vocab_US_TI99.h"

Talkie voice;

void setup() {

}
void loop() {

    voice.say(spPAUSE2);
    voice.say(spa_PLEASE);
    voice.say(sp2_GO);
    voice.say(sp2_MEASURE);
    voice.say(spa_YOUR);
    voice.say(sp2_HIGH);

}
