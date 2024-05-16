int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int counter = 0;
    for (int i = 0; i < hoursSize; i++) {
        if (hours[i] >= target) {
            counter++;
        }
    }
    return counter;
}