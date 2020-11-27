struct patients{
    char name[255], month[255];
    int day, year;
    patients *next, *prev;
}   *head, *tail, *curr;
