#include "student.h"
#include "getQualification.h"
//#include "getStatus.h"
#include <gtest/gtest.h>
namespace {
class StudentTest : public ::testing::Test {

  protected:
    void SetUp() {
        // override {
        pre = new Qualification(1001,25000,90.4, 75.46, "Science", 88.6,"Sci&Tech");
        //post = new Status(1002,"Placed",25000);
    }
    void TearDown() {
        delete pre;
        //delete post;
    }
    StudentBase *pre;
    //StudentBase *post;
};
TEST_F(StudentTest, DefaultConstructor) {
    Qualification c1;
    EXPECT_EQ(0, c1.getSscPercentage());
    EXPECT_EQ(0, c1.getHscPercentage());
    EXPECT_EQ(0, c1.getHscType().length());
    EXPECT_EQ(0, c1.getDegreePercentage());
    EXPECT_EQ(0, c1.getDegreeType().length());
}
TEST_F(StudentTest, ParameterizedConstructorPre) {
    Qualification *fptr = dynamic_cast<Qualification*>(pre);
    EXPECT_EQ(90.4, fptr->getSscPercentage());
    EXPECT_EQ(75.46, fptr->getHscPercentage());
    EXPECT_STREQ("Science", fptr->getHscType().c_str());
    EXPECT_EQ(88.6, fptr->getDegreePercentage());
    EXPECT_STREQ("Sci&Tech", fptr->getDegreeType().c_str());
}
TEST_F(StudentTest, ComputationTest) {
    EXPECT_EQ(26000, pre->credit(1000));
}
TEST_F(StudentTest, ComputationTestD) {
    EXPECT_EQ(24000, pre->debit(1000));
}
}
