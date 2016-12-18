#include <iostream>
#include "MongoUtil.h"
using namespace std;
int main() {
    cout << "*** MongoUtil Demo ***" << endl;
    /*!
     * Get a MongoDB instance according to IP and port.
     * Exception will be throw if:
     *     an invalid IP.
     *     the MongoDB is unreachable.
     */
    cout<<"Get a MongoDB instance"<<endl;
    string ip = "127.0.0.1";
    int port = 27017;
    MongoClient conn = MongoClient(ip.c_str(), port);
    /*!
     * Get database names, a string vector is returned.
     */
    cout<<"Get database names"<<endl;
    vector<string> dbnames = conn.database_names();
    for (vector<string>::iterator it = dbnames.begin(); it != dbnames.end(); it++) {
        cout<<*it<<endl;
    }
    return 0;
}
