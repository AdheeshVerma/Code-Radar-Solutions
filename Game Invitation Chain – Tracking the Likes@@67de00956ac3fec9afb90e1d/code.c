// Your code here...
int totalLikes(int n){
    if(n==1){
        return 2;
    }
    else{
        int shared = 5,res=0;
        for(int i=0;i<n;i++){
            int likes = shared/2;
            res+=likes;
            shared = likes*3;
        }
        return res;
    }
}