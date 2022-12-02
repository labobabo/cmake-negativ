#include<iostream>
#include<string>
#include<gtest/gtest.h>
using namespace std;
string repsent,sent;
int main(int argc,char **argv)
{
	cout<<" Write you message: ";
	getline(cin,repsent);
	sent=repsent;
	for (int i=0;i<(repsent.length()/2);++i)
	{
	int tmp=repsent[i];
	repsent[i]=repsent[repsent.length()-1-i];
	repsent[repsent.length()-1-i]=tmp;
	}
	cout<<" Invert message: "<<repsent<<endl;
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();	
	return(0);
}

TEST(testing,Equality)
{
	ASSERT_NE(sent,repsent);
}
TEST(testing,Length)
{
	ASSERT_EQ(sent.length(),repsent.length());
}


