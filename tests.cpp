#include "tests.h"

void run_tests {
    TEST(growing,body_contains){
        Candle riba(300,500,400,600);
        EXPECT_EQ(riba.body_contains(500),1);
        EXPECT_EQ(riba.body_contains(400),1);
        EXPECT_EQ(riba.body_contains(600.1),0);
        EXPECT_EQ(riba.body_contains(599.9),1);
        
    }
    
    TEST(neutral,body_contains){
        Candle riba(0,0,0,0);
        EXPECT_EQ(riba.body_contains(0),1);
        EXPECT_EQ(riba.body_contains(-1),0);
    }
    
    TEST(falling,body_contains){
        Candle riba(500,400,200,100);
        EXPECT_EQ(riba.body_contains(400),1);
        EXPECT_EQ(riba.body_contains(200),1);
        EXPECT_EQ(riba.body_contains(300),1);
        EXPECT_EQ(riba.body_contains(501),0);
        EXPECT_EQ(riba.body_contains(99),0);
    }
    
    TEST(growing,contains){
        Candle riba(300,500,400,600);
        EXPECT_EQ(riba.contains(500),1);
        EXPECT_EQ(riba.contains(400),1);
        EXPECT_EQ(riba.contains(600.1),0);
        EXPECT_EQ(riba.contains(399.9),0);
        
    }
    
    TEST(neutral,contains){
        Candle riba(0,0,0,0);
        EXPECT_EQ(riba.contains(0),1);
        EXPECT_EQ(riba.contains(-1),0);
    }
    
    TEST(falling,contains){
        Candle riba(500,400,200,100);
        EXPECT_EQ(riba.contains(400),1);
        EXPECT_EQ(riba.contains(200),1);
        EXPECT_EQ(riba.contains(300),1);
        EXPECT_EQ(riba.contains(501),0);
        EXPECT_EQ(riba.contains(99),0);
    }
    
    TEST(growing,full_size){
        Candle riba(300,500,400,600);
        EXPECT_EQ(riba.full_size(),100);  
    }
    
    TEST(neutral,full_size){
        Candle riba(0,0,0,0);
        EXPECT_EQ(riba.full_size(),0);
    }
    
    TEST(falling,full_size){
        Candle riba(500,400,200,100);
        EXPECT_EQ(riba.full_size(),200);
    }
    
    TEST(growing,body_size){
        Candle riba(300,500,400,600);
        EXPECT_EQ(riba.body_size(),300);  
    }
    
    TEST(neutral,body_size){
        Candle riba(0,0,0,0);
        EXPECT_EQ(riba.body_size(),0);
    }
    
    TEST(falling,body_size){
        Candle riba(500,400,200,100);
        EXPECT_EQ(riba.body_size(),400);
    }
    
    TEST(growing,is_green){
        Candle riba(300,500,400,600);
        EXPECT_EQ(riba.is_green(),1);  
    }
    
    TEST(neutral,is_green){
        Candle riba(0,0,0,0);
        EXPECT_EQ(riba.is_green(),0);
    }
    
    TEST(falling,is_green){
        Candle riba(500,400,200,100);
        EXPECT_EQ(riba.is_green(),0);
    }
    
    TEST(growing,is_red){
        Candle riba(300,500,400,600);
        EXPECT_EQ(riba.is_red(),0);  
    }
    
    TEST(neutral,is_red){
        Candle riba(0,0,0,0);
        EXPECT_EQ(riba.is_red(),0);
    }
    
    TEST(falling,is_red){
        Candle riba(500,400,200,100);
        EXPECT_EQ(riba.is_red(),1);
    }
}