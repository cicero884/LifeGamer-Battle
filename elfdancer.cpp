#include "elfdancer.h"

ElfDancer::ElfDancer(int group, Battle *battle, QObject *parent)
    : Minion('9', "elf_dancer", 1000, 5, 0.3f, 0, 0, group, battle, parent)
{

}

void ElfDancer::active()
{
    static int cnt = 0;
    cnt++;
    if(!(cnt % 10)) {
        if(group == 1) battle->p1->mana++;
        else battle->p2->mana++;
        hp -= 100;
    }

    walk();
}