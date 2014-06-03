/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年05月30日 01时26分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shui(dubingyang), dubingyangxiyou@gmail.com
 *        Company:  Class 1201 of software engineering
 *
 * =====================================================================================
 */


#include <iostream>
#include <mysql/mysql.h>

using namespace std;

int main(int argc, char *argv[])
{
	MYSQL mysql;

	mysql_init(&mysql);
	
	if (mysql_real_connect(&mysql,"127.0.0.1" ,"root",NULL, "test", 0,NULL,0)) {
		cout << "ok\n";
	} else {
		cout << "error\n";
	}

	return 0;

}
