// Your code here...
int calculatePenalty(int subday,int submonth, int subyear,int dueday,int duemonth, int dueyear){
    int fine;
    if(subyear!=dueyear && subyear>dueyear){
        fine = 5000;
        return fine;
    }
    if(subyear<dueyear){
        return 0;
    }
    else if(submonth>duemonth){
        fine = 200*(submonth-duemonth);
        return fine;
    }
    else if(subday>dueday){
        fine = 10*(subday-dueday);
        return fine;
    }
    else{
        return 0;
    }
}