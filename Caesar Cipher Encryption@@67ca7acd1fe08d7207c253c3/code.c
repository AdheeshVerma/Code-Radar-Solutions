// Your code here...
void caesarCipher(char* message, int shift, char* encrypted){
    int len = sizeof(message)/sizeof(message[0]);
    for(int i=0;i<len;i++){
        char r = message[i];
        if(r<'z' && r>'a'){
            if(r+shift>'z'){
                r=shift-'z'+'a';
            }
            else
            r+=shift;
        }
        encrypted[i]=r;
    }

}