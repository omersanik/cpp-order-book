#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

class OrderBook{
        public:
            //Enumarations for order types and sides
            enum class OrderType {Market, Limit, Stop, GoodTillCancelled, FillOrKill_Limit};
            enum class Side {Buy, Sell};
            
        class Order {`
               public:
                   Order(int id, OrderType type, Side side, double price, int quantity)
                        :id(id), type(type), side(side), price(price), quantity(quantity) {}
   };
};