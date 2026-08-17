int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int i, j, s, max_wealth = 0;

    for (i = 0; i < accountsSize; i++) {
        s = 0;
        for (j = 0; j < *(accountsColSize); j++) {
            s += accounts[i][j];
        }
        if (s > max_wealth)
            max_wealth = s;
    }

    return max_wealth;
}
