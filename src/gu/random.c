
int guRandom(void)
{
    static unsigned int xseed = 174823885;
    unsigned int x;

    x = (xseed<<2) + 2;

    x *= (x+1);
    x = x >> 2;

    xseed = x;

    return( x );
}
