int counter(char* str){
    int i=0,count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
void caesarCipher(char *message, int shift, char *encrypted)
{
    int len = counter(message);
    for (int i = 0; i < len; i++)
    {
        char r = message[i];
        if (r >= 'a' && r <= 'z')
        {
            r = ((r - 'a' + shift) % 26) + 'a';
            r += shift;

        }
        else if(r >= 'A' && r <= 'Z')
        {
            r = ((r - 'A' + shift) % 26) + 'A';
            r += shift;
        }
        encrypted[i] = r;
    }
    encrypted[len] = '\0';

    for (int i = 0; i < len; i++)
    {
        if (encrypted[i] == '#' || encrypted[i]=='$')
        {
            encrypted[i] = ' ';
        }
    }
}