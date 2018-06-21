/*************************************************************************
	> File Name: test.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2018年06月21日 星期四 14时33分03秒
 ************************************************************************/

#include<iostream>
#include<json/json.h>
#include<string>
using namespace std;

int main()
{
	string test="{\"id\":\"1\",\"name\":\"lisi\"}";
	Json::Reader reader;
	Json::Value value;
	cout<<"test.."<<endl;
	if(reader.parse(test,value))
	{
		if(!value["id"].isNull())
		{
			cout<<value["name"].asString()<<endl;

		}
	}
	return 0;
}



