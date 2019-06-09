int main()
{
    response r[] = {
        {"Mike", DUMP}, {"Luis", SECOND_CHANCE},
        {"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
    };
    int i;
    for (i = 0; i < 4; i++) {
        switch(r[i].type) {
            case DUMP :
                dump(r[i]);
                break;
            case SECOND_CHANCE :
                second_chance(r[i]);
                break;
            deafult:
                marriage(r[i]);
        }
    }
    return 0;
}