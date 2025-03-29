// Your code here...
int calculatePenalty(int subday,int submonth, int subyear,int dueday,int duemonth, int dueyear){
    int fine;
    if(subyear!=dueyear){
        fine = 5000;
        return fine;
    }
    else if(submonth!=duemonth){
        fine = 200*(submonth-duemonth);
        return fine;
    }
    else{
        fine = 10*(subday-dueday);
        return fine;
    }
}