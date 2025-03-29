void caesarCipher(char *message, int shift, char *encrypted)
{
    int len = strlen(message);
    for (int i = 0; i < len; i++)
    {
        char r = message[i];
        if (r >= 'a' && r <= 'z')
        {
            r = ((r - 'a' + shift) % 26) + 'a';
        }
        else
        {
            r += shift;
        }
        encrypted[i] = r;
    }
    encrypted[len] = '\0';

    for (int i = 0; i < len; i++)
    {
        if (encrypted[i] == '#')
        {
            encrypted[i] = ' ';
        }
    }
}