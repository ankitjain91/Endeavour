class Solution {
public:

int helperFindChar(string a, char b)
{
	a.c_str();
	for(int i=0;i<(int)a.size();i++)
	{
		if(a[i] == b)
		{
			return i;
		}
	}
	return -1;
}


int lengthOfLongestSubstring(string s)
{
	if(s.size() == 0)
	{
		return 0;
	}
	char p[(int)s.size()];
	int len = -1, plen = 0;
	std::string res = "";
	int i=0;
	strncpy(p,s.c_str(),(int)s.size());
	int k=0;
	int s_Size = (int)s.size();

	while(i < (int)s.size())
	{
		if((helperFindChar(res,p[i])) == -1)
		{
			res+=p[i];
			
		}
		else
		{
			if((int)res.size() > len)
			len = (int)res.size();
			i = helperFindChar(res,p[i]);
			s = s.substr(++i, s_Size);
			strncpy(p,s.c_str(),(int)s.size());	
			i = -1;
			res = "";
		}

		i++;
	}

	if(len < (int)res.size())
	{
		len = (int)res.size();
	}

	return len;
}

};
