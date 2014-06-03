/*
 * =====================================================================================
 *
 *       Filename:  mysql_connect.cpp
 *
 *    Description:  封装mysql的函数的实现
 *
 *        Version:  1.0
 *        Created:  2014年06月03日 23时53分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shui(dubingyang), dubingyangxiyou@gmail.com
 *        Company:  Class 1201 of software engineering
 *
 * =====================================================================================
 */

#include "mysql_connect.h"
#include <iostream>

using namespace std;


/*@初始化数据库
 *@将错误信息打印出来
 *
 */
my_mysql::my_mysql()
{
	mysql_init(&this->my_mysql_t);
	
}

/*@数据库的连接函数
 *@参数是为连接其他的数据库提供接口
 *
 */
void my_mysql::my_mysql_connect(const char *connect_host, 
				const char *mysql_name,
				const char *mysql_passwd,
				const char *mysql_table)
{
	mysql_real_connect(&this->my_mysql_t, connect_host, mysql_name, 
				mysql_passwd, mysql_table, 0, NULL, 0 );
		
	if (&this->my_mysql_t ) {
		cout << mysql_error(&this->my_mysql_t);
	}
}


/*@执行mysql的操作
 *
 *
 */
void my_mysql::my_mysql_work(const char *commect)
{
	mysql_query(&this->my_mysql_t, commect);
	
	if (&this->my_mysql_t ) {
		cout << mysql_error(&this->my_mysql_t) <<endl;
	}
}


/*@数据库类的析构函数
 *
 *
 */
my_mysql::~my_mysql()
{
	mysql_close(&this->my_mysql_t);
}

#define DEBUG
#ifdef  DEBUG

int main(int argc, char *argv[])
{
	my_mysql my_db;

	my_db.my_mysql_connect("127.0.0.1", "root", NULL, NULL);

	my_db.my_mysql_work("drop database dubingyang");

	my_db.~my_mysql();
}

#endif 
