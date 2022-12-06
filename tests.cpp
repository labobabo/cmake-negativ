#include "revpart.h"
#include "revpart.cpp"

using namespace std;

TEST (REVERSTEST, EQUALITY)
{	
	string m = "English";
	string h = reverse(m);
	ASSERT_NE(h, m);
}

TEST (SIZETEST, Length)
{
	string m = "Japan";
	string h = reverse(m);
	ASSERT_EQ(m.length(), h.length());
}

TEST (FUNCTIONTEST,WORK) 
{
	string incom_line = "Ru";
	string output_line = reverse(incom_line);
	reverse (incom_line.begin(), incom_line.end());
	ASSERT_EQ (output_line, incom_line);	
} 

TEST (EXITTEST, SIMBOLICS)
{
	string ex_triggers = "1234567890-=/";
	bool exit_code = check_string(ex_triggers);
	EXPECT_FALSE (exit_code);
}

TEST (MAXSIZETEST, SIZE)
{
	string test_string ("This is test string that more than fifty symbols yep "  ); 
	bool out_put_trigger = check_string(test_string);
	EXPECT_FALSE(out_put_trigger);
}
