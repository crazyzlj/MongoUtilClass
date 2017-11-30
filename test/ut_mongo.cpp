#include "gtest/gtest.h"
#include "MongoUtil.h"

TEST(Test_Mongo, initMongoDB) {
    string ip = "127.0.0.1";
    int port = 27017;
    MongoClient *client = MongoClient::Init(ip.c_str(), port);
    EXPECT_NE(nullptr, client);
    port = 27018;
    MongoClient *client2 = MongoClient::Init(ip.c_str(), port);
    EXPECT_EQ(nullptr, client2);
}