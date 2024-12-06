#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankAccount {
private:
    int balance;
    vector<int> transactions;
    vector<int> commits;

public:
    BankAccount(int initial_balance) : balance(initial_balance) {}

    void read() {
        cout << balance << endl;
    }

    void credit(int amount) {
        transactions.push_back(amount);
        balance += amount;
    }

    void debit(int amount) {
        transactions.push_back(-amount);
        balance -= amount;
    }

    void abort(size_t transaction_number) {
        if (transaction_number > 0 && transaction_number <= transactions.size() &&
            transaction_number > commits.size()) {
            int amount = transactions[transaction_number - 1];
            if (amount > 0) {
                balance -= amount;
            } else {
                balance += abs(amount);
            }
            transactions[transaction_number - 1] = 0;
        } 
        // else {
        //     cout << "Cannot abort transaction " << transaction_number << endl;
        // }
    }

    void commit() {
        commits.push_back(balance);
    }

    void rollback(size_t commit_number) {
        if (commit_number > 0 && commit_number <= commits.size()) {
            balance = commits[commit_number - 1];
            transactions.resize(commit_number);
            commits.resize(commit_number - 1);
        } 
        // else {
        //     cout << "Cannot rollback to commit " << commit_number << endl;
        // }
    }
};

int main() {
    int initial_balance;
    
    cin >> initial_balance;

    int N;
    
    cin >> N;

    BankAccount account(initial_balance);

    for (int i = 0; i < N; ++i) {
        string operation;
        
        cin >> operation;

        if (operation == "read") {
            account.read();
        } else if (operation == "credit") {
            int amount;
            cin >> amount; 
            account.credit(amount);
        } else if (operation == "debit") {
            int amount;
            cin >> amount; 
            account.debit(amount);
        } else if (operation == "abort") {
            size_t transaction_number; 
            cin >> transaction_number; 
            account.abort(transaction_number);
        } else if (operation == "commit") {
            account.commit();
        } else if (operation == "rollback") {
            size_t commit_number; 
            cin >> commit_number; 
            account.rollback(commit_number);
        }
    }

    return 0;
}