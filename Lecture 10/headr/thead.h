class bank_account{
    private:
     string name;
     int account_number;
     float balance;
    public:
    bank_account(string name, int an,float bal=0.0);
    void get_details(void);
    void deposit(float amount);
    void withdraw(float amount);
};