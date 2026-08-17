int maxProfit(int* prices, int pricesSize) {
    int i, buy_stock = prices[0], profit = 0;

    for (i = 1; i < pricesSize; i++) {
        if (prices[i] < buy_stock)
            buy_stock = prices[i];

        if (prices[i] - buy_stock > profit)
            profit = prices[i] - buy_stock;
    }

    return profit;
}
