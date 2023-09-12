// using the bank example in the slides
// this is how you might code it in a procedural programming paradigm

int main(){
    // assume you have 5 customers
    double balances[5] = {100, 200, 200, 100, 75};

    // assume that the customer's ID is their index number
    // eg: customer 0 has their balance in balances[0];

    // let's give customer 2 $50
    balances[2] += 50;

    // but if I can access balances[2], I can access any index in balances

}